/****************************************************************************
** Meta object code from reading C++ file 'enabled_protocols_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "enabled_protocols_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enabled_protocols_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EnabledProtocolsDialog_t {
    QByteArrayData data[9];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EnabledProtocolsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EnabledProtocolsDialog_t qt_meta_stringdata_EnabledProtocolsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 25),
QT_MOC_LITERAL(2, 49, 0),
QT_MOC_LITERAL(3, 50, 29),
QT_MOC_LITERAL(4, 80, 30),
QT_MOC_LITERAL(5, 111, 32),
QT_MOC_LITERAL(6, 144, 9),
QT_MOC_LITERAL(7, 154, 21),
QT_MOC_LITERAL(8, 176, 26)
    },
    "EnabledProtocolsDialog\0on_invert_button__clicked\0"
    "\0on_enable_all_button__clicked\0"
    "on_disable_all_button__clicked\0"
    "on_search_line_edit__textChanged\0"
    "search_re\0on_buttonBox_accepted\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnabledProtocolsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    1,   47,    2, 0x08,
       7,    0,   50,    2, 0x08,
       8,    0,   51,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EnabledProtocolsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EnabledProtocolsDialog *_t = static_cast<EnabledProtocolsDialog *>(_o);
        switch (_id) {
        case 0: _t->on_invert_button__clicked(); break;
        case 1: _t->on_enable_all_button__clicked(); break;
        case 2: _t->on_disable_all_button__clicked(); break;
        case 3: _t->on_search_line_edit__textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject EnabledProtocolsDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_EnabledProtocolsDialog.data,
      qt_meta_data_EnabledProtocolsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *EnabledProtocolsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnabledProtocolsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EnabledProtocolsDialog.stringdata))
        return static_cast<void*>(const_cast< EnabledProtocolsDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int EnabledProtocolsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
