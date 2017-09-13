/****************************************************************************
** Meta object code from reading C++ file 'coloring_rules_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "coloring_rules_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coloring_rules_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColoringRulesTreeDelegate_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ColoringRulesTreeDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ColoringRulesTreeDelegate_t qt_meta_stringdata_ColoringRulesTreeDelegate = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 15),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 4)
    },
    "ColoringRulesTreeDelegate\0ruleNameChanged\0"
    "\0name\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColoringRulesTreeDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ColoringRulesTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColoringRulesTreeDelegate *_t = static_cast<ColoringRulesTreeDelegate *>(_o);
        switch (_id) {
        case 0: _t->ruleNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ColoringRulesTreeDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ColoringRulesTreeDelegate.data,
      qt_meta_data_ColoringRulesTreeDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *ColoringRulesTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColoringRulesTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColoringRulesTreeDelegate.stringdata))
        return static_cast<void*>(const_cast< ColoringRulesTreeDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ColoringRulesTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ColoringRulesDialog_t {
    QByteArrayData data[16];
    char stringdata[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ColoringRulesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ColoringRulesDialog_t qt_meta_stringdata_ColoringRulesDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 13),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 21),
QT_MOC_LITERAL(4, 57, 8),
QT_MOC_LITERAL(5, 66, 47),
QT_MOC_LITERAL(6, 114, 23),
QT_MOC_LITERAL(7, 138, 23),
QT_MOC_LITERAL(8, 162, 24),
QT_MOC_LITERAL(9, 187, 27),
QT_MOC_LITERAL(10, 215, 25),
QT_MOC_LITERAL(11, 241, 20),
QT_MOC_LITERAL(12, 262, 16),
QT_MOC_LITERAL(13, 279, 6),
QT_MOC_LITERAL(14, 286, 21),
QT_MOC_LITERAL(15, 308, 26)
    },
    "ColoringRulesDialog\0updateWidgets\0\0"
    "createColorFilterList\0_GSList*\0"
    "on_coloringRulesTreeWidget_itemSelectionChanged\0"
    "on_fGPushButton_clicked\0on_bGPushButton_clicked\0"
    "on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_buttonBox_accepted\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColoringRulesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       5,    0,   71,    2, 0x08,
       6,    0,   72,    2, 0x08,
       7,    0,   73,    2, 0x08,
       8,    0,   74,    2, 0x08,
       9,    0,   75,    2, 0x08,
      10,    0,   76,    2, 0x08,
      11,    1,   77,    2, 0x08,
      14,    0,   80,    2, 0x08,
      15,    0,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColoringRulesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColoringRulesDialog *_t = static_cast<ColoringRulesDialog *>(_o);
        switch (_id) {
        case 0: _t->updateWidgets(); break;
        case 1: { _GSList* _r = _t->createColorFilterList();
            if (_a[0]) *reinterpret_cast< _GSList**>(_a[0]) = _r; }  break;
        case 2: _t->on_coloringRulesTreeWidget_itemSelectionChanged(); break;
        case 3: _t->on_fGPushButton_clicked(); break;
        case 4: _t->on_bGPushButton_clicked(); break;
        case 5: _t->on_newToolButton_clicked(); break;
        case 6: _t->on_deleteToolButton_clicked(); break;
        case 7: _t->on_copyToolButton_clicked(); break;
        case 8: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 9: _t->on_buttonBox_accepted(); break;
        case 10: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject ColoringRulesDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_ColoringRulesDialog.data,
      qt_meta_data_ColoringRulesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ColoringRulesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColoringRulesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColoringRulesDialog.stringdata))
        return static_cast<void*>(const_cast< ColoringRulesDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int ColoringRulesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
