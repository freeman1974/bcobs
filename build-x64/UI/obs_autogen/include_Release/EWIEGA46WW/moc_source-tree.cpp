/****************************************************************************
** Meta object code from reading C++ file 'source-tree.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "source-tree.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source-tree.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SourceTreeSubItemCheckBox_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeSubItemCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeSubItemCheckBox_t qt_meta_stringdata_SourceTreeSubItemCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 25) // "SourceTreeSubItemCheckBox"

    },
    "SourceTreeSubItemCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeSubItemCheckBox[] = {

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

void SourceTreeSubItemCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SourceTreeSubItemCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_SourceTreeSubItemCheckBox.data,
    qt_meta_data_SourceTreeSubItemCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceTreeSubItemCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeSubItemCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeSubItemCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SourceTreeSubItemCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SourceTreeItem_t {
    QByteArrayData data[15];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeItem_t qt_meta_stringdata_SourceTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SourceTreeItem"
QT_MOC_LITERAL(1, 15, 5), // "Clear"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "EnterEditMode"
QT_MOC_LITERAL(4, 36, 12), // "ExitEditMode"
QT_MOC_LITERAL(5, 49, 4), // "save"
QT_MOC_LITERAL(6, 54, 17), // "VisibilityChanged"
QT_MOC_LITERAL(7, 72, 7), // "visible"
QT_MOC_LITERAL(8, 80, 13), // "LockedChanged"
QT_MOC_LITERAL(9, 94, 6), // "locked"
QT_MOC_LITERAL(10, 101, 7), // "Renamed"
QT_MOC_LITERAL(11, 109, 4), // "name"
QT_MOC_LITERAL(12, 114, 13), // "ExpandClicked"
QT_MOC_LITERAL(13, 128, 7), // "checked"
QT_MOC_LITERAL(14, 136, 8) // "Deselect"

    },
    "SourceTreeItem\0Clear\0\0EnterEditMode\0"
    "ExitEditMode\0save\0VisibilityChanged\0"
    "visible\0LockedChanged\0locked\0Renamed\0"
    "name\0ExpandClicked\0checked\0Deselect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      12,    1,   68,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void SourceTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Clear(); break;
        case 1: _t->EnterEditMode(); break;
        case 2: _t->ExitEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->LockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->Renamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->ExpandClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Deselect(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SourceTreeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SourceTreeItem.data,
    qt_meta_data_SourceTreeItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SourceTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_SourceTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeModel_t qt_meta_stringdata_SourceTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SourceTreeModel"

    },
    "SourceTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeModel[] = {

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

void SourceTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SourceTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_SourceTreeModel.data,
    qt_meta_data_SourceTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SourceTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SourceTree_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTree_t qt_meta_stringdata_SourceTree = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SourceTree"
QT_MOC_LITERAL(1, 11, 12), // "ReorderItems"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "RefreshItems"
QT_MOC_LITERAL(4, 38, 6), // "Remove"
QT_MOC_LITERAL(5, 45, 12), // "OBSSceneItem"
QT_MOC_LITERAL(6, 58, 4), // "item"
QT_MOC_LITERAL(7, 63, 18), // "GroupSelectedItems"
QT_MOC_LITERAL(8, 82, 21), // "UngroupSelectedGroups"
QT_MOC_LITERAL(9, 104, 8), // "AddGroup"
QT_MOC_LITERAL(10, 113, 4), // "Edit"
QT_MOC_LITERAL(11, 118, 3) // "idx"

    },
    "SourceTree\0ReorderItems\0\0RefreshItems\0"
    "Remove\0OBSSceneItem\0item\0GroupSelectedItems\0"
    "UngroupSelectedGroups\0AddGroup\0Edit\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void SourceTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReorderItems(); break;
        case 1: _t->RefreshItems(); break;
        case 2: _t->Remove((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 3: _t->GroupSelectedItems(); break;
        case 4: _t->UngroupSelectedGroups(); break;
        case 5: _t->AddGroup(); break;
        case 6: _t->Edit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SourceTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_SourceTree.data,
    qt_meta_data_SourceTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTree.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int SourceTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
