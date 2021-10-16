/****************************************************************************
** Meta object code from reading C++ file 'videowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../videowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoWidget_t {
    QByteArrayData data[140];
    char stringdata0[1636];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWidget_t qt_meta_stringdata_VideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWidget"
QT_MOC_LITERAL(1, 12, 16), // "receivePlayStart"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "receivePlayError"
QT_MOC_LITERAL(4, 47, 16), // "receivePlayFinsh"
QT_MOC_LITERAL(5, 64, 17), // "fileLengthReceive"
QT_MOC_LITERAL(6, 82, 6), // "length"
QT_MOC_LITERAL(7, 89, 19), // "filePositionReceive"
QT_MOC_LITERAL(8, 109, 8), // "position"
QT_MOC_LITERAL(9, 118, 12), // "receiveImage"
QT_MOC_LITERAL(10, 131, 5), // "image"
QT_MOC_LITERAL(11, 137, 8), // "fileDrag"
QT_MOC_LITERAL(12, 146, 3), // "url"
QT_MOC_LITERAL(13, 150, 10), // "btnClicked"
QT_MOC_LITERAL(14, 161, 7), // "objName"
QT_MOC_LITERAL(15, 169, 11), // "updateImage"
QT_MOC_LITERAL(16, 181, 10), // "checkVideo"
QT_MOC_LITERAL(17, 192, 9), // "getLength"
QT_MOC_LITERAL(18, 202, 11), // "getPosition"
QT_MOC_LITERAL(19, 214, 11), // "setPosition"
QT_MOC_LITERAL(20, 226, 8), // "getMuted"
QT_MOC_LITERAL(21, 235, 8), // "setMuted"
QT_MOC_LITERAL(22, 244, 5), // "muted"
QT_MOC_LITERAL(23, 250, 9), // "getVolume"
QT_MOC_LITERAL(24, 260, 9), // "setVolume"
QT_MOC_LITERAL(25, 270, 6), // "volume"
QT_MOC_LITERAL(26, 277, 11), // "setInterval"
QT_MOC_LITERAL(27, 289, 8), // "interval"
QT_MOC_LITERAL(28, 298, 12), // "setSleepTime"
QT_MOC_LITERAL(29, 311, 9), // "sleepTime"
QT_MOC_LITERAL(30, 321, 12), // "setCheckTime"
QT_MOC_LITERAL(31, 334, 9), // "checkTime"
QT_MOC_LITERAL(32, 344, 12), // "setCheckConn"
QT_MOC_LITERAL(33, 357, 9), // "checkConn"
QT_MOC_LITERAL(34, 367, 6), // "setUrl"
QT_MOC_LITERAL(35, 374, 11), // "setCallback"
QT_MOC_LITERAL(36, 386, 8), // "callback"
QT_MOC_LITERAL(37, 395, 11), // "setHardware"
QT_MOC_LITERAL(38, 407, 8), // "hardware"
QT_MOC_LITERAL(39, 416, 12), // "setTransport"
QT_MOC_LITERAL(40, 429, 9), // "transport"
QT_MOC_LITERAL(41, 439, 11), // "setSaveFile"
QT_MOC_LITERAL(42, 451, 8), // "saveFile"
QT_MOC_LITERAL(43, 460, 15), // "setSaveInterval"
QT_MOC_LITERAL(44, 476, 12), // "saveInterval"
QT_MOC_LITERAL(45, 489, 11), // "setFileFlag"
QT_MOC_LITERAL(46, 501, 8), // "fileFlag"
QT_MOC_LITERAL(47, 510, 11), // "setSavePath"
QT_MOC_LITERAL(48, 522, 8), // "savePath"
QT_MOC_LITERAL(49, 531, 11), // "setFileName"
QT_MOC_LITERAL(50, 543, 8), // "fileName"
QT_MOC_LITERAL(51, 552, 12), // "setCopyImage"
QT_MOC_LITERAL(52, 565, 9), // "copyImage"
QT_MOC_LITERAL(53, 575, 12), // "setCheckLive"
QT_MOC_LITERAL(54, 588, 9), // "checkLive"
QT_MOC_LITERAL(55, 598, 12), // "setDrawImage"
QT_MOC_LITERAL(56, 611, 9), // "drawImage"
QT_MOC_LITERAL(57, 621, 12), // "setFillImage"
QT_MOC_LITERAL(58, 634, 9), // "fillImage"
QT_MOC_LITERAL(59, 644, 13), // "setFlowEnable"
QT_MOC_LITERAL(60, 658, 10), // "flowEnable"
QT_MOC_LITERAL(61, 669, 14), // "setFlowBgColor"
QT_MOC_LITERAL(62, 684, 11), // "flowBgColor"
QT_MOC_LITERAL(63, 696, 17), // "setFlowPressColor"
QT_MOC_LITERAL(64, 714, 14), // "flowPressColor"
QT_MOC_LITERAL(65, 729, 10), // "setTimeout"
QT_MOC_LITERAL(66, 740, 7), // "timeout"
QT_MOC_LITERAL(67, 748, 14), // "setBorderWidth"
QT_MOC_LITERAL(68, 763, 11), // "borderWidth"
QT_MOC_LITERAL(69, 775, 14), // "setBorderColor"
QT_MOC_LITERAL(70, 790, 11), // "borderColor"
QT_MOC_LITERAL(71, 802, 13), // "setFocusColor"
QT_MOC_LITERAL(72, 816, 10), // "focusColor"
QT_MOC_LITERAL(73, 827, 10), // "setBgColor"
QT_MOC_LITERAL(74, 838, 7), // "bgColor"
QT_MOC_LITERAL(75, 846, 9), // "setBgText"
QT_MOC_LITERAL(76, 856, 6), // "bgText"
QT_MOC_LITERAL(77, 863, 10), // "setBgImage"
QT_MOC_LITERAL(78, 874, 7), // "bgImage"
QT_MOC_LITERAL(79, 882, 14), // "setOSD1Visible"
QT_MOC_LITERAL(80, 897, 10), // "osdVisible"
QT_MOC_LITERAL(81, 908, 15), // "setOSD1FontSize"
QT_MOC_LITERAL(82, 924, 11), // "osdFontSize"
QT_MOC_LITERAL(83, 936, 11), // "setOSD1Text"
QT_MOC_LITERAL(84, 948, 7), // "osdText"
QT_MOC_LITERAL(85, 956, 12), // "setOSD1Color"
QT_MOC_LITERAL(86, 969, 8), // "osdColor"
QT_MOC_LITERAL(87, 978, 12), // "setOSD1Image"
QT_MOC_LITERAL(88, 991, 8), // "osdImage"
QT_MOC_LITERAL(89, 1000, 13), // "setOSD1Format"
QT_MOC_LITERAL(90, 1014, 9), // "OSDFormat"
QT_MOC_LITERAL(91, 1024, 9), // "osdFormat"
QT_MOC_LITERAL(92, 1034, 15), // "setOSD1Position"
QT_MOC_LITERAL(93, 1050, 11), // "OSDPosition"
QT_MOC_LITERAL(94, 1062, 11), // "osdPosition"
QT_MOC_LITERAL(95, 1074, 14), // "setOSD2Visible"
QT_MOC_LITERAL(96, 1089, 15), // "setOSD2FontSize"
QT_MOC_LITERAL(97, 1105, 11), // "setOSD2Text"
QT_MOC_LITERAL(98, 1117, 12), // "setOSD2Color"
QT_MOC_LITERAL(99, 1130, 12), // "setOSD2Image"
QT_MOC_LITERAL(100, 1143, 13), // "setOSD2Format"
QT_MOC_LITERAL(101, 1157, 15), // "setOSD2Position"
QT_MOC_LITERAL(102, 1173, 13), // "setFaceBorder"
QT_MOC_LITERAL(103, 1187, 10), // "faceBorder"
QT_MOC_LITERAL(104, 1198, 12), // "setFaceColor"
QT_MOC_LITERAL(105, 1211, 9), // "faceColor"
QT_MOC_LITERAL(106, 1221, 12), // "setFaceRects"
QT_MOC_LITERAL(107, 1234, 12), // "QList<QRect>"
QT_MOC_LITERAL(108, 1247, 9), // "faceRects"
QT_MOC_LITERAL(109, 1257, 4), // "open"
QT_MOC_LITERAL(110, 1262, 5), // "pause"
QT_MOC_LITERAL(111, 1268, 4), // "next"
QT_MOC_LITERAL(112, 1273, 5), // "close"
QT_MOC_LITERAL(113, 1279, 7), // "restart"
QT_MOC_LITERAL(114, 1287, 9), // "delayOpen"
QT_MOC_LITERAL(115, 1297, 5), // "clear"
QT_MOC_LITERAL(116, 1303, 4), // "snap"
QT_MOC_LITERAL(117, 1308, 11), // "osd1Visible"
QT_MOC_LITERAL(118, 1320, 12), // "osd1FontSize"
QT_MOC_LITERAL(119, 1333, 8), // "osd1Text"
QT_MOC_LITERAL(120, 1342, 9), // "osd1Color"
QT_MOC_LITERAL(121, 1352, 9), // "osd1Image"
QT_MOC_LITERAL(122, 1362, 10), // "osd1Format"
QT_MOC_LITERAL(123, 1373, 12), // "osd1Position"
QT_MOC_LITERAL(124, 1386, 11), // "osd2Visible"
QT_MOC_LITERAL(125, 1398, 12), // "osd2FontSize"
QT_MOC_LITERAL(126, 1411, 8), // "osd2Text"
QT_MOC_LITERAL(127, 1420, 9), // "osd2Color"
QT_MOC_LITERAL(128, 1430, 9), // "osd2Image"
QT_MOC_LITERAL(129, 1440, 10), // "osd2Format"
QT_MOC_LITERAL(130, 1451, 12), // "osd2Position"
QT_MOC_LITERAL(131, 1464, 14), // "OSDFormat_Text"
QT_MOC_LITERAL(132, 1479, 14), // "OSDFormat_Date"
QT_MOC_LITERAL(133, 1494, 14), // "OSDFormat_Time"
QT_MOC_LITERAL(134, 1509, 18), // "OSDFormat_DateTime"
QT_MOC_LITERAL(135, 1528, 15), // "OSDFormat_Image"
QT_MOC_LITERAL(136, 1544, 20), // "OSDPosition_Left_Top"
QT_MOC_LITERAL(137, 1565, 23), // "OSDPosition_Left_Bottom"
QT_MOC_LITERAL(138, 1589, 21), // "OSDPosition_Right_Top"
QT_MOC_LITERAL(139, 1611, 24) // "OSDPosition_Right_Bottom"

    },
    "VideoWidget\0receivePlayStart\0\0"
    "receivePlayError\0receivePlayFinsh\0"
    "fileLengthReceive\0length\0filePositionReceive\0"
    "position\0receiveImage\0image\0fileDrag\0"
    "url\0btnClicked\0objName\0updateImage\0"
    "checkVideo\0getLength\0getPosition\0"
    "setPosition\0getMuted\0setMuted\0muted\0"
    "getVolume\0setVolume\0volume\0setInterval\0"
    "interval\0setSleepTime\0sleepTime\0"
    "setCheckTime\0checkTime\0setCheckConn\0"
    "checkConn\0setUrl\0setCallback\0callback\0"
    "setHardware\0hardware\0setTransport\0"
    "transport\0setSaveFile\0saveFile\0"
    "setSaveInterval\0saveInterval\0setFileFlag\0"
    "fileFlag\0setSavePath\0savePath\0setFileName\0"
    "fileName\0setCopyImage\0copyImage\0"
    "setCheckLive\0checkLive\0setDrawImage\0"
    "drawImage\0setFillImage\0fillImage\0"
    "setFlowEnable\0flowEnable\0setFlowBgColor\0"
    "flowBgColor\0setFlowPressColor\0"
    "flowPressColor\0setTimeout\0timeout\0"
    "setBorderWidth\0borderWidth\0setBorderColor\0"
    "borderColor\0setFocusColor\0focusColor\0"
    "setBgColor\0bgColor\0setBgText\0bgText\0"
    "setBgImage\0bgImage\0setOSD1Visible\0"
    "osdVisible\0setOSD1FontSize\0osdFontSize\0"
    "setOSD1Text\0osdText\0setOSD1Color\0"
    "osdColor\0setOSD1Image\0osdImage\0"
    "setOSD1Format\0OSDFormat\0osdFormat\0"
    "setOSD1Position\0OSDPosition\0osdPosition\0"
    "setOSD2Visible\0setOSD2FontSize\0"
    "setOSD2Text\0setOSD2Color\0setOSD2Image\0"
    "setOSD2Format\0setOSD2Position\0"
    "setFaceBorder\0faceBorder\0setFaceColor\0"
    "faceColor\0setFaceRects\0QList<QRect>\0"
    "faceRects\0open\0pause\0next\0close\0restart\0"
    "delayOpen\0clear\0snap\0osd1Visible\0"
    "osd1FontSize\0osd1Text\0osd1Color\0"
    "osd1Image\0osd1Format\0osd1Position\0"
    "osd2Visible\0osd2FontSize\0osd2Text\0"
    "osd2Color\0osd2Image\0osd2Format\0"
    "osd2Position\0OSDFormat_Text\0OSDFormat_Date\0"
    "OSDFormat_Time\0OSDFormat_DateTime\0"
    "OSDFormat_Image\0OSDPosition_Left_Top\0"
    "OSDPosition_Left_Bottom\0OSDPosition_Right_Top\0"
    "OSDPosition_Right_Bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
      28,  580, // properties
       2,  664, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  384,    2, 0x06 /* Public */,
       3,    0,  385,    2, 0x06 /* Public */,
       4,    0,  386,    2, 0x06 /* Public */,
       5,    1,  387,    2, 0x06 /* Public */,
       7,    1,  390,    2, 0x06 /* Public */,
       9,    1,  393,    2, 0x06 /* Public */,
      11,    1,  396,    2, 0x06 /* Public */,
      13,    1,  399,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  402,    2, 0x08 /* Private */,
      16,    0,  405,    2, 0x08 /* Private */,
      13,    0,  406,    2, 0x08 /* Private */,
      17,    0,  407,    2, 0x0a /* Public */,
      18,    0,  408,    2, 0x0a /* Public */,
      19,    1,  409,    2, 0x0a /* Public */,
      20,    0,  412,    2, 0x0a /* Public */,
      21,    1,  413,    2, 0x0a /* Public */,
      23,    0,  416,    2, 0x0a /* Public */,
      24,    1,  417,    2, 0x0a /* Public */,
      26,    1,  420,    2, 0x0a /* Public */,
      28,    1,  423,    2, 0x0a /* Public */,
      30,    1,  426,    2, 0x0a /* Public */,
      32,    1,  429,    2, 0x0a /* Public */,
      34,    1,  432,    2, 0x0a /* Public */,
      35,    1,  435,    2, 0x0a /* Public */,
      37,    1,  438,    2, 0x0a /* Public */,
      39,    1,  441,    2, 0x0a /* Public */,
      41,    1,  444,    2, 0x0a /* Public */,
      43,    1,  447,    2, 0x0a /* Public */,
      45,    1,  450,    2, 0x0a /* Public */,
      47,    1,  453,    2, 0x0a /* Public */,
      49,    1,  456,    2, 0x0a /* Public */,
      51,    1,  459,    2, 0x0a /* Public */,
      53,    1,  462,    2, 0x0a /* Public */,
      55,    1,  465,    2, 0x0a /* Public */,
      57,    1,  468,    2, 0x0a /* Public */,
      59,    1,  471,    2, 0x0a /* Public */,
      61,    1,  474,    2, 0x0a /* Public */,
      63,    1,  477,    2, 0x0a /* Public */,
      65,    1,  480,    2, 0x0a /* Public */,
      67,    1,  483,    2, 0x0a /* Public */,
      69,    1,  486,    2, 0x0a /* Public */,
      71,    1,  489,    2, 0x0a /* Public */,
      73,    1,  492,    2, 0x0a /* Public */,
      75,    1,  495,    2, 0x0a /* Public */,
      77,    1,  498,    2, 0x0a /* Public */,
      79,    1,  501,    2, 0x0a /* Public */,
      81,    1,  504,    2, 0x0a /* Public */,
      83,    1,  507,    2, 0x0a /* Public */,
      85,    1,  510,    2, 0x0a /* Public */,
      87,    1,  513,    2, 0x0a /* Public */,
      89,    1,  516,    2, 0x0a /* Public */,
      92,    1,  519,    2, 0x0a /* Public */,
      95,    1,  522,    2, 0x0a /* Public */,
      96,    1,  525,    2, 0x0a /* Public */,
      97,    1,  528,    2, 0x0a /* Public */,
      98,    1,  531,    2, 0x0a /* Public */,
      99,    1,  534,    2, 0x0a /* Public */,
     100,    1,  537,    2, 0x0a /* Public */,
     101,    1,  540,    2, 0x0a /* Public */,
      89,    1,  543,    2, 0x0a /* Public */,
     100,    1,  546,    2, 0x0a /* Public */,
      92,    1,  549,    2, 0x0a /* Public */,
     101,    1,  552,    2, 0x0a /* Public */,
     102,    1,  555,    2, 0x0a /* Public */,
     104,    1,  558,    2, 0x0a /* Public */,
     106,    1,  561,    2, 0x0a /* Public */,
     109,    0,  564,    2, 0x0a /* Public */,
     110,    0,  565,    2, 0x0a /* Public */,
     111,    0,  566,    2, 0x0a /* Public */,
     112,    0,  567,    2, 0x0a /* Public */,
     113,    2,  568,    2, 0x0a /* Public */,
     113,    1,  573,    2, 0x2a /* Public | MethodCloned */,
     115,    0,  576,    2, 0x0a /* Public */,
     116,    1,  577,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::QImage,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::QColor,   62,
    QMetaType::Void, QMetaType::QColor,   64,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void, QMetaType::QColor,   70,
    QMetaType::Void, QMetaType::QColor,   72,
    QMetaType::Void, QMetaType::QColor,   74,
    QMetaType::Void, QMetaType::QString,   76,
    QMetaType::Void, QMetaType::QImage,   78,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void, QMetaType::QColor,   86,
    QMetaType::Void, QMetaType::QImage,   88,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void, QMetaType::QColor,   86,
    QMetaType::Void, QMetaType::QImage,   88,
    QMetaType::Void, 0x80000000 | 90,   91,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, QMetaType::UChar,   91,
    QMetaType::Void, QMetaType::UChar,   91,
    QMetaType::Void, QMetaType::UChar,   94,
    QMetaType::Void, QMetaType::UChar,   94,
    QMetaType::Void, QMetaType::Int,  103,
    QMetaType::Void, QMetaType::QColor,  105,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,  114,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,

 // properties: name, type, flags
      52, QMetaType::Bool, 0x00095103,
      54, QMetaType::Bool, 0x00095103,
      56, QMetaType::Bool, 0x00095103,
      58, QMetaType::Bool, 0x00095103,
      60, QMetaType::Bool, 0x00095103,
      62, QMetaType::QColor, 0x00095103,
      64, QMetaType::QColor, 0x00095103,
      66, QMetaType::Int, 0x00095103,
      68, QMetaType::Int, 0x00095103,
      70, QMetaType::QColor, 0x00095103,
      72, QMetaType::QColor, 0x00095103,
      74, QMetaType::QColor, 0x00095103,
      76, QMetaType::QString, 0x00095103,
      78, QMetaType::QImage, 0x00095103,
     117, QMetaType::Bool, 0x00095003,
     118, QMetaType::Int, 0x00095003,
     119, QMetaType::QString, 0x00095003,
     120, QMetaType::QColor, 0x00095003,
     121, QMetaType::QImage, 0x00095003,
     122, 0x80000000 | 90, 0x0009500b,
     123, 0x80000000 | 93, 0x0009500b,
     124, QMetaType::Bool, 0x00095003,
     125, QMetaType::Int, 0x00095003,
     126, QMetaType::QString, 0x00095003,
     127, QMetaType::QColor, 0x00095003,
     128, QMetaType::QImage, 0x00095003,
     129, 0x80000000 | 90, 0x0009500b,
     130, 0x80000000 | 93, 0x0009500b,

 // enums: name, flags, count, data
      90, 0x0,    5,  672,
      93, 0x0,    4,  682,

 // enum data: key, value
     131, uint(VideoWidget::OSDFormat_Text),
     132, uint(VideoWidget::OSDFormat_Date),
     133, uint(VideoWidget::OSDFormat_Time),
     134, uint(VideoWidget::OSDFormat_DateTime),
     135, uint(VideoWidget::OSDFormat_Image),
     136, uint(VideoWidget::OSDPosition_Left_Top),
     137, uint(VideoWidget::OSDPosition_Left_Bottom),
     138, uint(VideoWidget::OSDPosition_Right_Top),
     139, uint(VideoWidget::OSDPosition_Right_Bottom),

       0        // eod
};

void VideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoWidget *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivePlayStart(); break;
        case 1: _t->receivePlayError(); break;
        case 2: _t->receivePlayFinsh(); break;
        case 3: _t->fileLengthReceive((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->filePositionReceive((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->receiveImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 6: _t->fileDrag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->btnClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 9: _t->checkVideo(); break;
        case 10: _t->btnClicked(); break;
        case 11: { uint _r = _t->getLength();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 12: { uint _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: { bool _r = _t->getMuted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { int _r = _t->getVolume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setSleepTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setCheckTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setCheckConn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->setCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setHardware((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->setTransport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->setSaveFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setSaveInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setFileFlag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->setSavePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->setCopyImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setCheckLive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->setDrawImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setFillImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setFlowEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->setFlowBgColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 37: _t->setFlowPressColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 38: _t->setTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->setBorderWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->setBorderColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 41: _t->setFocusColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 42: _t->setBgColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 43: _t->setBgText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->setBgImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 45: _t->setOSD1Visible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setOSD1FontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->setOSD1Text((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->setOSD1Color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 49: _t->setOSD1Image((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 50: _t->setOSD1Format((*reinterpret_cast< const OSDFormat(*)>(_a[1]))); break;
        case 51: _t->setOSD1Position((*reinterpret_cast< const OSDPosition(*)>(_a[1]))); break;
        case 52: _t->setOSD2Visible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setOSD2FontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->setOSD2Text((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->setOSD2Color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 56: _t->setOSD2Image((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 57: _t->setOSD2Format((*reinterpret_cast< const OSDFormat(*)>(_a[1]))); break;
        case 58: _t->setOSD2Position((*reinterpret_cast< const OSDPosition(*)>(_a[1]))); break;
        case 59: _t->setOSD1Format((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 60: _t->setOSD2Format((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 61: _t->setOSD1Position((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 62: _t->setOSD2Position((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 63: _t->setFaceBorder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->setFaceColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 65: _t->setFaceRects((*reinterpret_cast< const QList<QRect>(*)>(_a[1]))); break;
        case 66: _t->open(); break;
        case 67: _t->pause(); break;
        case 68: _t->next(); break;
        case 69: _t->close(); break;
        case 70: _t->restart((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 71: _t->restart((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 72: _t->clear(); break;
        case 73: _t->snap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRect> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::receivePlayStart)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::receivePlayError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::receivePlayFinsh)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::fileLengthReceive)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::filePositionReceive)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::receiveImage)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::fileDrag)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::btnClicked)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VideoWidget *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getCopyImage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getCheckLive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getDrawImage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getFillImage(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFlowEnable(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getFlowBgColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getFlowPressColor(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getTimeout(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getBorderWidth(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getBorderColor(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getFocusColor(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->getBgColor(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getBgText(); break;
        case 13: *reinterpret_cast< QImage*>(_v) = _t->getBgImage(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getOSD1Visible(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getOSD1FontSize(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getOSD1Text(); break;
        case 17: *reinterpret_cast< QColor*>(_v) = _t->getOSD1Color(); break;
        case 18: *reinterpret_cast< QImage*>(_v) = _t->getOSD1Image(); break;
        case 19: *reinterpret_cast< OSDFormat*>(_v) = _t->getOSD1Format(); break;
        case 20: *reinterpret_cast< OSDPosition*>(_v) = _t->getOSD1Position(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getOSD2Visible(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->getOSD2FontSize(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->getOSD2Text(); break;
        case 24: *reinterpret_cast< QColor*>(_v) = _t->getOSD2Color(); break;
        case 25: *reinterpret_cast< QImage*>(_v) = _t->getOSD2Image(); break;
        case 26: *reinterpret_cast< OSDFormat*>(_v) = _t->getOSD2Format(); break;
        case 27: *reinterpret_cast< OSDPosition*>(_v) = _t->getOSD2Position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VideoWidget *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCopyImage(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCheckLive(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDrawImage(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFillImage(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setFlowEnable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setFlowBgColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setFlowPressColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setFocusColor(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setBgColor(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setBgText(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setBgImage(*reinterpret_cast< QImage*>(_v)); break;
        case 14: _t->setOSD1Visible(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setOSD1FontSize(*reinterpret_cast< int*>(_v)); break;
        case 16: _t->setOSD1Text(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setOSD1Color(*reinterpret_cast< QColor*>(_v)); break;
        case 18: _t->setOSD1Image(*reinterpret_cast< QImage*>(_v)); break;
        case 19: _t->setOSD1Format(*reinterpret_cast< OSDFormat*>(_v)); break;
        case 20: _t->setOSD1Position(*reinterpret_cast< OSDPosition*>(_v)); break;
        case 21: _t->setOSD2Visible(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setOSD2FontSize(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setOSD2Text(*reinterpret_cast< QString*>(_v)); break;
        case 24: _t->setOSD2Color(*reinterpret_cast< QColor*>(_v)); break;
        case 25: _t->setOSD2Image(*reinterpret_cast< QImage*>(_v)); break;
        case 26: _t->setOSD2Format(*reinterpret_cast< OSDFormat*>(_v)); break;
        case 27: _t->setOSD2Position(*reinterpret_cast< OSDPosition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VideoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoWidget.data,
      qt_meta_data_VideoWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget.stringdata0))
        return static_cast<void*>(const_cast< VideoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 28;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 28;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoWidget::receivePlayStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoWidget::receivePlayError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoWidget::receivePlayFinsh()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoWidget::fileLengthReceive(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoWidget::filePositionReceive(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VideoWidget::receiveImage(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VideoWidget::fileDrag(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VideoWidget::btnClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
