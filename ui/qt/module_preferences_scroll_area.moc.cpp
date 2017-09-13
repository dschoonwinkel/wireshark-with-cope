/****************************************************************************
** Meta object code from reading C++ file 'module_preferences_scroll_area.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "module_preferences_scroll_area.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'module_preferences_scroll_area.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModulePreferencesScrollArea_t {
    QByteArrayData data[14];
    char stringdata[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ModulePreferencesScrollArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ModulePreferencesScrollArea_t qt_meta_stringdata_ModulePreferencesScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 22),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 7),
QT_MOC_LITERAL(4, 60, 19),
QT_MOC_LITERAL(5, 80, 7),
QT_MOC_LITERAL(6, 88, 22),
QT_MOC_LITERAL(7, 111, 31),
QT_MOC_LITERAL(8, 143, 5),
QT_MOC_LITERAL(9, 149, 24),
QT_MOC_LITERAL(10, 174, 29),
QT_MOC_LITERAL(11, 204, 20),
QT_MOC_LITERAL(12, 225, 25),
QT_MOC_LITERAL(13, 251, 24)
    },
    "ModulePreferencesScrollArea\0"
    "uintLineEditTextEdited\0\0new_str\0"
    "boolCheckBoxToggled\0checked\0"
    "enumRadioButtonToggled\0"
    "enumComboBoxCurrentIndexChanged\0index\0"
    "stringLineEditTextEdited\0"
    "rangeSyntaxLineEditTextEdited\0"
    "uatPushButtonPressed\0filenamePushButtonPressed\0"
    "dirnamePushButtonPressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModulePreferencesScrollArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08,
       4,    1,   62,    2, 0x08,
       6,    1,   65,    2, 0x08,
       7,    1,   68,    2, 0x08,
       9,    1,   71,    2, 0x08,
      10,    1,   74,    2, 0x08,
      11,    0,   77,    2, 0x08,
      12,    0,   78,    2, 0x08,
      13,    0,   79,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModulePreferencesScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModulePreferencesScrollArea *_t = static_cast<ModulePreferencesScrollArea *>(_o);
        switch (_id) {
        case 0: _t->uintLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->boolCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enumRadioButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enumComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->stringLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->rangeSyntaxLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->uatPushButtonPressed(); break;
        case 7: _t->filenamePushButtonPressed(); break;
        case 8: _t->dirnamePushButtonPressed(); break;
        default: ;
        }
    }
}

const QMetaObject ModulePreferencesScrollArea::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ModulePreferencesScrollArea.data,
      qt_meta_data_ModulePreferencesScrollArea,  qt_static_metacall, 0, 0}
};


const QMetaObject *ModulePreferencesScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModulePreferencesScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModulePreferencesScrollArea.stringdata))
        return static_cast<void*>(const_cast< ModulePreferencesScrollArea*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ModulePreferencesScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
