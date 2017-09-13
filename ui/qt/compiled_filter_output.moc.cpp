/****************************************************************************
** Meta object code from reading C++ file 'compiled_filter_output.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compiled_filter_output.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compiled_filter_output.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CompiledFilterOutput_t {
    QByteArrayData data[7];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CompiledFilterOutput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CompiledFilterOutput_t qt_meta_stringdata_CompiledFilterOutput = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 35),
QT_MOC_LITERAL(2, 57, 0),
QT_MOC_LITERAL(3, 58, 16),
QT_MOC_LITERAL(4, 75, 7),
QT_MOC_LITERAL(5, 83, 8),
QT_MOC_LITERAL(6, 92, 14)
    },
    "CompiledFilterOutput\0"
    "on_interfaceList_currentItemChanged\0"
    "\0QListWidgetItem*\0current\0previous\0"
    "copyFilterText\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompiledFilterOutput[] = {

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
       1,    2,   24,    2, 0x08,
       6,    0,   29,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void CompiledFilterOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompiledFilterOutput *_t = static_cast<CompiledFilterOutput *>(_o);
        switch (_id) {
        case 0: _t->on_interfaceList_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->copyFilterText(); break;
        default: ;
        }
    }
}

const QMetaObject CompiledFilterOutput::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_CompiledFilterOutput.data,
      qt_meta_data_CompiledFilterOutput,  qt_static_metacall, 0, 0}
};


const QMetaObject *CompiledFilterOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompiledFilterOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompiledFilterOutput.stringdata))
        return static_cast<void*>(const_cast< CompiledFilterOutput*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int CompiledFilterOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
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
