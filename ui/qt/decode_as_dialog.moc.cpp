/****************************************************************************
** Meta object code from reading C++ file 'decode_as_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "decode_as_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decode_as_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DecodeAsDialog_t {
    QByteArrayData data[26];
    char stringdata[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DecodeAsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DecodeAsDialog_t qt_meta_stringdata_DecodeAsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 14),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 13),
QT_MOC_LITERAL(4, 45, 2),
QT_MOC_LITERAL(5, 48, 9),
QT_MOC_LITERAL(6, 58, 16),
QT_MOC_LITERAL(7, 75, 40),
QT_MOC_LITERAL(8, 116, 16),
QT_MOC_LITERAL(9, 133, 7),
QT_MOC_LITERAL(10, 141, 8),
QT_MOC_LITERAL(11, 150, 35),
QT_MOC_LITERAL(12, 186, 4),
QT_MOC_LITERAL(13, 191, 6),
QT_MOC_LITERAL(14, 198, 42),
QT_MOC_LITERAL(15, 241, 24),
QT_MOC_LITERAL(16, 266, 27),
QT_MOC_LITERAL(17, 294, 25),
QT_MOC_LITERAL(18, 320, 29),
QT_MOC_LITERAL(19, 350, 4),
QT_MOC_LITERAL(20, 355, 23),
QT_MOC_LITERAL(21, 379, 27),
QT_MOC_LITERAL(22, 407, 12),
QT_MOC_LITERAL(23, 420, 20),
QT_MOC_LITERAL(24, 441, 16),
QT_MOC_LITERAL(25, 458, 6)
    },
    "DecodeAsDialog\0setCaptureFile\0\0"
    "capture_file*\0cf\0fillTable\0activateLastItem\0"
    "on_decodeAsTreeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_decodeAsTreeWidget_itemActivated\0"
    "item\0column\0on_decodeAsTreeWidget_itemSelectionChanged\0"
    "on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
    "tableNamesCurrentIndexChanged\0text\0"
    "selectorEditTextChanged\0"
    "curProtoCurrentIndexChanged\0applyChanges\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecodeAsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a,
       5,    0,   92,    2, 0x08,
       6,    0,   93,    2, 0x08,
       7,    2,   94,    2, 0x08,
      11,    2,   99,    2, 0x08,
      11,    1,  104,    2, 0x28,
      14,    0,  107,    2, 0x08,
      15,    0,  108,    2, 0x08,
      16,    0,  109,    2, 0x08,
      17,    0,  110,    2, 0x08,
      18,    1,  111,    2, 0x08,
      20,    1,  114,    2, 0x08,
      21,    1,  117,    2, 0x08,
      22,    0,  120,    2, 0x08,
      23,    1,  121,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void DecodeAsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DecodeAsDialog *_t = static_cast<DecodeAsDialog *>(_o);
        switch (_id) {
        case 0: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 1: _t->fillTable(); break;
        case 2: _t->activateLastItem(); break;
        case 3: _t->on_decodeAsTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 4: _t->on_decodeAsTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_decodeAsTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_decodeAsTreeWidget_itemSelectionChanged(); break;
        case 7: _t->on_newToolButton_clicked(); break;
        case 8: _t->on_deleteToolButton_clicked(); break;
        case 9: _t->on_copyToolButton_clicked(); break;
        case 10: _t->tableNamesCurrentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->selectorEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->curProtoCurrentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->applyChanges(); break;
        case 14: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DecodeAsDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_DecodeAsDialog.data,
      qt_meta_data_DecodeAsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *DecodeAsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecodeAsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DecodeAsDialog.stringdata))
        return static_cast<void*>(const_cast< DecodeAsDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int DecodeAsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
