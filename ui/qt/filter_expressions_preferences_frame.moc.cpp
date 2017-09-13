/****************************************************************************
** Meta object code from reading C++ file 'filter_expressions_preferences_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filter_expressions_preferences_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_expressions_preferences_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FilterExpressionsPreferencesFrame_t {
    QByteArrayData data[17];
    char stringdata[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FilterExpressionsPreferencesFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FilterExpressionsPreferencesFrame_t qt_meta_stringdata_FilterExpressionsPreferencesFrame = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 13),
QT_MOC_LITERAL(2, 48, 0),
QT_MOC_LITERAL(3, 49, 42),
QT_MOC_LITERAL(4, 92, 16),
QT_MOC_LITERAL(5, 109, 7),
QT_MOC_LITERAL(6, 117, 8),
QT_MOC_LITERAL(7, 126, 37),
QT_MOC_LITERAL(8, 164, 4),
QT_MOC_LITERAL(9, 169, 6),
QT_MOC_LITERAL(10, 176, 17),
QT_MOC_LITERAL(11, 194, 20),
QT_MOC_LITERAL(12, 215, 25),
QT_MOC_LITERAL(13, 241, 44),
QT_MOC_LITERAL(14, 286, 24),
QT_MOC_LITERAL(15, 311, 27),
QT_MOC_LITERAL(16, 339, 25)
    },
    "FilterExpressionsPreferencesFrame\0"
    "updateWidgets\0\0"
    "on_expressionTreeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_expressionTreeWidget_itemActivated\0"
    "item\0column\0lineEditDestroyed\0"
    "labelEditingFinished\0expressionEditingFinished\0"
    "on_expressionTreeWidget_itemSelectionChanged\0"
    "on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterExpressionsPreferencesFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    2,   65,    2, 0x08,
       7,    2,   70,    2, 0x08,
      10,    0,   75,    2, 0x08,
      11,    0,   76,    2, 0x08,
      12,    0,   77,    2, 0x08,
      13,    0,   78,    2, 0x08,
      14,    0,   79,    2, 0x08,
      15,    0,   80,    2, 0x08,
      16,    0,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FilterExpressionsPreferencesFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterExpressionsPreferencesFrame *_t = static_cast<FilterExpressionsPreferencesFrame *>(_o);
        switch (_id) {
        case 0: _t->updateWidgets(); break;
        case 1: _t->on_expressionTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->on_expressionTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->lineEditDestroyed(); break;
        case 4: _t->labelEditingFinished(); break;
        case 5: _t->expressionEditingFinished(); break;
        case 6: _t->on_expressionTreeWidget_itemSelectionChanged(); break;
        case 7: _t->on_newToolButton_clicked(); break;
        case 8: _t->on_deleteToolButton_clicked(); break;
        case 9: _t->on_copyToolButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject FilterExpressionsPreferencesFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FilterExpressionsPreferencesFrame.data,
      qt_meta_data_FilterExpressionsPreferencesFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *FilterExpressionsPreferencesFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterExpressionsPreferencesFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterExpressionsPreferencesFrame.stringdata))
        return static_cast<void*>(const_cast< FilterExpressionsPreferencesFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int FilterExpressionsPreferencesFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
