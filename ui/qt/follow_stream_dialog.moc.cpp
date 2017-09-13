/****************************************************************************
** Meta object code from reading C++ file 'follow_stream_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "follow_stream_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'follow_stream_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FollowStreamDialog_t {
    QByteArrayData data[29];
    char stringdata[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FollowStreamDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FollowStreamDialog_t qt_meta_stringdata_FollowStreamDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 6),
QT_MOC_LITERAL(4, 40, 5),
QT_MOC_LITERAL(5, 46, 10),
QT_MOC_LITERAL(6, 57, 10),
QT_MOC_LITERAL(7, 68, 18),
QT_MOC_LITERAL(8, 87, 32),
QT_MOC_LITERAL(9, 120, 3),
QT_MOC_LITERAL(10, 124, 35),
QT_MOC_LITERAL(11, 160, 16),
QT_MOC_LITERAL(12, 177, 23),
QT_MOC_LITERAL(13, 201, 10),
QT_MOC_LITERAL(14, 212, 10),
QT_MOC_LITERAL(15, 223, 5),
QT_MOC_LITERAL(16, 229, 9),
QT_MOC_LITERAL(17, 239, 12),
QT_MOC_LITERAL(18, 252, 9),
QT_MOC_LITERAL(19, 262, 8),
QT_MOC_LITERAL(20, 271, 7),
QT_MOC_LITERAL(21, 279, 6),
QT_MOC_LITERAL(22, 286, 11),
QT_MOC_LITERAL(23, 298, 13),
QT_MOC_LITERAL(24, 312, 8),
QT_MOC_LITERAL(25, 321, 20),
QT_MOC_LITERAL(26, 342, 35),
QT_MOC_LITERAL(27, 378, 10),
QT_MOC_LITERAL(28, 389, 21)
    },
    "FollowStreamDialog\0updateFilter\0\0"
    "filter\0force\0goToPacket\0packet_num\0"
    "captureFileClosing\0on_cbCharset_currentIndexChanged\0"
    "idx\0on_cbDirections_currentIndexChanged\0"
    "on_bFind_clicked\0on_leFind_returnPressed\0"
    "helpButton\0backButton\0close\0filterOut\0"
    "useRegexFind\0use_regex\0findText\0go_back\0"
    "saveAs\0printStream\0fillHintLabel\0"
    "text_pos\0goToPacketForTextPos\0"
    "on_streamNumberSpinBox_valueChanged\0"
    "stream_num\0on_buttonBox_rejected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FollowStreamDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06,
       5,    1,  119,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,  122,    2, 0x0a,
       8,    1,  123,    2, 0x08,
      10,    1,  126,    2, 0x08,
      11,    0,  129,    2, 0x08,
      12,    0,  130,    2, 0x08,
      13,    0,  131,    2, 0x08,
      14,    0,  132,    2, 0x08,
      15,    0,  133,    2, 0x08,
      16,    0,  134,    2, 0x08,
      17,    1,  135,    2, 0x08,
      19,    1,  138,    2, 0x08,
      19,    0,  141,    2, 0x28,
      21,    0,  142,    2, 0x08,
      22,    0,  143,    2, 0x08,
      23,    1,  144,    2, 0x08,
      25,    1,  147,    2, 0x08,
      26,    1,  150,    2, 0x08,
      28,    0,  153,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,

       0        // eod
};

void FollowStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FollowStreamDialog *_t = static_cast<FollowStreamDialog *>(_o);
        switch (_id) {
        case 0: _t->updateFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->captureFileClosing(); break;
        case 3: _t->on_cbCharset_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_cbDirections_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_bFind_clicked(); break;
        case 6: _t->on_leFind_returnPressed(); break;
        case 7: _t->helpButton(); break;
        case 8: _t->backButton(); break;
        case 9: _t->close(); break;
        case 10: _t->filterOut(); break;
        case 11: _t->useRegexFind((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->findText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->findText(); break;
        case 14: _t->saveAs(); break;
        case 15: _t->printStream(); break;
        case 16: _t->fillHintLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->goToPacketForTextPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_streamNumberSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FollowStreamDialog::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FollowStreamDialog::updateFilter)) {
                *result = 0;
            }
        }
        {
            typedef void (FollowStreamDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FollowStreamDialog::goToPacket)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject FollowStreamDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_FollowStreamDialog.data,
      qt_meta_data_FollowStreamDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *FollowStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FollowStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FollowStreamDialog.stringdata))
        return static_cast<void*>(const_cast< FollowStreamDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int FollowStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void FollowStreamDialog::updateFilter(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FollowStreamDialog::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
