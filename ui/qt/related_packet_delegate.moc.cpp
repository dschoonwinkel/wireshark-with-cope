/****************************************************************************
** Meta object code from reading C++ file 'related_packet_delegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "related_packet_delegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'related_packet_delegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RelatedPacketDelegate_t {
    QByteArrayData data[6];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RelatedPacketDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RelatedPacketDelegate_t qt_meta_stringdata_RelatedPacketDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 15),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 9),
QT_MOC_LITERAL(4, 49, 18),
QT_MOC_LITERAL(5, 68, 13)
    },
    "RelatedPacketDelegate\0addRelatedFrame\0"
    "\0frame_num\0ft_framenum_type_t\0"
    "framenum_type\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RelatedPacketDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a,
       1,    1,   29,    2, 0x2a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void RelatedPacketDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RelatedPacketDelegate *_t = static_cast<RelatedPacketDelegate *>(_o);
        switch (_id) {
        case 0: _t->addRelatedFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< ft_framenum_type_t(*)>(_a[2]))); break;
        case 1: _t->addRelatedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RelatedPacketDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_RelatedPacketDelegate.data,
      qt_meta_data_RelatedPacketDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *RelatedPacketDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RelatedPacketDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RelatedPacketDelegate.stringdata))
        return static_cast<void*>(const_cast< RelatedPacketDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int RelatedPacketDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
