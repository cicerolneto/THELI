/****************************************************************************
** Meta object code from reading C++ file 'ivcolordockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/iview/dockwidgets/ivcolordockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ivcolordockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IvColorDockWidget_t {
    QByteArrayData data[16];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IvColorDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IvColorDockWidget_t qt_meta_stringdata_IvColorDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "IvColorDockWidget"
QT_MOC_LITERAL(1, 18, 18), // "colorFactorChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "redFactor"
QT_MOC_LITERAL(4, 48, 10), // "blueFactor"
QT_MOC_LITERAL(5, 59, 16), // "showG2references"
QT_MOC_LITERAL(6, 76, 7), // "checked"
QT_MOC_LITERAL(7, 84, 15), // "blueSliderMoved"
QT_MOC_LITERAL(8, 100, 11), // "sliderValue"
QT_MOC_LITERAL(9, 112, 16), // "blueFactorEdited"
QT_MOC_LITERAL(10, 129, 5), // "value"
QT_MOC_LITERAL(11, 135, 14), // "redSliderMoved"
QT_MOC_LITERAL(12, 150, 15), // "redFactorEdited"
QT_MOC_LITERAL(13, 166, 8), // "validate"
QT_MOC_LITERAL(14, 175, 30), // "on_blueResetPushButton_clicked"
QT_MOC_LITERAL(15, 206, 29) // "on_redResetPushButton_clicked"

    },
    "IvColorDockWidget\0colorFactorChanged\0"
    "\0redFactor\0blueFactor\0showG2references\0"
    "checked\0blueSliderMoved\0sliderValue\0"
    "blueFactorEdited\0value\0redSliderMoved\0"
    "redFactorEdited\0validate\0"
    "on_blueResetPushButton_clicked\0"
    "on_redResetPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IvColorDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   67,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IvColorDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IvColorDockWidget *_t = static_cast<IvColorDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorFactorChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->showG2references((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->blueSliderMoved((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->blueFactorEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->redSliderMoved((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->redFactorEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->validate(); break;
        case 7: _t->on_blueResetPushButton_clicked(); break;
        case 8: _t->on_redResetPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IvColorDockWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IvColorDockWidget::colorFactorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IvColorDockWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IvColorDockWidget::showG2references)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject IvColorDockWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_IvColorDockWidget.data,
      qt_meta_data_IvColorDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IvColorDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IvColorDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IvColorDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int IvColorDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void IvColorDockWidget::colorFactorChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IvColorDockWidget::showG2references(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
