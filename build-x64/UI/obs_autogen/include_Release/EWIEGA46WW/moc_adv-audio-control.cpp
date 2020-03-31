/****************************************************************************
** Meta object code from reading C++ file 'adv-audio-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "adv-audio-control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adv-audio-control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSAdvAudioCtrl_t {
    QByteArrayData data[33];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSAdvAudioCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSAdvAudioCtrl_t qt_meta_stringdata_OBSAdvAudioCtrl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OBSAdvAudioCtrl"
QT_MOC_LITERAL(1, 16, 19), // "SourceActiveChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "active"
QT_MOC_LITERAL(4, 44, 18), // "SourceFlagsChanged"
QT_MOC_LITERAL(5, 63, 8), // "uint32_t"
QT_MOC_LITERAL(6, 72, 5), // "flags"
QT_MOC_LITERAL(7, 78, 19), // "SourceVolumeChanged"
QT_MOC_LITERAL(8, 98, 6), // "volume"
QT_MOC_LITERAL(9, 105, 17), // "SourceSyncChanged"
QT_MOC_LITERAL(10, 123, 7), // "int64_t"
QT_MOC_LITERAL(11, 131, 6), // "offset"
QT_MOC_LITERAL(12, 138, 19), // "SourceMixersChanged"
QT_MOC_LITERAL(13, 158, 6), // "mixers"
QT_MOC_LITERAL(14, 165, 13), // "volumeChanged"
QT_MOC_LITERAL(15, 179, 2), // "db"
QT_MOC_LITERAL(16, 182, 14), // "percentChanged"
QT_MOC_LITERAL(17, 197, 7), // "percent"
QT_MOC_LITERAL(18, 205, 18), // "downmixMonoChanged"
QT_MOC_LITERAL(19, 224, 7), // "checked"
QT_MOC_LITERAL(20, 232, 14), // "balanceChanged"
QT_MOC_LITERAL(21, 247, 3), // "val"
QT_MOC_LITERAL(22, 251, 17), // "syncOffsetChanged"
QT_MOC_LITERAL(23, 269, 12), // "milliseconds"
QT_MOC_LITERAL(24, 282, 21), // "monitoringTypeChanged"
QT_MOC_LITERAL(25, 304, 5), // "index"
QT_MOC_LITERAL(26, 310, 13), // "mixer1Changed"
QT_MOC_LITERAL(27, 324, 13), // "mixer2Changed"
QT_MOC_LITERAL(28, 338, 13), // "mixer3Changed"
QT_MOC_LITERAL(29, 352, 13), // "mixer4Changed"
QT_MOC_LITERAL(30, 366, 13), // "mixer5Changed"
QT_MOC_LITERAL(31, 380, 13), // "mixer6Changed"
QT_MOC_LITERAL(32, 394, 12) // "ResetBalance"

    },
    "OBSAdvAudioCtrl\0SourceActiveChanged\0"
    "\0active\0SourceFlagsChanged\0uint32_t\0"
    "flags\0SourceVolumeChanged\0volume\0"
    "SourceSyncChanged\0int64_t\0offset\0"
    "SourceMixersChanged\0mixers\0volumeChanged\0"
    "db\0percentChanged\0percent\0downmixMonoChanged\0"
    "checked\0balanceChanged\0val\0syncOffsetChanged\0"
    "milliseconds\0monitoringTypeChanged\0"
    "index\0mixer1Changed\0mixer2Changed\0"
    "mixer3Changed\0mixer4Changed\0mixer5Changed\0"
    "mixer6Changed\0ResetBalance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSAdvAudioCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x0a /* Public */,
       4,    1,  107,    2, 0x0a /* Public */,
       7,    1,  110,    2, 0x0a /* Public */,
       9,    1,  113,    2, 0x0a /* Public */,
      12,    1,  116,    2, 0x0a /* Public */,
      14,    1,  119,    2, 0x0a /* Public */,
      16,    1,  122,    2, 0x0a /* Public */,
      18,    1,  125,    2, 0x0a /* Public */,
      20,    1,  128,    2, 0x0a /* Public */,
      22,    1,  131,    2, 0x0a /* Public */,
      24,    1,  134,    2, 0x0a /* Public */,
      26,    1,  137,    2, 0x0a /* Public */,
      27,    1,  140,    2, 0x0a /* Public */,
      28,    1,  143,    2, 0x0a /* Public */,
      29,    1,  146,    2, 0x0a /* Public */,
      30,    1,  149,    2, 0x0a /* Public */,
      31,    1,  152,    2, 0x0a /* Public */,
      32,    0,  155,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void OBSAdvAudioCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSAdvAudioCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SourceActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SourceFlagsChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 2: _t->SourceVolumeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->SourceSyncChanged((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 4: _t->SourceMixersChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 5: _t->volumeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->percentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->downmixMonoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->balanceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->syncOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->monitoringTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->mixer1Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->mixer2Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->mixer3Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->mixer4Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->mixer5Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->mixer6Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->ResetBalance(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OBSAdvAudioCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OBSAdvAudioCtrl.data,
    qt_meta_data_OBSAdvAudioCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSAdvAudioCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSAdvAudioCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSAdvAudioCtrl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OBSAdvAudioCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
