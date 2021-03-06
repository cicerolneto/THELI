/*
Copyright (C) 2019 Mischa Schirmer

This file is part of THELI.

THELI is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program in the LICENSE file.
If not, see https://www.gnu.org/licenses/ .
*/

#include "cfitsioerrorcodes.h"
#include <QMap>

CfitsioErrorCodes::CfitsioErrorCodes(QObject *parent) : QObject(parent)
{
    populateErrorKeyMap();
}

void CfitsioErrorCodes::populateErrorKeyMap()
{
    errorKeyMap.insert(101, "SAME_FILE: input and output files are the same");
    errorKeyMap.insert(103, "TOO_MANY_FILES: tried to open too many FITS files");
    errorKeyMap.insert(104, "FILE_NOT_OPENED: could not open the named file");
    errorKeyMap.insert(105, "FILE_NOT_CREATED: could not create the named file");
    errorKeyMap.insert(106, "WRITE_ERROR: error writing to FITS file");
    errorKeyMap.insert(107, "END_OF_FILE: tried to move past end of file");
    errorKeyMap.insert(108, "READ_ERROR: error reading from FITS file");
    errorKeyMap.insert(110, "FILE_NOT_CLOSED: could not close the file");
    errorKeyMap.insert(111, "ARRAY_TOO_BIG: array dimensions exceed internal limit");
    errorKeyMap.insert(112, "READONLY_FILE: Cannot write to readonly file");
    errorKeyMap.insert(113, "MEMORY_ALLOCATION: Could not allocate memory");
    errorKeyMap.insert(114, "BAD_FILEPTR: invalid fitsfile pointer");
    errorKeyMap.insert(115, "NULL_INPUT_PTR: NULL input pointer to routine");
    errorKeyMap.insert(116, "SEEK_ERROR: error seeking position in file");
    errorKeyMap.insert(121, "BAD_URL_PREFIX: invalid URL prefix on file name");
    errorKeyMap.insert(122, "TOO_MANY_DRIVERS: tried to register too many IO drivers");
    errorKeyMap.insert(123, "DRIVER_INIT_FAILED: driver initialization failed");
    errorKeyMap.insert(124, "NO_MATCHING_DRIVER: matching driver is not registered");
    errorKeyMap.insert(125, "URL_PARSE_ERROR: failed to parse input file URL");
    errorKeyMap.insert(126, "RANGE_PARSE_ERROR: failed to parse input file URL");
    errorKeyMap.insert(150, "SHARED_ERRBASE");
    errorKeyMap.insert(151, "SHARED_BADARG");
    errorKeyMap.insert(152, "SHARED_NULPTR");
    errorKeyMap.insert(153, "SHARED_TABFULL");
    errorKeyMap.insert(154, "SHARED_NOTINIT");
    errorKeyMap.insert(155, "SHARED_IPCERR");
    errorKeyMap.insert(156, "SHARED_NOMEM");
    errorKeyMap.insert(157, "SHARED_AGAIN");
    errorKeyMap.insert(158, "SHARED_NOFILE");
    errorKeyMap.insert(159, "SHARED_NORESIZE");
    errorKeyMap.insert(201, "HEADER_NOT_EMPTY: header already contains keywords");
    errorKeyMap.insert(202, "KEY_NO_EXIST: keyword not found in header");
    errorKeyMap.insert(203, "KEY_OUT_BOUNDS: keyword record number is out of bounds");
    errorKeyMap.insert(204, "VALUE_UNDEFINED: keyword value field is blank");
    errorKeyMap.insert(205, "NO_QUOTE: string is missing the closing quote");
    errorKeyMap.insert(206, "BAD_INDEX_KEY: illegal indexed keyword name");
    errorKeyMap.insert(207, "BAD_KEYCHAR: illegal character in keyword name or card");
    errorKeyMap.insert(208, "BAD_ORDER: required keywords out of order");
    errorKeyMap.insert(209, "NOT_POS_INT: keyword value is not a positive integer");
    errorKeyMap.insert(210, "NO_END: couldn't find END keyword");
    errorKeyMap.insert(211, "BAD_BITPIX: illegal BITPIX keyword value");
    errorKeyMap.insert(212, "BAD_NAXIS: illegal NAXIS keyword value");
    errorKeyMap.insert(213, "BAD_NAXES: illegal NAXISn keyword value");
    errorKeyMap.insert(214, "BAD_PCOUNT: illegal PCOUNT keyword value");
    errorKeyMap.insert(215, "BAD_GCOUNT: illegal GCOUNT keyword value");
    errorKeyMap.insert(216, "BAD_TFIELDS: illegal TFIELDS keyword value");
    errorKeyMap.insert(217, "NEG_WIDTH: negative table row size");
    errorKeyMap.insert(218, "NEG_ROWS: negative number of rows in table");
    errorKeyMap.insert(219, "COL_NOT_FOUND: column with this name not found in table");
    errorKeyMap.insert(220, "BAD_SIMPLE: illegal value of SIMPLE keyword ");
    errorKeyMap.insert(221, "NO_SIMPLE: Primary array doesn't start with SIMPLE");
    errorKeyMap.insert(222, "NO_BITPIX: Second keyword not BITPIX");
    errorKeyMap.insert(223, "NO_NAXIS: Third keyword not NAXIS");
    errorKeyMap.insert(224, "NO_NAXES: Couldn't find all the NAXISn keywords");
    errorKeyMap.insert(225, "NO_XTENSION: HDU doesn't start with XTENSION keyword");
    errorKeyMap.insert(226, "NOT_ATABLE: the CHDU is not an ASCII table extension");
    errorKeyMap.insert(227, "NOT_BTABLE: the CHDU is not a binary table extension");
    errorKeyMap.insert(228, "NO_PCOUNT: couldn't find PCOUNT keyword");
    errorKeyMap.insert(229, "NO_GCOUNT: couldn't find GCOUNT keyword");
    errorKeyMap.insert(230, "NO_TFIELDS: couldn't find TFIELDS keyword");
    errorKeyMap.insert(231, "NO_TBCOL: couldn't find TBCOLn keyword");
    errorKeyMap.insert(232, "NO_TFORM: couldn't find TFORMn keyword");
    errorKeyMap.insert(233, "NOT_IMAGE: the CHDU is not an IMAGE extension");
    errorKeyMap.insert(234, "BAD_TBCOL: TBCOLn keyword value < 0 or > rowlength");
    errorKeyMap.insert(235, "NOT_TABLE: the CHDU is not a table");
    errorKeyMap.insert(236, "COL_TOO_WIDE: column is too wide to fit in table");
    errorKeyMap.insert(237, "COL_NOT_UNIQUE: more than 1 column name matches template");
    errorKeyMap.insert(241, "BAD_ROW_WIDTH: sum of column widths not = NAXIS1");
    errorKeyMap.insert(251, "UNKNOWN_EXT: unrecognizable FITS extension type");
    errorKeyMap.insert(252, "UNKNOWN_REC: unrecognizable FITS record");
    errorKeyMap.insert(253, "END_JUNK: END keyword is not blank");
    errorKeyMap.insert(254, "BAD_HEADER_FILL: Header fill area not blank");
    errorKeyMap.insert(255, "BAD_DATA_FILL: Data fill area not blank or zero");
    errorKeyMap.insert(261, "BAD_TFORM: illegal TFORM format code");
    errorKeyMap.insert(262, "BAD_TFORM_DTYPE: unrecognizable TFORM datatype code");
    errorKeyMap.insert(263, "BAD_TDIM: illegal TDIMn keyword value");
    errorKeyMap.insert(264, "BAD_HEAP_PTR: invalid BINTABLE heap address");
    errorKeyMap.insert(301, "BAD_HDU_NUM: HDU number < 1 or > MAXHDU");
    errorKeyMap.insert(302, "BAD_COL_NUM: column number < 1 or > tfields");
    errorKeyMap.insert(304, "NEG_FILE_POS: tried to move before beginning of file ");
    errorKeyMap.insert(306, "NEG_BYTES: tried to read or write negative bytes");
    errorKeyMap.insert(307, "BAD_ROW_NUM: illegal starting row number in table");
    errorKeyMap.insert(308, "BAD_ELEM_NUM: illegal starting element number in vector");
    errorKeyMap.insert(309, "NOT_ASCII_COL: this is not an ASCII string column");
    errorKeyMap.insert(310, "NOT_LOGICAL_COL: this is not a logical datatype column");
    errorKeyMap.insert(311, "BAD_ATABLE_FORMAT: ASCII table column has wrong format");
    errorKeyMap.insert(312, "BAD_BTABLE_FORMAT: Binary table column has wrong format");
    errorKeyMap.insert(314, "NO_NULL: null value has not been defined");
    errorKeyMap.insert(317, "NOT_VARI_LEN: this is not a variable length column");
    errorKeyMap.insert(320, "BAD_DIMEN: illegal number of dimensions in array");
    errorKeyMap.insert(321, "BAD_PIX_NUM: first pixel number greater than last pixel");
    errorKeyMap.insert(322, "ZERO_SCALE: illegal BSCALE or TSCALn keyword = 0");
    errorKeyMap.insert(323, "NEG_AXIS: illegal axis length < 1");
    errorKeyMap.insert(340, "NOT_GROUP_TABLE");
    errorKeyMap.insert(341, "HDU_ALREADY_MEMBER");
    errorKeyMap.insert(342, "MEMBER_NOT_FOUND");
    errorKeyMap.insert(343, "GROUP_NOT_FOUND");
    errorKeyMap.insert(344, "BAD_GROUP_ID");
    errorKeyMap.insert(345, "TOO_MANY_HDUS_TRACKED");
    errorKeyMap.insert(346, "HDU_ALREADY_TRACKED");
    errorKeyMap.insert(347, "BAD_OPTION");
    errorKeyMap.insert(348, "IDENTICAL_POINTERS");
    errorKeyMap.insert(349, "BAD_GROUP_ATTACH");
    errorKeyMap.insert(350, "BAD_GROUP_DETACH");
    errorKeyMap.insert(360, "NGP_NO_MEMORY: malloc failed");
    errorKeyMap.insert(361, "NGP_READ_ERR: read error from file");
    errorKeyMap.insert(362, "NGP_NUL_PTR: null pointer passed as argument");
    errorKeyMap.insert(363, "NGP_EMPTY_CURLINE: line read seems to be empty");
    errorKeyMap.insert(364, "NGP_UNREAD_QUEUE_FULL: cannot unread more then 1 line (or single line twice)");
    errorKeyMap.insert(365, "NGP_INC_NESTING: too deep include file nesting (inf. loop ?)");
    errorKeyMap.insert(366, "NGP_ERR_FOPEN: fopen() failed, cannot open file");
    errorKeyMap.insert(367, "NGP_EOF: end of file encountered");
    errorKeyMap.insert(368, "NGP_BAD_ARG: bad arguments passed");
    errorKeyMap.insert(369, "NGP_TOKEN_NOT_EXPECT: token not expected here");
    errorKeyMap.insert(401, "BAD_I2C: bad int to formatted string conversion");
    errorKeyMap.insert(402, "BAD_F2C: bad float to formatted string conversion");
    errorKeyMap.insert(403, "BAD_INTKEY: can't interprete keyword value as integer");
    errorKeyMap.insert(404, "BAD_LOGICALKEY: can't interprete keyword value as logical");
    errorKeyMap.insert(405, "BAD_FLOATKEY: can't interprete keyword value as float");
    errorKeyMap.insert(406, "BAD_DOUBLEKEY: can't interprete keyword value as double");
    errorKeyMap.insert(407, "BAD_C2I: bad formatted string to int conversion");
    errorKeyMap.insert(408, "BAD_C2F: bad formatted string to float conversion");
    errorKeyMap.insert(409, "BAD_C2D: bad formatted string to double conversion");
    errorKeyMap.insert(410, "BAD_DATATYPE: bad keyword datatype code");
    errorKeyMap.insert(411, "BAD_DECIM: bad number of decimal places specified");
    errorKeyMap.insert(412, "NUM_OVERFLOW: overflow during datatype conversion");
    errorKeyMap.insert(413, "DATA_COMPRESSION_ERR: error in imcompress routines");
    errorKeyMap.insert(414, "DATA_DECOMPRESSION_ERR: error in imcompress routines");
    errorKeyMap.insert(415, "NO_COMPRESSED_TILE: compressed tile doesn't exist");
    errorKeyMap.insert(420, "BAD_DATE: error in date or time conversion");
    errorKeyMap.insert(431, "PARSE_SYNTAX_ERR: syntax error in parser expression");
    errorKeyMap.insert(432, "PARSE_BAD_TYPE: expression did not evaluate to desired type");
    errorKeyMap.insert(433, "PARSE_LRG_VECTOR: vector result too large to return in array");
    errorKeyMap.insert(434, "PARSE_NO_OUTPUT: data parser failed not sent an out column");
    errorKeyMap.insert(435, "PARSE_BAD_COL: bad data encounter while parsing column");
    errorKeyMap.insert(436, "PARSE_BAD_OUTPUT: Output file not of proper type");
    errorKeyMap.insert(501, "ANGLE_TOO_BIG: celestial angle too large for projection");
    errorKeyMap.insert(502, "BAD_WCS_VAL: bad celestial coordinate or pixel value");
    errorKeyMap.insert(503, "WCS_ERROR: error in celestial coordinate calculation");
    errorKeyMap.insert(504, "BAD_WCS_PROJ: unsupported type of celestial projection");
    errorKeyMap.insert(505, "NO_WCS_KEY: celestial coordinate keywords not found");
    errorKeyMap.insert(506, "APPROX_WCS_KEY: approximate WCS keywords were calculated");
}
