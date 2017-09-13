/****************************************************************************
** Meta object code from reading C++ file 'wireless_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wireless_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wireless_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WirelessFrame_t {
    QByteArrayData data[12];
    char stringdata[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WirelessFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WirelessFrame_t qt_meta_stringdata_WirelessFrame = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 23),
QT_MOC_LITERAL(4, 57, 16),
QT_MOC_LITERAL(5, 74, 13),
QT_MOC_LITERAL(6, 88, 27),
QT_MOC_LITERAL(7, 116, 26),
QT_MOC_LITERAL(8, 143, 30),
QT_MOC_LITERAL(9, 174, 28),
QT_MOC_LITERAL(10, 203, 32),
QT_MOC_LITERAL(11, 236, 24)
    },
    "WirelessFrame\0pushAdapterStatus\0\0"
    "showWirelessPreferences\0wlan_module_name\0"
    "updateWidgets\0on_helperToolButton_clicked\0"
    "on_prefsToolButton_clicked\0"
    "on_interfaceComboBox_activated\0"
    "on_channelComboBox_activated\0"
    "on_channelTypeComboBox_activated\0"
    "on_fcsComboBox_activated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WirelessFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       3,    1,   62,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x08,
       6,    0,   66,    2, 0x08,
       7,    0,   67,    2, 0x08,
       8,    1,   68,    2, 0x08,
       9,    1,   71,    2, 0x08,
      10,    1,   74,    2, 0x08,
      11,    1,   77,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void WirelessFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WirelessFrame *_t = static_cast<WirelessFrame *>(_o);
        switch (_id) {
        case 0: _t->pushAdapterStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showWirelessPreferences((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateWidgets(); break;
        case 3: _t->on_helperToolButton_clicked(); break;
        case 4: _t->on_prefsToolButton_clicked(); break;
        case 5: _t->on_interfaceComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_channelComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_channelTypeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_fcsComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WirelessFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessFrame::pushAdapterStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (WirelessFrame::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WirelessFrame::showWirelessPreferences)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WirelessFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WirelessFrame.data,
      qt_meta_data_WirelessFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WirelessFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WirelessFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WirelessFrame.stringdata))
        return static_cast<void*>(const_cast< WirelessFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WirelessFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WirelessFrame::pushAdapterStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WirelessFrame::showWirelessPreferences(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
