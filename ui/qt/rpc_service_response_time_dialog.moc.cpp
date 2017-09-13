/****************************************************************************
** Meta object code from reading C++ file 'rpc_service_response_time_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rpc_service_response_time_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpc_service_response_time_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RpcServiceResponseTimeDialog_t {
    QByteArrayData data[6];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RpcServiceResponseTimeDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RpcServiceResponseTimeDialog_t qt_meta_stringdata_RpcServiceResponseTimeDialog = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 20),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 12),
QT_MOC_LITERAL(4, 64, 20),
QT_MOC_LITERAL(5, 85, 8)
    },
    "RpcServiceResponseTimeDialog\0"
    "dceRpcProgramChanged\0\0program_name\0"
    "oncRpcProgramChanged\0fillTree\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RpcServiceResponseTimeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       4,    1,   32,    2, 0x0a,
       5,    0,   35,    2, 0x09,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void RpcServiceResponseTimeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RpcServiceResponseTimeDialog *_t = static_cast<RpcServiceResponseTimeDialog *>(_o);
        switch (_id) {
        case 0: _t->dceRpcProgramChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->oncRpcProgramChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fillTree(); break;
        default: ;
        }
    }
}

const QMetaObject RpcServiceResponseTimeDialog::staticMetaObject = {
    { &ServiceResponseTimeDialog::staticMetaObject, qt_meta_stringdata_RpcServiceResponseTimeDialog.data,
      qt_meta_data_RpcServiceResponseTimeDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *RpcServiceResponseTimeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RpcServiceResponseTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RpcServiceResponseTimeDialog.stringdata))
        return static_cast<void*>(const_cast< RpcServiceResponseTimeDialog*>(this));
    return ServiceResponseTimeDialog::qt_metacast(_clname);
}

int RpcServiceResponseTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServiceResponseTimeDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
