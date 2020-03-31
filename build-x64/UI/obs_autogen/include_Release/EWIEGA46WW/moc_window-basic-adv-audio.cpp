/****************************************************************************
** Meta object code from reading C++ file 'window-basic-adv-audio.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "window-basic-adv-audio.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-adv-audio.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasicAdvAudio_t {
    QByteArrayData data[11];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicAdvAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicAdvAudio_t qt_meta_stringdata_OBSBasicAdvAudio = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicAdvAudio"
QT_MOC_LITERAL(1, 17, 11), // "SourceAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "OBSSource"
QT_MOC_LITERAL(4, 40, 6), // "source"
QT_MOC_LITERAL(5, 47, 13), // "SourceRemoved"
QT_MOC_LITERAL(6, 61, 15), // "ShowContextMenu"
QT_MOC_LITERAL(7, 77, 3), // "pos"
QT_MOC_LITERAL(8, 81, 13), // "SetVolumeType"
QT_MOC_LITERAL(9, 95, 17), // "ActiveOnlyChanged"
QT_MOC_LITERAL(10, 113, 7) // "checked"

    },
    "OBSBasicAdvAudio\0SourceAdded\0\0OBSSource\0"
    "source\0SourceRemoved\0ShowContextMenu\0"
    "pos\0SetVolumeType\0ActiveOnlyChanged\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicAdvAudio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void OBSBasicAdvAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicAdvAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SourceAdded((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 1: _t->SourceRemoved((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 2: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->SetVolumeType(); break;
        case 4: _t->ActiveOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OBSBasicAdvAudio::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OBSBasicAdvAudio.data,
    qt_meta_data_OBSBasicAdvAudio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasicAdvAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicAdvAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicAdvAudio.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicAdvAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
