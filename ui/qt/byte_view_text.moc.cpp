/****************************************************************************
** Meta object code from reading C++ file 'byte_view_text.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "byte_view_text.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'byte_view_text.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ByteViewText_t {
    QByteArrayData data[9];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ByteViewText_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ByteViewText_t qt_meta_stringdata_ByteViewText = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 16),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 16),
QT_MOC_LITERAL(4, 48, 9),
QT_MOC_LITERAL(5, 58, 19),
QT_MOC_LITERAL(6, 78, 8),
QT_MOC_LITERAL(7, 87, 6),
QT_MOC_LITERAL(8, 94, 20)
    },
    "ByteViewText\0byteFieldHovered\0\0"
    "setMonospaceFont\0mono_font\0"
    "setHexDisplayFormat\0QAction*\0action\0"
    "setCharacterEncoding\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ByteViewText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a,
       5,    1,   40,    2, 0x08,
       8,    1,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ByteViewText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ByteViewText *_t = static_cast<ByteViewText *>(_o);
        switch (_id) {
        case 0: _t->byteFieldHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setMonospaceFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->setHexDisplayFormat((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->setCharacterEncoding((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ByteViewText::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ByteViewText::byteFieldHovered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ByteViewText::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_ByteViewText.data,
      qt_meta_data_ByteViewText,  qt_static_metacall, 0, 0}
};


const QMetaObject *ByteViewText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteViewText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ByteViewText.stringdata))
        return static_cast<void*>(const_cast< ByteViewText*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int ByteViewText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ByteViewText::byteFieldHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
