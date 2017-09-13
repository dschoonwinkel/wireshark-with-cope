/****************************************************************************
** Meta object code from reading C++ file 'dissector_tables_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dissector_tables_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dissector_tables_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DissectorTablesDialog_t {
    QByteArrayData data[3];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DissectorTablesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DissectorTablesDialog_t qt_meta_stringdata_DissectorTablesDialog = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 39),
QT_MOC_LITERAL(2, 62, 0)
    },
    "DissectorTablesDialog\0"
    "on_tableTreeWidget_itemSelectionChanged\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DissectorTablesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DissectorTablesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DissectorTablesDialog *_t = static_cast<DissectorTablesDialog *>(_o);
        switch (_id) {
        case 0: _t->on_tableTreeWidget_itemSelectionChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DissectorTablesDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_DissectorTablesDialog.data,
      qt_meta_data_DissectorTablesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *DissectorTablesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DissectorTablesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DissectorTablesDialog.stringdata))
        return static_cast<void*>(const_cast< DissectorTablesDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int DissectorTablesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
