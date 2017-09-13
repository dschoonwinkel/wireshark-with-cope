/****************************************************************************
** Meta object code from reading C++ file 'resolved_addresses_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "resolved_addresses_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resolved_addresses_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResolvedAddressesDialog_t {
    QByteArrayData data[15];
    char stringdata[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ResolvedAddressesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ResolvedAddressesDialog_t qt_meta_stringdata_ResolvedAddressesDialog = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 11),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 7),
QT_MOC_LITERAL(4, 45, 5),
QT_MOC_LITERAL(5, 51, 33),
QT_MOC_LITERAL(6, 85, 26),
QT_MOC_LITERAL(7, 112, 32),
QT_MOC_LITERAL(8, 145, 32),
QT_MOC_LITERAL(9, 178, 28),
QT_MOC_LITERAL(10, 207, 36),
QT_MOC_LITERAL(11, 244, 40),
QT_MOC_LITERAL(12, 285, 30),
QT_MOC_LITERAL(13, 316, 26),
QT_MOC_LITERAL(14, 343, 26)
    },
    "ResolvedAddressesDialog\0changeEvent\0"
    "\0QEvent*\0event\0on_actionAddressesHosts_triggered\0"
    "on_actionComment_triggered\0"
    "on_actionIPv4HashTable_triggered\0"
    "on_actionIPv6HashTable_triggered\0"
    "on_actionPortNames_triggered\0"
    "on_actionEthernetAddresses_triggered\0"
    "on_actionEthernetManufacturers_triggered\0"
    "on_actionEthernetWKA_triggered\0"
    "on_actionShowAll_triggered\0"
    "on_actionHideAll_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResolvedAddressesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x09,
       5,    0,   72,    2, 0x08,
       6,    0,   73,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    0,   75,    2, 0x08,
       9,    0,   76,    2, 0x08,
      10,    0,   77,    2, 0x08,
      11,    0,   78,    2, 0x08,
      12,    0,   79,    2, 0x08,
      13,    0,   80,    2, 0x08,
      14,    0,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ResolvedAddressesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResolvedAddressesDialog *_t = static_cast<ResolvedAddressesDialog *>(_o);
        switch (_id) {
        case 0: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->on_actionAddressesHosts_triggered(); break;
        case 2: _t->on_actionComment_triggered(); break;
        case 3: _t->on_actionIPv4HashTable_triggered(); break;
        case 4: _t->on_actionIPv6HashTable_triggered(); break;
        case 5: _t->on_actionPortNames_triggered(); break;
        case 6: _t->on_actionEthernetAddresses_triggered(); break;
        case 7: _t->on_actionEthernetManufacturers_triggered(); break;
        case 8: _t->on_actionEthernetWKA_triggered(); break;
        case 9: _t->on_actionShowAll_triggered(); break;
        case 10: _t->on_actionHideAll_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject ResolvedAddressesDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_ResolvedAddressesDialog.data,
      qt_meta_data_ResolvedAddressesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ResolvedAddressesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResolvedAddressesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResolvedAddressesDialog.stringdata))
        return static_cast<void*>(const_cast< ResolvedAddressesDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int ResolvedAddressesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
