/****************************************************************************
** Meta object code from reading C++ file 'capture_file_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "capture_file_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_file_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CaptureFileDialog_t {
    QByteArrayData data[18];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CaptureFileDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CaptureFileDialog_t qt_meta_stringdata_CaptureFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 4),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 4),
QT_MOC_LITERAL(4, 29, 8),
QT_MOC_LITERAL(5, 38, 9),
QT_MOC_LITERAL(6, 48, 5),
QT_MOC_LITERAL(7, 54, 4),
QT_MOC_LITERAL(8, 59, 6),
QT_MOC_LITERAL(9, 66, 18),
QT_MOC_LITERAL(10, 85, 21),
QT_MOC_LITERAL(11, 107, 21),
QT_MOC_LITERAL(12, 129, 15),
QT_MOC_LITERAL(13, 145, 5),
QT_MOC_LITERAL(14, 151, 5),
QT_MOC_LITERAL(15, 157, 7),
QT_MOC_LITERAL(16, 165, 4),
QT_MOC_LITERAL(17, 170, 26)
    },
    "CaptureFileDialog\0exec\0\0open\0QString&\0"
    "file_name\0uint&\0type\0saveAs\0"
    "check_savability_t\0must_support_comments\0"
    "exportSelectedPackets\0packet_range_t*\0"
    "range\0merge\0preview\0path\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a,
       3,    2,   50,    2, 0x0a,
       8,    2,   55,    2, 0x0a,
      11,    2,   60,    2, 0x0a,
      14,    1,   65,    2, 0x0a,
      15,    1,   68,    2, 0x08,
      17,    0,   71,    2, 0x08,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 9, 0x80000000 | 4, QMetaType::Bool,    5,   10,
    0x80000000 | 9, 0x80000000 | 4, 0x80000000 | 12,    5,   13,
    QMetaType::Int, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void CaptureFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CaptureFileDialog *_t = static_cast<CaptureFileDialog *>(_o);
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->open((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { check_savability_t _r = _t->saveAs((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< check_savability_t*>(_a[0]) = _r; }  break;
        case 3: { check_savability_t _r = _t->exportSelectedPackets((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< packet_range_t*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< check_savability_t*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->merge((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->preview((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
}

const QMetaObject CaptureFileDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_CaptureFileDialog.data,
      qt_meta_data_CaptureFileDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CaptureFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureFileDialog.stringdata))
        return static_cast<void*>(const_cast< CaptureFileDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int CaptureFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
