/****************************************************************************
** Meta object code from reading C++ file 'volume-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "volume-control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volume-control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumeMeter_t {
    QByteArrayData data[22];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeMeter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeMeter_t qt_meta_stringdata_VolumeMeter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VolumeMeter"
QT_MOC_LITERAL(1, 12, 10), // "ClipEnding"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "backgroundNominalColor"
QT_MOC_LITERAL(4, 47, 22), // "backgroundWarningColor"
QT_MOC_LITERAL(5, 70, 20), // "backgroundErrorColor"
QT_MOC_LITERAL(6, 91, 22), // "foregroundNominalColor"
QT_MOC_LITERAL(7, 114, 22), // "foregroundWarningColor"
QT_MOC_LITERAL(8, 137, 20), // "foregroundErrorColor"
QT_MOC_LITERAL(9, 158, 9), // "clipColor"
QT_MOC_LITERAL(10, 168, 14), // "magnitudeColor"
QT_MOC_LITERAL(11, 183, 14), // "majorTickColor"
QT_MOC_LITERAL(12, 198, 14), // "minorTickColor"
QT_MOC_LITERAL(13, 213, 12), // "minimumLevel"
QT_MOC_LITERAL(14, 226, 12), // "warningLevel"
QT_MOC_LITERAL(15, 239, 10), // "errorLevel"
QT_MOC_LITERAL(16, 250, 9), // "clipLevel"
QT_MOC_LITERAL(17, 260, 17), // "minimumInputLevel"
QT_MOC_LITERAL(18, 278, 13), // "peakDecayRate"
QT_MOC_LITERAL(19, 292, 24), // "magnitudeIntegrationTime"
QT_MOC_LITERAL(20, 317, 16), // "peakHoldDuration"
QT_MOC_LITERAL(21, 334, 21) // "inputPeakHoldDuration"

    },
    "VolumeMeter\0ClipEnding\0\0backgroundNominalColor\0"
    "backgroundWarningColor\0backgroundErrorColor\0"
    "foregroundNominalColor\0foregroundWarningColor\0"
    "foregroundErrorColor\0clipColor\0"
    "magnitudeColor\0majorTickColor\0"
    "minorTickColor\0minimumLevel\0warningLevel\0"
    "errorLevel\0clipLevel\0minimumInputLevel\0"
    "peakDecayRate\0magnitudeIntegrationTime\0"
    "peakHoldDuration\0inputPeakHoldDuration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeMeter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      19,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QReal, 0x00095103,
      14, QMetaType::QReal, 0x00095103,
      15, QMetaType::QReal, 0x00095103,
      16, QMetaType::QReal, 0x00095103,
      17, QMetaType::QReal, 0x00095103,
      18, QMetaType::QReal, 0x00095103,
      19, QMetaType::QReal, 0x00095103,
      20, QMetaType::QReal, 0x00095103,
      21, QMetaType::QReal, 0x00095103,

       0        // eod
};

void VolumeMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeMeter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ClipEnding(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VolumeMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundNominalColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundWarningColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundErrorColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getForegroundNominalColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getForegroundWarningColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getForegroundErrorColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getClipColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getMagnitudeColor(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->getMajorTickColor(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getMinorTickColor(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->getMinimumLevel(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->getWarningLevel(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->getErrorLevel(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->getClipLevel(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->getMinimumInputLevel(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->getPeakDecayRate(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->getMagnitudeIntegrationTime(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->getPeakHoldDuration(); break;
        case 18: *reinterpret_cast< qreal*>(_v) = _t->getInputPeakHoldDuration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VolumeMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundNominalColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBackgroundWarningColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackgroundErrorColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setForegroundNominalColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setForegroundWarningColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setForegroundErrorColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setClipColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setMagnitudeColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setMajorTickColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setMinorTickColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setMinimumLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 11: _t->setWarningLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setErrorLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 13: _t->setClipLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 14: _t->setMinimumInputLevel(*reinterpret_cast< qreal*>(_v)); break;
        case 15: _t->setPeakDecayRate(*reinterpret_cast< qreal*>(_v)); break;
        case 16: _t->setMagnitudeIntegrationTime(*reinterpret_cast< qreal*>(_v)); break;
        case 17: _t->setPeakHoldDuration(*reinterpret_cast< qreal*>(_v)); break;
        case 18: _t->setInputPeakHoldDuration(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VolumeMeter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VolumeMeter.data,
    qt_meta_data_VolumeMeter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolumeMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeMeter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VolumeMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VolumeMeterTimer_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeMeterTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeMeterTimer_t qt_meta_stringdata_VolumeMeterTimer = {
    {
QT_MOC_LITERAL(0, 0, 16) // "VolumeMeterTimer"

    },
    "VolumeMeterTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeMeterTimer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void VolumeMeterTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VolumeMeterTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTimer::staticMetaObject>(),
    qt_meta_stringdata_VolumeMeterTimer.data,
    qt_meta_data_VolumeMeterTimer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolumeMeterTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeterTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeMeterTimer.stringdata0))
        return static_cast<void*>(this);
    return QTimer::qt_metacast(_clname);
}

int VolumeMeterTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VolControl_t {
    QByteArrayData data[11];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolControl_t qt_meta_stringdata_VolControl = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VolControl"
QT_MOC_LITERAL(1, 11, 13), // "ConfigClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "VolumeChanged"
QT_MOC_LITERAL(4, 40, 11), // "VolumeMuted"
QT_MOC_LITERAL(5, 52, 5), // "muted"
QT_MOC_LITERAL(6, 58, 8), // "SetMuted"
QT_MOC_LITERAL(7, 67, 7), // "checked"
QT_MOC_LITERAL(8, 75, 13), // "SliderChanged"
QT_MOC_LITERAL(9, 89, 3), // "vol"
QT_MOC_LITERAL(10, 93, 10) // "updateText"

    },
    "VolControl\0ConfigClicked\0\0VolumeChanged\0"
    "VolumeMuted\0muted\0SetMuted\0checked\0"
    "SliderChanged\0vol\0updateText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void VolControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ConfigClicked(); break;
        case 1: _t->VolumeChanged(); break;
        case 2: _t->VolumeMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VolControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolControl::ConfigClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VolControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VolControl.data,
    qt_meta_data_VolControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VolControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VolControl::ConfigClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
