/****************************************************************************
** Meta object code from reading C++ file 'packet_format_group_box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "packet_format_group_box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packet_format_group_box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PacketFormatGroupBox_t {
    QByteArrayData data[10];
    char stringdata[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PacketFormatGroupBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PacketFormatGroupBox_t qt_meta_stringdata_PacketFormatGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 13),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 26),
QT_MOC_LITERAL(4, 63, 7),
QT_MOC_LITERAL(5, 71, 26),
QT_MOC_LITERAL(6, 98, 24),
QT_MOC_LITERAL(7, 123, 29),
QT_MOC_LITERAL(8, 153, 28),
QT_MOC_LITERAL(9, 182, 28)
    },
    "PacketFormatGroupBox\0formatChanged\0\0"
    "on_detailsCheckBox_toggled\0checked\0"
    "on_summaryCheckBox_toggled\0"
    "on_bytesCheckBox_toggled\0"
    "on_allCollapsedButton_toggled\0"
    "on_asDisplayedButton_toggled\0"
    "on_allExpandedButton_toggled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketFormatGroupBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08,
       5,    1,   53,    2, 0x08,
       6,    1,   56,    2, 0x08,
       7,    1,   59,    2, 0x08,
       8,    1,   62,    2, 0x08,
       9,    1,   65,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void PacketFormatGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PacketFormatGroupBox *_t = static_cast<PacketFormatGroupBox *>(_o);
        switch (_id) {
        case 0: _t->formatChanged(); break;
        case 1: _t->on_detailsCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_summaryCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_bytesCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_allCollapsedButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_asDisplayedButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_allExpandedButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PacketFormatGroupBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketFormatGroupBox::formatChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PacketFormatGroupBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_PacketFormatGroupBox.data,
      qt_meta_data_PacketFormatGroupBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *PacketFormatGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketFormatGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PacketFormatGroupBox.stringdata))
        return static_cast<void*>(const_cast< PacketFormatGroupBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int PacketFormatGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PacketFormatGroupBox::formatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
