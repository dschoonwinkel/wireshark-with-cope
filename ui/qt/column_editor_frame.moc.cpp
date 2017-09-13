/****************************************************************************
** Meta object code from reading C++ file 'column_editor_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "column_editor_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'column_editor_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColumnEditorFrame_t {
    QByteArrayData data[11];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ColumnEditorFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ColumnEditorFrame_t qt_meta_stringdata_ColumnEditorFrame = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 12),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 25),
QT_MOC_LITERAL(4, 58, 5),
QT_MOC_LITERAL(5, 64, 32),
QT_MOC_LITERAL(6, 97, 6),
QT_MOC_LITERAL(7, 104, 32),
QT_MOC_LITERAL(8, 137, 10),
QT_MOC_LITERAL(9, 148, 21),
QT_MOC_LITERAL(10, 170, 21)
    },
    "ColumnEditorFrame\0columnEdited\0\0"
    "on_typeComboBox_activated\0index\0"
    "on_fieldsNameLineEdit_textEdited\0"
    "fields\0on_occurrenceLineEdit_textEdited\0"
    "occurrence\0on_buttonBox_rejected\0"
    "on_buttonBox_accepted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnEditorFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08,
       5,    1,   48,    2, 0x08,
       7,    1,   51,    2, 0x08,
       9,    0,   54,    2, 0x08,
      10,    0,   55,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColumnEditorFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColumnEditorFrame *_t = static_cast<ColumnEditorFrame *>(_o);
        switch (_id) {
        case 0: _t->columnEdited(); break;
        case 1: _t->on_typeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_fieldsNameLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_occurrenceLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_rejected(); break;
        case 5: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColumnEditorFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColumnEditorFrame::columnEdited)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ColumnEditorFrame::staticMetaObject = {
    { &AccordionFrame::staticMetaObject, qt_meta_stringdata_ColumnEditorFrame.data,
      qt_meta_data_ColumnEditorFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *ColumnEditorFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnEditorFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnEditorFrame.stringdata))
        return static_cast<void*>(const_cast< ColumnEditorFrame*>(this));
    return AccordionFrame::qt_metacast(_clname);
}

int ColumnEditorFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ColumnEditorFrame::columnEdited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
