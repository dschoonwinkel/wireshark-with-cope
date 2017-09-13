/****************************************************************************
** Meta object code from reading C++ file 'preference_editor_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preference_editor_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preference_editor_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreferenceEditorFrame_t {
    QByteArrayData data[17];
    char stringdata[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PreferenceEditorFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PreferenceEditorFrame_t qt_meta_stringdata_PreferenceEditorFrame = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 23),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 11),
QT_MOC_LITERAL(4, 59, 14),
QT_MOC_LITERAL(5, 74, 11),
QT_MOC_LITERAL(6, 86, 4),
QT_MOC_LITERAL(7, 91, 12),
QT_MOC_LITERAL(8, 104, 6),
QT_MOC_LITERAL(9, 111, 22),
QT_MOC_LITERAL(10, 134, 7),
QT_MOC_LITERAL(11, 142, 24),
QT_MOC_LITERAL(12, 167, 23),
QT_MOC_LITERAL(13, 191, 38),
QT_MOC_LITERAL(14, 230, 35),
QT_MOC_LITERAL(15, 266, 21),
QT_MOC_LITERAL(16, 288, 21)
    },
    "PreferenceEditorFrame\0showProtocolPreferences\0"
    "\0module_name\0editPreference\0preference*\0"
    "pref\0pref_module*\0module\0"
    "uintLineEditTextEdited\0new_str\0"
    "stringLineEditTextEdited\0"
    "rangeLineEditTextEdited\0"
    "on_modulePreferencesToolButton_clicked\0"
    "on_preferenceLineEdit_returnPressed\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferenceEditorFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    2,   72,    2, 0x0a,
       4,    1,   77,    2, 0x2a,
       4,    0,   80,    2, 0x2a,
       9,    1,   81,    2, 0x08,
      11,    1,   84,    2, 0x08,
      12,    1,   87,    2, 0x08,
      13,    0,   90,    2, 0x08,
      14,    0,   91,    2, 0x08,
      15,    0,   92,    2, 0x08,
      16,    0,   93,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferenceEditorFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferenceEditorFrame *_t = static_cast<PreferenceEditorFrame *>(_o);
        switch (_id) {
        case 0: _t->showProtocolPreferences((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editPreference((*reinterpret_cast< preference*(*)>(_a[1])),(*reinterpret_cast< pref_module*(*)>(_a[2]))); break;
        case 2: _t->editPreference((*reinterpret_cast< preference*(*)>(_a[1]))); break;
        case 3: _t->editPreference(); break;
        case 4: _t->uintLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->stringLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->rangeLineEditTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_modulePreferencesToolButton_clicked(); break;
        case 8: _t->on_preferenceLineEdit_returnPressed(); break;
        case 9: _t->on_buttonBox_accepted(); break;
        case 10: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreferenceEditorFrame::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreferenceEditorFrame::showProtocolPreferences)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PreferenceEditorFrame::staticMetaObject = {
    { &AccordionFrame::staticMetaObject, qt_meta_stringdata_PreferenceEditorFrame.data,
      qt_meta_data_PreferenceEditorFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *PreferenceEditorFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferenceEditorFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreferenceEditorFrame.stringdata))
        return static_cast<void*>(const_cast< PreferenceEditorFrame*>(this));
    return AccordionFrame::qt_metacast(_clname);
}

int PreferenceEditorFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PreferenceEditorFrame::showProtocolPreferences(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
