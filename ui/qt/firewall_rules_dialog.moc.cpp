/****************************************************************************
** Meta object code from reading C++ file 'firewall_rules_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "firewall_rules_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firewall_rules_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FirewallRulesDialog_t {
    QByteArrayData data[10];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FirewallRulesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FirewallRulesDialog_t qt_meta_stringdata_FirewallRulesDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 38),
QT_MOC_LITERAL(2, 59, 0),
QT_MOC_LITERAL(3, 60, 7),
QT_MOC_LITERAL(4, 68, 26),
QT_MOC_LITERAL(5, 95, 23),
QT_MOC_LITERAL(6, 119, 26),
QT_MOC_LITERAL(7, 146, 20),
QT_MOC_LITERAL(8, 167, 16),
QT_MOC_LITERAL(9, 184, 6)
    },
    "FirewallRulesDialog\0"
    "on_productComboBox_currentIndexChanged\0"
    "\0new_idx\0on_inboundCheckBox_toggled\0"
    "on_denyCheckBox_toggled\0"
    "on_buttonBox_helpRequested\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirewallRulesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08,
       4,    1,   42,    2, 0x08,
       5,    1,   45,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    1,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void FirewallRulesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirewallRulesDialog *_t = static_cast<FirewallRulesDialog *>(_o);
        switch (_id) {
        case 0: _t->on_productComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_inboundCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_denyCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_buttonBox_helpRequested(); break;
        case 4: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FirewallRulesDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_FirewallRulesDialog.data,
      qt_meta_data_FirewallRulesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *FirewallRulesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirewallRulesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FirewallRulesDialog.stringdata))
        return static_cast<void*>(const_cast< FirewallRulesDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int FirewallRulesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
