/****************************************************************************
** Meta object code from reading C++ file 'voip_calls_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "voip_calls_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voip_calls_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VoipCallsDialog_t {
    QByteArrayData data[26];
    char stringdata[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VoipCallsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VoipCallsDialog_t qt_meta_stringdata_VoipCallsDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 12),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 6),
QT_MOC_LITERAL(4, 37, 5),
QT_MOC_LITERAL(5, 43, 18),
QT_MOC_LITERAL(6, 62, 14),
QT_MOC_LITERAL(7, 77, 2),
QT_MOC_LITERAL(8, 80, 10),
QT_MOC_LITERAL(9, 91, 10),
QT_MOC_LITERAL(10, 102, 15),
QT_MOC_LITERAL(11, 118, 11),
QT_MOC_LITERAL(12, 130, 7),
QT_MOC_LITERAL(13, 138, 5),
QT_MOC_LITERAL(14, 144, 18),
QT_MOC_LITERAL(15, 163, 31),
QT_MOC_LITERAL(16, 195, 16),
QT_MOC_LITERAL(17, 212, 4),
QT_MOC_LITERAL(18, 217, 38),
QT_MOC_LITERAL(19, 256, 29),
QT_MOC_LITERAL(20, 286, 28),
QT_MOC_LITERAL(21, 315, 29),
QT_MOC_LITERAL(22, 345, 20),
QT_MOC_LITERAL(23, 366, 16),
QT_MOC_LITERAL(24, 383, 6),
QT_MOC_LITERAL(25, 390, 26)
    },
    "VoipCallsDialog\0updateFilter\0\0filter\0"
    "force\0captureFileChanged\0_capture_file*\0"
    "cf\0goToPacket\0packet_num\0endRetapPackets\0"
    "changeEvent\0QEvent*\0event\0captureFileClosing\0"
    "on_callTreeWidget_itemActivated\0"
    "QTreeWidgetItem*\0item\0"
    "on_callTreeWidget_itemSelectionChanged\0"
    "on_actionSelect_All_triggered\0"
    "on_actionCopyAsCsv_triggered\0"
    "on_actionCopyAsYaml_triggered\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VoipCallsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06,
       1,    1,   89,    2, 0x26,
       5,    1,   92,    2, 0x06,
       8,    1,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   98,    2, 0x0a,
      11,    1,   99,    2, 0x09,
      14,    0,  102,    2, 0x08,
      15,    2,  103,    2, 0x08,
      18,    0,  108,    2, 0x08,
      19,    0,  109,    2, 0x08,
      20,    0,  110,    2, 0x08,
      21,    0,  111,    2, 0x08,
      22,    1,  112,    2, 0x08,
      25,    0,  115,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,

       0        // eod
};

void VoipCallsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VoipCallsDialog *_t = static_cast<VoipCallsDialog *>(_o);
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->captureFileChanged((*reinterpret_cast< _capture_file*(*)>(_a[1]))); break;
        case 3: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->endRetapPackets(); break;
        case 5: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: _t->captureFileClosing(); break;
        case 7: _t->on_callTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_callTreeWidget_itemSelectionChanged(); break;
        case 9: _t->on_actionSelect_All_triggered(); break;
        case 10: _t->on_actionCopyAsCsv_triggered(); break;
        case 11: _t->on_actionCopyAsYaml_triggered(); break;
        case 12: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 13: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VoipCallsDialog::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoipCallsDialog::updateFilter)) {
                *result = 0;
            }
        }
        {
            typedef void (VoipCallsDialog::*_t)(_capture_file * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoipCallsDialog::captureFileChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VoipCallsDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VoipCallsDialog::goToPacket)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject VoipCallsDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_VoipCallsDialog.data,
      qt_meta_data_VoipCallsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *VoipCallsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoipCallsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VoipCallsDialog.stringdata))
        return static_cast<void*>(const_cast< VoipCallsDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int VoipCallsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void VoipCallsDialog::updateFilter(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void VoipCallsDialog::captureFileChanged(_capture_file * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VoipCallsDialog::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
