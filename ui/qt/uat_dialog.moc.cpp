/****************************************************************************
** Meta object code from reading C++ file 'uat_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uat_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uat_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UatDialog_t {
    QByteArrayData data[23];
    char stringdata[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UatDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UatDialog_t qt_meta_stringdata_UatDialog = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 35),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 16),
QT_MOC_LITERAL(4, 64, 7),
QT_MOC_LITERAL(5, 72, 8),
QT_MOC_LITERAL(6, 81, 30),
QT_MOC_LITERAL(7, 112, 4),
QT_MOC_LITERAL(8, 117, 6),
QT_MOC_LITERAL(9, 124, 37),
QT_MOC_LITERAL(10, 162, 21),
QT_MOC_LITERAL(11, 184, 17),
QT_MOC_LITERAL(12, 202, 27),
QT_MOC_LITERAL(13, 230, 5),
QT_MOC_LITERAL(14, 236, 21),
QT_MOC_LITERAL(15, 258, 4),
QT_MOC_LITERAL(16, 263, 25),
QT_MOC_LITERAL(17, 289, 24),
QT_MOC_LITERAL(18, 314, 27),
QT_MOC_LITERAL(19, 342, 25),
QT_MOC_LITERAL(20, 368, 21),
QT_MOC_LITERAL(21, 390, 21),
QT_MOC_LITERAL(22, 412, 26)
    },
    "UatDialog\0on_uatTreeWidget_currentItemChanged\0"
    "\0QTreeWidgetItem*\0current\0previous\0"
    "on_uatTreeWidget_itemActivated\0item\0"
    "column\0on_uatTreeWidget_itemSelectionChanged\0"
    "lineEditPrefDestroyed\0enumPrefDestroyed\0"
    "enumPrefCurrentIndexChanged\0index\0"
    "stringPrefTextChanged\0text\0"
    "stringPrefEditingFinished\0"
    "on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UatDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x08,
       6,    2,   89,    2, 0x08,
       9,    0,   94,    2, 0x08,
      10,    0,   95,    2, 0x08,
      11,    0,   96,    2, 0x08,
      12,    1,   97,    2, 0x08,
      14,    1,  100,    2, 0x08,
      16,    0,  103,    2, 0x08,
      17,    0,  104,    2, 0x08,
      18,    0,  105,    2, 0x08,
      19,    0,  106,    2, 0x08,
      20,    0,  107,    2, 0x08,
      21,    0,  108,    2, 0x08,
      22,    0,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UatDialog *_t = static_cast<UatDialog *>(_o);
        switch (_id) {
        case 0: _t->on_uatTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->on_uatTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_uatTreeWidget_itemSelectionChanged(); break;
        case 3: _t->lineEditPrefDestroyed(); break;
        case 4: _t->enumPrefDestroyed(); break;
        case 5: _t->enumPrefCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->stringPrefTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stringPrefEditingFinished(); break;
        case 8: _t->on_newToolButton_clicked(); break;
        case 9: _t->on_deleteToolButton_clicked(); break;
        case 10: _t->on_copyToolButton_clicked(); break;
        case 11: _t->on_buttonBox_accepted(); break;
        case 12: _t->on_buttonBox_rejected(); break;
        case 13: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject UatDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_UatDialog.data,
      qt_meta_data_UatDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *UatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UatDialog.stringdata))
        return static_cast<void*>(const_cast< UatDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int UatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE