/****************************************************************************
** Meta object code from reading C++ file 'byte_view_tab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "byte_view_tab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'byte_view_tab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ByteViewTab_t {
    QByteArrayData data[12];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ByteViewTab_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ByteViewTab_t qt_meta_stringdata_ByteViewTab = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 20),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 9),
QT_MOC_LITERAL(4, 44, 16),
QT_MOC_LITERAL(5, 61, 20),
QT_MOC_LITERAL(6, 82, 16),
QT_MOC_LITERAL(7, 99, 7),
QT_MOC_LITERAL(8, 107, 14),
QT_MOC_LITERAL(9, 122, 13),
QT_MOC_LITERAL(10, 136, 2),
QT_MOC_LITERAL(11, 139, 16)
    },
    "ByteViewTab\0monospaceFontChanged\0\0"
    "mono_font\0byteFieldHovered\0"
    "protoTreeItemChanged\0QTreeWidgetItem*\0"
    "current\0setCaptureFile\0capture_file*\0"
    "cf\0setMonospaceFont\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ByteViewTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       4,    1,   42,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x0a,
       8,    1,   48,    2, 0x0a,
      11,    1,   51,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QFont,    3,

       0        // eod
};

void ByteViewTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ByteViewTab *_t = static_cast<ByteViewTab *>(_o);
        switch (_id) {
        case 0: _t->monospaceFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->byteFieldHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->protoTreeItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 4: _t->setMonospaceFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ByteViewTab::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ByteViewTab::monospaceFontChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ByteViewTab::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ByteViewTab::byteFieldHovered)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ByteViewTab::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_ByteViewTab.data,
      qt_meta_data_ByteViewTab,  qt_static_metacall, 0, 0}
};


const QMetaObject *ByteViewTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ByteViewTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ByteViewTab.stringdata))
        return static_cast<void*>(const_cast< ByteViewTab*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int ByteViewTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ByteViewTab::monospaceFontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ByteViewTab::byteFieldHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
