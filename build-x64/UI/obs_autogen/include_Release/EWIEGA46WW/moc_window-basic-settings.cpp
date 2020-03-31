/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "window-basic-settings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SilentUpdateCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateCheckBox_t qt_meta_stringdata_SilentUpdateCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SilentUpdateCheckBox"
QT_MOC_LITERAL(1, 21, 18), // "setCheckedSilently"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "checked"

    },
    "SilentUpdateCheckBox\0setCheckedSilently\0"
    "\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateCheckBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateCheckBox.data,
    qt_meta_data_SilentUpdateCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SilentUpdateSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateSpinBox_t qt_meta_stringdata_SilentUpdateSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SilentUpdateSpinBox"
QT_MOC_LITERAL(1, 20, 16), // "setValueSilently"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "val"

    },
    "SilentUpdateSpinBox\0setValueSilently\0"
    "\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateSpinBox.data,
    qt_meta_data_SilentUpdateSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OBSBasicSettings_t {
    QByteArrayData data[77];
    char stringdata0[1612];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSettings_t qt_meta_stringdata_OBSBasicSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicSettings"
QT_MOC_LITERAL(1, 17, 16), // "UpdateServerList"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "UpdateKeyLink"
QT_MOC_LITERAL(4, 49, 15), // "on_show_clicked"
QT_MOC_LITERAL(5, 65, 21), // "on_authPwShow_clicked"
QT_MOC_LITERAL(6, 87, 25), // "on_connectAccount_clicked"
QT_MOC_LITERAL(7, 113, 28), // "on_disconnectAccount_clicked"
QT_MOC_LITERAL(8, 142, 23), // "on_useStreamKey_clicked"
QT_MOC_LITERAL(9, 166, 18), // "on_useAuth_toggled"
QT_MOC_LITERAL(10, 185, 18), // "on_theme_activated"
QT_MOC_LITERAL(11, 204, 3), // "idx"
QT_MOC_LITERAL(12, 208, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(13, 243, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(14, 264, 16), // "QAbstractButton*"
QT_MOC_LITERAL(15, 281, 6), // "button"
QT_MOC_LITERAL(16, 288, 30), // "on_service_currentIndexChanged"
QT_MOC_LITERAL(17, 319, 29), // "on_simpleOutputBrowse_clicked"
QT_MOC_LITERAL(18, 349, 30), // "on_advOutRecPathBrowse_clicked"
QT_MOC_LITERAL(19, 380, 29), // "on_advOutFFPathBrowse_clicked"
QT_MOC_LITERAL(20, 410, 36), // "on_advOutEncoder_currentIndex..."
QT_MOC_LITERAL(21, 447, 39), // "on_advOutRecEncoder_currentIn..."
QT_MOC_LITERAL(22, 487, 36), // "on_advOutFFIgnoreCompat_state..."
QT_MOC_LITERAL(23, 524, 5), // "state"
QT_MOC_LITERAL(24, 530, 37), // "on_advOutFFFormat_currentInde..."
QT_MOC_LITERAL(25, 568, 39), // "on_advOutFFAEncoder_currentIn..."
QT_MOC_LITERAL(26, 608, 39), // "on_advOutFFVEncoder_currentIn..."
QT_MOC_LITERAL(27, 648, 35), // "on_advOutFFType_currentIndexC..."
QT_MOC_LITERAL(28, 684, 34), // "on_colorFormat_currentIndexCh..."
QT_MOC_LITERAL(29, 719, 4), // "text"
QT_MOC_LITERAL(30, 724, 32), // "on_filenameFormatting_textEdited"
QT_MOC_LITERAL(31, 757, 35), // "on_outputResolution_editTextC..."
QT_MOC_LITERAL(32, 793, 33), // "on_baseResolution_editTextCha..."
QT_MOC_LITERAL(33, 827, 26), // "on_disableOSXVSync_clicked"
QT_MOC_LITERAL(34, 854, 14), // "GeneralChanged"
QT_MOC_LITERAL(35, 869, 12), // "AudioChanged"
QT_MOC_LITERAL(36, 882, 19), // "AudioChangedRestart"
QT_MOC_LITERAL(37, 902, 18), // "ReloadAudioSources"
QT_MOC_LITERAL(38, 921, 15), // "SurroundWarning"
QT_MOC_LITERAL(39, 937, 20), // "SpeakerLayoutChanged"
QT_MOC_LITERAL(40, 958, 14), // "OutputsChanged"
QT_MOC_LITERAL(41, 973, 14), // "Stream1Changed"
QT_MOC_LITERAL(42, 988, 12), // "VideoChanged"
QT_MOC_LITERAL(43, 1001, 22), // "VideoChangedResolution"
QT_MOC_LITERAL(44, 1024, 19), // "VideoChangedRestart"
QT_MOC_LITERAL(45, 1044, 14), // "HotkeysChanged"
QT_MOC_LITERAL(46, 1059, 13), // "ReloadHotkeys"
QT_MOC_LITERAL(47, 1073, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(48, 1087, 9), // "ignoreKey"
QT_MOC_LITERAL(49, 1097, 15), // "AdvancedChanged"
QT_MOC_LITERAL(50, 1113, 22), // "AdvancedChangedRestart"
QT_MOC_LITERAL(51, 1136, 25), // "UpdateStreamDelayEstimate"
QT_MOC_LITERAL(52, 1162, 37), // "UpdateAutomaticReplayBufferCh..."
QT_MOC_LITERAL(53, 1200, 22), // "AdvOutRecCheckWarnings"
QT_MOC_LITERAL(54, 1223, 29), // "SimpleRecordingQualityChanged"
QT_MOC_LITERAL(55, 1253, 29), // "SimpleRecordingEncoderChanged"
QT_MOC_LITERAL(56, 1283, 37), // "SimpleRecordingQualityLossles..."
QT_MOC_LITERAL(57, 1321, 25), // "SimpleReplayBufferChanged"
QT_MOC_LITERAL(58, 1347, 22), // "AdvReplayBufferChanged"
QT_MOC_LITERAL(59, 1370, 29), // "SimpleStreamingEncoderChanged"
QT_MOC_LITERAL(60, 1400, 16), // "SpawnTempService"
QT_MOC_LITERAL(61, 1417, 10), // "OBSService"
QT_MOC_LITERAL(62, 1428, 14), // "SetGeneralIcon"
QT_MOC_LITERAL(63, 1443, 4), // "icon"
QT_MOC_LITERAL(64, 1448, 13), // "SetStreamIcon"
QT_MOC_LITERAL(65, 1462, 13), // "SetOutputIcon"
QT_MOC_LITERAL(66, 1476, 12), // "SetAudioIcon"
QT_MOC_LITERAL(67, 1489, 12), // "SetVideoIcon"
QT_MOC_LITERAL(68, 1502, 14), // "SetHotkeysIcon"
QT_MOC_LITERAL(69, 1517, 15), // "SetAdvancedIcon"
QT_MOC_LITERAL(70, 1533, 11), // "generalIcon"
QT_MOC_LITERAL(71, 1545, 10), // "streamIcon"
QT_MOC_LITERAL(72, 1556, 10), // "outputIcon"
QT_MOC_LITERAL(73, 1567, 9), // "audioIcon"
QT_MOC_LITERAL(74, 1577, 9), // "videoIcon"
QT_MOC_LITERAL(75, 1587, 11), // "hotkeysIcon"
QT_MOC_LITERAL(76, 1599, 12) // "advancedIcon"

    },
    "OBSBasicSettings\0UpdateServerList\0\0"
    "UpdateKeyLink\0on_show_clicked\0"
    "on_authPwShow_clicked\0on_connectAccount_clicked\0"
    "on_disconnectAccount_clicked\0"
    "on_useStreamKey_clicked\0on_useAuth_toggled\0"
    "on_theme_activated\0idx\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_service_currentIndexChanged\0"
    "on_simpleOutputBrowse_clicked\0"
    "on_advOutRecPathBrowse_clicked\0"
    "on_advOutFFPathBrowse_clicked\0"
    "on_advOutEncoder_currentIndexChanged\0"
    "on_advOutRecEncoder_currentIndexChanged\0"
    "on_advOutFFIgnoreCompat_stateChanged\0"
    "state\0on_advOutFFFormat_currentIndexChanged\0"
    "on_advOutFFAEncoder_currentIndexChanged\0"
    "on_advOutFFVEncoder_currentIndexChanged\0"
    "on_advOutFFType_currentIndexChanged\0"
    "on_colorFormat_currentIndexChanged\0"
    "text\0on_filenameFormatting_textEdited\0"
    "on_outputResolution_editTextChanged\0"
    "on_baseResolution_editTextChanged\0"
    "on_disableOSXVSync_clicked\0GeneralChanged\0"
    "AudioChanged\0AudioChangedRestart\0"
    "ReloadAudioSources\0SurroundWarning\0"
    "SpeakerLayoutChanged\0OutputsChanged\0"
    "Stream1Changed\0VideoChanged\0"
    "VideoChangedResolution\0VideoChangedRestart\0"
    "HotkeysChanged\0ReloadHotkeys\0obs_hotkey_id\0"
    "ignoreKey\0AdvancedChanged\0"
    "AdvancedChangedRestart\0UpdateStreamDelayEstimate\0"
    "UpdateAutomaticReplayBufferCheckboxes\0"
    "AdvOutRecCheckWarnings\0"
    "SimpleRecordingQualityChanged\0"
    "SimpleRecordingEncoderChanged\0"
    "SimpleRecordingQualityLosslessWarning\0"
    "SimpleReplayBufferChanged\0"
    "AdvReplayBufferChanged\0"
    "SimpleStreamingEncoderChanged\0"
    "SpawnTempService\0OBSService\0SetGeneralIcon\0"
    "icon\0SetStreamIcon\0SetOutputIcon\0"
    "SetAudioIcon\0SetVideoIcon\0SetHotkeysIcon\0"
    "SetAdvancedIcon\0generalIcon\0streamIcon\0"
    "outputIcon\0audioIcon\0videoIcon\0"
    "hotkeysIcon\0advancedIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       7,  424, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x08 /* Private */,
       3,    0,  315,    2, 0x08 /* Private */,
       4,    0,  316,    2, 0x08 /* Private */,
       5,    0,  317,    2, 0x08 /* Private */,
       6,    0,  318,    2, 0x08 /* Private */,
       7,    0,  319,    2, 0x08 /* Private */,
       8,    0,  320,    2, 0x08 /* Private */,
       9,    0,  321,    2, 0x08 /* Private */,
      10,    1,  322,    2, 0x08 /* Private */,
      12,    0,  325,    2, 0x08 /* Private */,
      13,    1,  326,    2, 0x08 /* Private */,
      16,    1,  329,    2, 0x08 /* Private */,
      17,    0,  332,    2, 0x08 /* Private */,
      18,    0,  333,    2, 0x08 /* Private */,
      19,    0,  334,    2, 0x08 /* Private */,
      20,    1,  335,    2, 0x08 /* Private */,
      21,    1,  338,    2, 0x08 /* Private */,
      22,    1,  341,    2, 0x08 /* Private */,
      24,    1,  344,    2, 0x08 /* Private */,
      25,    1,  347,    2, 0x08 /* Private */,
      26,    1,  350,    2, 0x08 /* Private */,
      27,    1,  353,    2, 0x08 /* Private */,
      28,    1,  356,    2, 0x08 /* Private */,
      30,    1,  359,    2, 0x08 /* Private */,
      31,    1,  362,    2, 0x08 /* Private */,
      32,    1,  365,    2, 0x08 /* Private */,
      33,    0,  368,    2, 0x08 /* Private */,
      34,    0,  369,    2, 0x08 /* Private */,
      35,    0,  370,    2, 0x08 /* Private */,
      36,    0,  371,    2, 0x08 /* Private */,
      37,    0,  372,    2, 0x08 /* Private */,
      38,    1,  373,    2, 0x08 /* Private */,
      39,    1,  376,    2, 0x08 /* Private */,
      40,    0,  379,    2, 0x08 /* Private */,
      41,    0,  380,    2, 0x08 /* Private */,
      42,    0,  381,    2, 0x08 /* Private */,
      43,    0,  382,    2, 0x08 /* Private */,
      44,    0,  383,    2, 0x08 /* Private */,
      45,    0,  384,    2, 0x08 /* Private */,
      46,    1,  385,    2, 0x08 /* Private */,
      46,    0,  388,    2, 0x28 /* Private | MethodCloned */,
      49,    0,  389,    2, 0x08 /* Private */,
      50,    0,  390,    2, 0x08 /* Private */,
      51,    0,  391,    2, 0x08 /* Private */,
      52,    0,  392,    2, 0x08 /* Private */,
      53,    0,  393,    2, 0x08 /* Private */,
      54,    0,  394,    2, 0x08 /* Private */,
      55,    0,  395,    2, 0x08 /* Private */,
      56,    1,  396,    2, 0x08 /* Private */,
      57,    0,  399,    2, 0x08 /* Private */,
      58,    0,  400,    2, 0x08 /* Private */,
      59,    0,  401,    2, 0x08 /* Private */,
      60,    0,  402,    2, 0x08 /* Private */,
      62,    1,  403,    2, 0x08 /* Private */,
      64,    1,  406,    2, 0x08 /* Private */,
      65,    1,  409,    2, 0x08 /* Private */,
      66,    1,  412,    2, 0x08 /* Private */,
      67,    1,  415,    2, 0x08 /* Private */,
      68,    1,  418,    2, 0x08 /* Private */,
      69,    1,  421,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 61,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,
    QMetaType::Void, QMetaType::QIcon,   63,

 // properties: name, type, flags
      70, QMetaType::QIcon, 0x00095003,
      71, QMetaType::QIcon, 0x00095003,
      72, QMetaType::QIcon, 0x00095003,
      73, QMetaType::QIcon, 0x00095003,
      74, QMetaType::QIcon, 0x00095003,
      75, QMetaType::QIcon, 0x00095003,
      76, QMetaType::QIcon, 0x00095003,

       0        // eod
};

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateServerList(); break;
        case 1: _t->UpdateKeyLink(); break;
        case 2: _t->on_show_clicked(); break;
        case 3: _t->on_authPwShow_clicked(); break;
        case 4: _t->on_connectAccount_clicked(); break;
        case 5: _t->on_disconnectAccount_clicked(); break;
        case 6: _t->on_useStreamKey_clicked(); break;
        case 7: _t->on_useAuth_toggled(); break;
        case 8: _t->on_theme_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_listWidget_itemSelectionChanged(); break;
        case 10: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: _t->on_service_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_simpleOutputBrowse_clicked(); break;
        case 13: _t->on_advOutRecPathBrowse_clicked(); break;
        case 14: _t->on_advOutFFPathBrowse_clicked(); break;
        case 15: _t->on_advOutEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_filenameFormatting_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->on_outputResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->on_baseResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->on_disableOSXVSync_clicked(); break;
        case 27: _t->GeneralChanged(); break;
        case 28: _t->AudioChanged(); break;
        case 29: _t->AudioChangedRestart(); break;
        case 30: _t->ReloadAudioSources(); break;
        case 31: _t->SurroundWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->SpeakerLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->OutputsChanged(); break;
        case 34: _t->Stream1Changed(); break;
        case 35: _t->VideoChanged(); break;
        case 36: _t->VideoChangedResolution(); break;
        case 37: _t->VideoChangedRestart(); break;
        case 38: _t->HotkeysChanged(); break;
        case 39: _t->ReloadHotkeys((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        case 40: _t->ReloadHotkeys(); break;
        case 41: _t->AdvancedChanged(); break;
        case 42: _t->AdvancedChangedRestart(); break;
        case 43: _t->UpdateStreamDelayEstimate(); break;
        case 44: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 45: _t->AdvOutRecCheckWarnings(); break;
        case 46: _t->SimpleRecordingQualityChanged(); break;
        case 47: _t->SimpleRecordingEncoderChanged(); break;
        case 48: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->SimpleReplayBufferChanged(); break;
        case 50: _t->AdvReplayBufferChanged(); break;
        case 51: _t->SimpleStreamingEncoderChanged(); break;
        case 52: { OBSService _r = _t->SpawnTempService();
            if (_a[0]) *reinterpret_cast< OBSService*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->SetGeneralIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 54: _t->SetStreamIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 55: _t->SetOutputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 56: _t->SetAudioIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 57: _t->SetVideoIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 58: _t->SetHotkeysIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 59: _t->SetAdvancedIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetGeneralIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetStreamIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetOutputIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetVideoIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetHotkeysIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetAdvancedIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetGeneralIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetStreamIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetVideoIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetHotkeysIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetAdvancedIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OBSBasicSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OBSBasicSettings.data,
    qt_meta_data_OBSBasicSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSettings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 60;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
