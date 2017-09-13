/****************************************************************************
** Meta object code from reading C++ file 'lbm_stream_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lbm_stream_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lbm_stream_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LBMStreamDialog_t {
    QByteArrayData data[7];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LBMStreamDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LBMStreamDialog_t qt_meta_stringdata_LBMStreamDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 14),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 13),
QT_MOC_LITERAL(4, 46, 5),
QT_MOC_LITERAL(5, 52, 11),
QT_MOC_LITERAL(6, 64, 28)
    },
    "LBMStreamDialog\0setCaptureFile\0\0"
    "capture_file*\0cfile\0closeDialog\0"
    "on_applyFilterButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LBMStreamDialog[] = {

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
       5,    0,   32,    2, 0x08,
       6,    0,   33,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LBMStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LBMStreamDialog *_t = static_cast<LBMStreamDialog *>(_o);
        switch (_id) {
        case 0: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 1: _t->closeDialog(); break;
        case 2: _t->on_applyFilterButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LBMStreamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LBMStreamDialog.data,
      qt_meta_data_LBMStreamDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *LBMStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LBMStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LBMStreamDialog.stringdata))
        return static_cast<void*>(const_cast< LBMStreamDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LBMStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
