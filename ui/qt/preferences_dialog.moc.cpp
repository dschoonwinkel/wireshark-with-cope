/****************************************************************************
** Meta object code from reading C++ file 'preferences_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preferences_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[23];
    char stringdata[434];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 31),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 16),
QT_MOC_LITERAL(4, 68, 7),
QT_MOC_LITERAL(5, 76, 8),
QT_MOC_LITERAL(6, 85, 36),
QT_MOC_LITERAL(7, 122, 9),
QT_MOC_LITERAL(8, 132, 21),
QT_MOC_LITERAL(9, 154, 17),
QT_MOC_LITERAL(10, 172, 23),
QT_MOC_LITERAL(11, 196, 27),
QT_MOC_LITERAL(12, 224, 5),
QT_MOC_LITERAL(13, 230, 25),
QT_MOC_LITERAL(14, 256, 20),
QT_MOC_LITERAL(15, 277, 4),
QT_MOC_LITERAL(16, 282, 24),
QT_MOC_LITERAL(17, 307, 34),
QT_MOC_LITERAL(18, 342, 29),
QT_MOC_LITERAL(19, 372, 4),
QT_MOC_LITERAL(20, 377, 6),
QT_MOC_LITERAL(21, 384, 21),
QT_MOC_LITERAL(22, 406, 26)
    },
    "PreferencesDialog\0on_prefsTree_currentItemChanged\0"
    "\0QTreeWidgetItem*\0current\0previous\0"
    "on_advancedSearchLineEdit_textEdited\0"
    "search_re\0lineEditPrefDestroyed\0"
    "enumPrefDestroyed\0uintPrefEditingFinished\0"
    "enumPrefCurrentIndexChanged\0index\0"
    "stringPrefEditingFinished\0"
    "rangePrefTextChanged\0text\0"
    "rangePrefEditingFinished\0"
    "on_advancedTree_currentItemChanged\0"
    "on_advancedTree_itemActivated\0item\0"
    "column\0on_buttonBox_accepted\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x08,
       6,    1,   84,    2, 0x08,
       8,    0,   87,    2, 0x08,
       9,    0,   88,    2, 0x08,
      10,    0,   89,    2, 0x08,
      11,    1,   90,    2, 0x08,
      13,    0,   93,    2, 0x08,
      14,    1,   94,    2, 0x08,
      16,    0,   97,    2, 0x08,
      17,    2,   98,    2, 0x08,
      18,    2,  103,    2, 0x08,
      21,    0,  108,    2, 0x08,
      22,    0,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   19,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        switch (_id) {
        case 0: _t->on_prefsTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->on_advancedSearchLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->lineEditPrefDestroyed(); break;
        case 3: _t->enumPrefDestroyed(); break;
        case 4: _t->uintPrefEditingFinished(); break;
        case 5: _t->enumPrefCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->stringPrefEditingFinished(); break;
        case 7: _t->rangePrefTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->rangePrefEditingFinished(); break;
        case 9: _t->on_advancedTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 10: _t->on_advancedTree_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_buttonBox_accepted(); break;
        case 12: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject PreferencesDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog.data,
      qt_meta_data_PreferencesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
