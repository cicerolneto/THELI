#include "scampworker.h"

#include <QProcess>
#include <QTest>

ScampWorker::ScampWorker(QString command, QString dir, QString shortname, QObject *parent) : Worker(parent)
{
    scampCommand = command;
    scampDirName = dir;
    shortname = shortname;
}

void ScampWorker::runScamp()
{
    // If using QProcess instead of QProcess*, we get a "cannot create child in different thread" error
    extProcess = new QProcess();
//    connect(&extProcess, &QProcess::readyReadStandardOutput, this, &ScampWorker::processExternalStdout);
    connect(extProcess, &QProcess::readyReadStandardError, this, &ScampWorker::processExternalStderr);
    QTest::qWait(300);   // If I don't do this, the GUI crashes. It seems the process produces an output faster than the connection can be made ...
    extProcess->setWorkingDirectory(scampDirName);
    extProcess->start("/bin/sh -c \""+scampCommand+"\"");
    extProcess->waitForFinished(-1);

    emit finishedScamp();
    emit finished();
    delete extProcess;
    // stdout and stderr channels are slotted into the monitor's plainTextEdit
}

/*
void ScampWorker::runScamp()
{
    // If using QProcess instead of QProcess*, we get a "cannot create child in different thread" error
    QProcess extProcess1;
//    connect(&extProcess, &QProcess::readyReadStandardOutput, this, &ScampWorker::processExternalStdout);
    connect(&extProcess1, &QProcess::readyReadStandardError, this, &ScampWorker::processExternalStderr);
    QTest::qWait(300);   // If I don't do this, the GUI crashes. It seems the process produces an output faster than the connection can be made ...
    extProcess1.setWorkingDirectory(scampDirName);
    extProcess1.start("/bin/sh -c \""+scampCommand+"\"");
    extProcess1.waitForFinished(-1);

    emit finishedScamp();
    emit finished();
    // stdout and stderr channels are slotted into the monitor's plainTextEdit
}
*/

void ScampWorker::abort()
{
    extProcess->kill();
    emit finished();
}

void ScampWorker::processExternalStderr()
{
    QProcess *process = qobject_cast<QProcess*>(sender());

    // have to remove the '\x1B[1A' and '\x1B[1M' escape sequences.
    QString stderr(process->readAllStandardError());
    stderr.remove(QRegExp("[^a-zA-Z\\d\\s\\.\\:\\-\\_/]"));
    stderr.remove("1A1M ");
    stderr.remove("1A ");
    stderr.remove("1M ");
//    stderr.remove(QRegExp("![^0131m]"));
    stderr.remove("0131m");
    stderr = stderr.simplified();
    stderr.replace(" WARNING: ", "<br>WARNING: ");
    stderr.replace(" Error: ", "<br>Error: ");
    stderr.replace("... Matching ", "... <br>Matching ");
    stderr.replace("detections ", "detections<br>");
    stderr.replace("scamp Examining", "scamp<br>Examining");
    stderr.replace(" Instrument", "<br>Instrument");
    stderr.replace(" Grouping fields:", "<br>Grouping fields:");
    stderr.replace(" Matching field", "<br>Matching field");
    stderr.replace(" Grouping fields on the sky", "<br>Grouping fields on the sky");
    stderr.replace(" Group ", "<br>Group ");
    stderr.replace(" Generating ", "<br>Generating ");
//   if (!stderr.contains("Matching field") && !stderr.contains("Examining Catalog")) {
//        stderr.replace(" "+shortName, "<br>"+shortName);
//    }
    stderr.replace(" Making mosaic adjustments","<br>Making mosaic adjustments");
    stderr.replace("7m instruments pos.angle scale cont. shift cont.0m", "instruments pos.angle scale cont. shift cont.");
    stderr.replace(" Solving the global astrometry matrix", "<br>Solving the global astrometry matrix");
    stderr.replace(" Solving the global photometry matrix", "<br>Solving the global photometry matrix");
    stderr.replace(" Initializing the global astrometry matrix", "<br>Initializing the global astrometry matrix");
    stderr.replace(" Initializing the global photometry matrix", "<br>Initializing the global photometry matrix");
    stderr.replace("instruments epoch center coordinates radius scale","<br>instruments epoch center coordinates radius scale<br>");
    stderr.replace(" instrument found for astrometry:", " instrument found for astrometry:<br>");
    stderr.replace(" instrument found for photometry:", "<br>instrument found for photometry:<br>");
    stderr.replace(" Filling the global astrometry matrix", "<br>Filling the global astrometry matrix");
    stderr.replace(" Computing set shifts for field", "<br>Computing set shifts for field");
    stderr.replace(" Initializing detection weight factors", "<br>Initializing detection weight factors");
    stderr.remove(QRegExp("^1A"));
    stderr.remove(" 0m ");
    stderr.remove(" 7m ");
    if (stderr.contains(" deg ")) emit fieldMatched();

    QStringList warnings;
    warnings << "WARNING: " << "Not enough matched detections";
    QStringList errors;
    errors << "Error: ";

    QString type = "normal";
    for (auto &warning : warnings) {
        if (stderr.contains(warning)) {
            type = "warning";
            break;
        }
    }
    for (auto &error : errors) {
        if (stderr.contains(error)) {
            type = "error";
            stderr.remove("Error: ");
            emit errorFound();
            break;
        }
    }
    emit messageAvailable(stderr.simplified(), type);
}
