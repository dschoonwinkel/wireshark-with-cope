/****************************************************************************
** Meta object code from reading C++ file 'proto_tree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "proto_tree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proto_tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProtoTree_t {
    QByteArrayData data[29];
    char stringdata[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ProtoTree_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ProtoTree_t qt_meta_stringdata_ProtoTree = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 17),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 11),
QT_MOC_LITERAL(4, 41, 21),
QT_MOC_LITERAL(5, 63, 10),
QT_MOC_LITERAL(6, 74, 12),
QT_MOC_LITERAL(7, 87, 18),
QT_MOC_LITERAL(8, 106, 23),
QT_MOC_LITERAL(9, 130, 11),
QT_MOC_LITERAL(10, 142, 22),
QT_MOC_LITERAL(11, 165, 11),
QT_MOC_LITERAL(12, 177, 4),
QT_MOC_LITERAL(13, 182, 12),
QT_MOC_LITERAL(14, 195, 6),
QT_MOC_LITERAL(15, 202, 16),
QT_MOC_LITERAL(16, 219, 9),
QT_MOC_LITERAL(17, 229, 21),
QT_MOC_LITERAL(18, 251, 16),
QT_MOC_LITERAL(19, 268, 6),
QT_MOC_LITERAL(20, 275, 5),
QT_MOC_LITERAL(21, 281, 8),
QT_MOC_LITERAL(22, 290, 14),
QT_MOC_LITERAL(23, 305, 9),
QT_MOC_LITERAL(24, 315, 11),
QT_MOC_LITERAL(25, 327, 15),
QT_MOC_LITERAL(26, 343, 4),
QT_MOC_LITERAL(27, 348, 6),
QT_MOC_LITERAL(28, 355, 18)
    },
    "ProtoTree\0protoItemSelected\0\0field_info*\0"
    "openPacketInNewWindow\0goToPacket\0"
    "relatedFrame\0ft_framenum_type_t\0"
    "showProtocolPreferences\0module_name\0"
    "editProtocolPreference\0preference*\0"
    "pref\0pref_module*\0module\0setMonospaceFont\0"
    "mono_font\0updateSelectionStatus\0"
    "QTreeWidgetItem*\0expand\0index\0collapse\0"
    "expandSubtrees\0expandAll\0collapseAll\0"
    "itemDoubleClick\0item\0column\0"
    "updateContentWidth\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProtoTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06,
       1,    1,   97,    2, 0x06,
       4,    1,  100,    2, 0x06,
       5,    1,  103,    2, 0x06,
       6,    2,  106,    2, 0x06,
       8,    1,  111,    2, 0x06,
      10,    2,  114,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      15,    1,  119,    2, 0x0a,
      17,    1,  122,    2, 0x0a,
      19,    1,  125,    2, 0x0a,
      21,    1,  128,    2, 0x0a,
      22,    0,  131,    2, 0x0a,
      23,    0,  132,    2, 0x0a,
      24,    0,  133,    2, 0x0a,
      25,    2,  134,    2, 0x0a,
      28,    0,  139,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,   16,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void, QMetaType::QModelIndex,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,   26,   27,
    QMetaType::Void,

       0        // eod
};

void ProtoTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProtoTree *_t = static_cast<ProtoTree *>(_o);
        switch (_id) {
        case 0: _t->protoItemSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->protoItemSelected((*reinterpret_cast< field_info*(*)>(_a[1]))); break;
        case 2: _t->openPacketInNewWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->relatedFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< ft_framenum_type_t(*)>(_a[2]))); break;
        case 5: _t->showProtocolPreferences((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->editProtocolPreference((*reinterpret_cast< preference*(*)>(_a[1])),(*reinterpret_cast< pref_module*(*)>(_a[2]))); break;
        case 7: _t->setMonospaceFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 8: _t->updateSelectionStatus((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->expand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->collapse((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->expandSubtrees(); break;
        case 12: _t->expandAll(); break;
        case 13: _t->collapseAll(); break;
        case 14: _t->itemDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->updateContentWidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< field_info* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProtoTree::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::protoItemSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (ProtoTree::*_t)(field_info * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::protoItemSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (ProtoTree::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::openPacketInNewWindow)) {
                *result = 2;
            }
        }
        {
            typedef void (ProtoTree::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::goToPacket)) {
                *result = 3;
            }
        }
        {
            typedef void (ProtoTree::*_t)(int , ft_framenum_type_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::relatedFrame)) {
                *result = 4;
            }
        }
        {
            typedef void (ProtoTree::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::showProtocolPreferences)) {
                *result = 5;
            }
        }
        {
            typedef void (ProtoTree::*_t)(preference * , pref_module * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProtoTree::editProtocolPreference)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject ProtoTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_ProtoTree.data,
      qt_meta_data_ProtoTree,  qt_static_metacall, 0, 0}
};


const QMetaObject *ProtoTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtoTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProtoTree.stringdata))
        return static_cast<void*>(const_cast< ProtoTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int ProtoTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ProtoTree::protoItemSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProtoTree::protoItemSelected(field_info * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProtoTree::openPacketInNewWindow(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProtoTree::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProtoTree::relatedFrame(int _t1, ft_framenum_type_t _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProtoTree::showProtocolPreferences(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ProtoTree::editProtocolPreference(preference * _t1, pref_module * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
