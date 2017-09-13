/****************************************************************************
** Meta object code from reading C++ file 'packet_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "packet_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PacketListModel_t {
    QByteArrayData data[25];
    char stringdata[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PacketListModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PacketListModel_t qt_meta_stringdata_PacketListModel = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 10),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 19),
QT_MOC_LITERAL(4, 48, 8),
QT_MOC_LITERAL(5, 57, 17),
QT_MOC_LITERAL(6, 75, 14),
QT_MOC_LITERAL(7, 90, 6),
QT_MOC_LITERAL(8, 97, 13),
QT_MOC_LITERAL(9, 111, 18),
QT_MOC_LITERAL(10, 130, 7),
QT_MOC_LITERAL(11, 138, 17),
QT_MOC_LITERAL(12, 156, 9),
QT_MOC_LITERAL(13, 166, 9),
QT_MOC_LITERAL(14, 176, 20),
QT_MOC_LITERAL(15, 197, 5),
QT_MOC_LITERAL(16, 203, 17),
QT_MOC_LITERAL(17, 221, 4),
QT_MOC_LITERAL(18, 226, 6),
QT_MOC_LITERAL(19, 233, 13),
QT_MOC_LITERAL(20, 247, 5),
QT_MOC_LITERAL(21, 253, 16),
QT_MOC_LITERAL(22, 270, 11),
QT_MOC_LITERAL(23, 282, 5),
QT_MOC_LITERAL(24, 288, 21)
    },
    "PacketListModel\0goToPacket\0\0"
    "maxLineCountChanged\0ih_index\0"
    "itemHeightChanged\0pushBusyStatus\0"
    "status\0popBusyStatus\0pushProgressStatus\0"
    "animate\0terminate_is_stop\0gboolean*\0"
    "stop_flag\0updateProgressStatus\0value\0"
    "popProgressStatus\0sort\0column\0"
    "Qt::SortOrder\0order\0flushVisibleRows\0"
    "dissectIdle\0reset\0emitItemHeightChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       3,    1,   87,    2, 0x06,
       5,    1,   90,    2, 0x06,
       6,    1,   93,    2, 0x06,
       8,    0,   96,    2, 0x06,
       9,    4,   97,    2, 0x06,
      14,    1,  106,    2, 0x06,
      16,    0,  109,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      17,    2,  110,    2, 0x0a,
      17,    1,  115,    2, 0x2a,
      21,    0,  118,    2, 0x0a,
      22,    1,  119,    2, 0x0a,
      22,    0,  122,    2, 0x2a,
      24,    1,  123,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 12,    7,   10,   11,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void PacketListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PacketListModel *_t = static_cast<PacketListModel *>(_o);
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->maxLineCountChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemHeightChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->pushBusyStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->popBusyStatus(); break;
        case 5: _t->pushProgressStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< gboolean*(*)>(_a[4]))); break;
        case 6: _t->updateProgressStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->popProgressStatus(); break;
        case 8: _t->sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 9: _t->sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->flushVisibleRows(); break;
        case 11: _t->dissectIdle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->dissectIdle(); break;
        case 13: _t->emitItemHeightChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PacketListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::goToPacket)) {
                *result = 0;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::maxLineCountChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::itemHeightChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::pushBusyStatus)) {
                *result = 3;
            }
        }
        {
            typedef void (PacketListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::popBusyStatus)) {
                *result = 4;
            }
        }
        {
            typedef void (PacketListModel::*_t)(const QString & , bool , bool , gboolean * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::pushProgressStatus)) {
                *result = 5;
            }
        }
        {
            typedef void (PacketListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::updateProgressStatus)) {
                *result = 6;
            }
        }
        {
            typedef void (PacketListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketListModel::popProgressStatus)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject PacketListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PacketListModel.data,
      qt_meta_data_PacketListModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *PacketListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PacketListModel.stringdata))
        return static_cast<void*>(const_cast< PacketListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PacketListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PacketListModel::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PacketListModel::maxLineCountChanged(const QModelIndex & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PacketListModel *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PacketListModel::itemHeightChanged(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PacketListModel::pushBusyStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PacketListModel::popBusyStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void PacketListModel::pushProgressStatus(const QString & _t1, bool _t2, bool _t3, gboolean * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PacketListModel::updateProgressStatus(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PacketListModel::popProgressStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
