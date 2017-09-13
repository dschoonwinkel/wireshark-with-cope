/****************************************************************************
** Meta object code from reading C++ file 'sctp_chunk_statistics_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sctp_chunk_statistics_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sctp_chunk_statistics_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SCTPChunkStatisticsDialog_t {
    QByteArrayData data[12];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SCTPChunkStatisticsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SCTPChunkStatisticsDialog_t qt_meta_stringdata_SCTPChunkStatisticsDialog = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 14),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 13),
QT_MOC_LITERAL(4, 56, 2),
QT_MOC_LITERAL(5, 59, 21),
QT_MOC_LITERAL(6, 81, 32),
QT_MOC_LITERAL(7, 114, 39),
QT_MOC_LITERAL(8, 154, 16),
QT_MOC_LITERAL(9, 171, 18),
QT_MOC_LITERAL(10, 190, 5),
QT_MOC_LITERAL(11, 196, 36)
    },
    "SCTPChunkStatisticsDialog\0setCaptureFile\0"
    "\0capture_file*\0cf\0on_pushButton_clicked\0"
    "on_actionHideChunkType_triggered\0"
    "on_actionChunkTypePreferences_triggered\0"
    "contextMenuEvent\0QContextMenuEvent*\0"
    "event\0on_actionShowAllChunkTypes_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCTPChunkStatisticsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    0,   49,    2, 0x08,
       8,    1,   50,    2, 0x08,
      11,    0,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void SCTPChunkStatisticsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SCTPChunkStatisticsDialog *_t = static_cast<SCTPChunkStatisticsDialog *>(_o);
        switch (_id) {
        case 0: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_actionHideChunkType_triggered(); break;
        case 3: _t->on_actionChunkTypePreferences_triggered(); break;
        case 4: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 5: _t->on_actionShowAllChunkTypes_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject SCTPChunkStatisticsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SCTPChunkStatisticsDialog.data,
      qt_meta_data_SCTPChunkStatisticsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SCTPChunkStatisticsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCTPChunkStatisticsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SCTPChunkStatisticsDialog.stringdata))
        return static_cast<void*>(const_cast< SCTPChunkStatisticsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SCTPChunkStatisticsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
