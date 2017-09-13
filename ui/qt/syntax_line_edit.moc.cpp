/****************************************************************************
** Meta object code from reading C++ file 'syntax_line_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "syntax_line_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syntax_line_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SyntaxLineEdit_t {
    QByteArrayData data[22];
    char stringdata[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SyntaxLineEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SyntaxLineEdit_t qt_meta_stringdata_SyntaxLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 13),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 11),
QT_MOC_LITERAL(4, 42, 12),
QT_MOC_LITERAL(5, 55, 6),
QT_MOC_LITERAL(6, 62, 18),
QT_MOC_LITERAL(7, 81, 14),
QT_MOC_LITERAL(8, 96, 5),
QT_MOC_LITERAL(9, 102, 17),
QT_MOC_LITERAL(10, 120, 6),
QT_MOC_LITERAL(11, 127, 12),
QT_MOC_LITERAL(12, 140, 6),
QT_MOC_LITERAL(13, 147, 21),
QT_MOC_LITERAL(14, 169, 15),
QT_MOC_LITERAL(15, 185, 11),
QT_MOC_LITERAL(16, 197, 11),
QT_MOC_LITERAL(17, 209, 5),
QT_MOC_LITERAL(18, 215, 4),
QT_MOC_LITERAL(19, 220, 7),
QT_MOC_LITERAL(20, 228, 10),
QT_MOC_LITERAL(21, 239, 5)
    },
    "SyntaxLineEdit\0setStyleSheet\0\0style_sheet\0"
    "insertFilter\0filter\0checkDisplayFilter\0"
    "checkFieldName\0field\0checkCustomColumn\0"
    "fields\0checkInteger\0number\0"
    "insertFieldCompletion\0completion_text\0"
    "syntaxState\0SyntaxState\0Empty\0Busy\0"
    "Invalid\0Deprecated\0Valid\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyntaxLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   70, // properties
       1,   73, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a,
       4,    1,   52,    2, 0x0a,
       6,    1,   55,    2, 0x0a,
       7,    1,   58,    2, 0x0a,
       9,    1,   61,    2, 0x0a,
      11,    1,   64,    2, 0x0a,
      13,    1,   67,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00095009,

 // enums: name, flags, count, data
      16, 0x0,    5,   77,

 // enum data: key, value
      17, uint(SyntaxLineEdit::Empty),
      18, uint(SyntaxLineEdit::Busy),
      19, uint(SyntaxLineEdit::Invalid),
      20, uint(SyntaxLineEdit::Deprecated),
      21, uint(SyntaxLineEdit::Valid),

       0        // eod
};

void SyntaxLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyntaxLineEdit *_t = static_cast<SyntaxLineEdit *>(_o);
        switch (_id) {
        case 0: _t->setStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->insertFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->checkDisplayFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->checkFieldName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->checkCustomColumn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->checkInteger((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->insertFieldCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SyntaxLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_SyntaxLineEdit.data,
      qt_meta_data_SyntaxLineEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *SyntaxLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyntaxLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SyntaxLineEdit.stringdata))
        return static_cast<void*>(const_cast< SyntaxLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int SyntaxLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SyntaxState*>(_v) = syntaxState(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
