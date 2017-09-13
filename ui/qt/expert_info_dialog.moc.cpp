/****************************************************************************
** Meta object code from reading C++ file 'expert_info_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "expert_info_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expert_info_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ExpertInfoDialog_t {
    QByteArrayData data[28];
    char stringdata[454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ExpertInfoDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ExpertInfoDialog_t qt_meta_stringdata_ExpertInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 10),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 10),
QT_MOC_LITERAL(4, 40, 5),
QT_MOC_LITERAL(5, 46, 12),
QT_MOC_LITERAL(6, 59, 6),
QT_MOC_LITERAL(7, 66, 20),
QT_MOC_LITERAL(8, 87, 6),
QT_MOC_LITERAL(9, 94, 24),
QT_MOC_LITERAL(10, 119, 4),
QT_MOC_LITERAL(11, 124, 12),
QT_MOC_LITERAL(12, 137, 12),
QT_MOC_LITERAL(13, 150, 13),
QT_MOC_LITERAL(14, 164, 13),
QT_MOC_LITERAL(15, 178, 17),
QT_MOC_LITERAL(16, 196, 17),
QT_MOC_LITERAL(17, 214, 3),
QT_MOC_LITERAL(18, 218, 21),
QT_MOC_LITERAL(19, 240, 18),
QT_MOC_LITERAL(20, 259, 42),
QT_MOC_LITERAL(21, 302, 16),
QT_MOC_LITERAL(22, 319, 7),
QT_MOC_LITERAL(23, 327, 24),
QT_MOC_LITERAL(24, 352, 33),
QT_MOC_LITERAL(25, 386, 29),
QT_MOC_LITERAL(26, 416, 9),
QT_MOC_LITERAL(27, 426, 26)
    },
    "ExpertInfoDialog\0goToPacket\0\0packet_num\0"
    "hf_id\0filterAction\0filter\0"
    "FilterAction::Action\0action\0"
    "FilterAction::ActionType\0type\0"
    "retapPackets\0retapStarted\0retapFinished\0"
    "updateWidgets\0actionShowToggled\0"
    "showProtoHierMenu\0pos\0filterActionTriggered\0"
    "captureFileClosing\0"
    "on_expertInfoTreeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0"
    "on_limitCheckBox_toggled\0"
    "on_groupBySummaryCheckBox_toggled\0"
    "on_searchLineEdit_textChanged\0search_re\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpertInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06,
       5,    3,   94,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,  101,    2, 0x08,
      12,    0,  102,    2, 0x08,
      13,    0,  103,    2, 0x08,
      14,    0,  104,    2, 0x08,
      15,    0,  105,    2, 0x08,
      16,    1,  106,    2, 0x08,
      18,    0,  109,    2, 0x08,
      19,    0,  110,    2, 0x08,
      20,    2,  111,    2, 0x08,
      23,    1,  116,    2, 0x08,
      24,    1,  119,    2, 0x08,
      25,    1,  122,    2, 0x08,
      27,    0,  125,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 21,   22,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,

       0        // eod
};

void ExpertInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExpertInfoDialog *_t = static_cast<ExpertInfoDialog *>(_o);
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->filterAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FilterAction::Action(*)>(_a[2])),(*reinterpret_cast< FilterAction::ActionType(*)>(_a[3]))); break;
        case 2: _t->retapPackets(); break;
        case 3: _t->retapStarted(); break;
        case 4: _t->retapFinished(); break;
        case 5: _t->updateWidgets(); break;
        case 6: _t->actionShowToggled(); break;
        case 7: _t->showProtoHierMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->filterActionTriggered(); break;
        case 9: _t->captureFileClosing(); break;
        case 10: _t->on_expertInfoTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 11: _t->on_limitCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_groupBySummaryCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_searchLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExpertInfoDialog::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExpertInfoDialog::goToPacket)) {
                *result = 0;
            }
        }
        {
            typedef void (ExpertInfoDialog::*_t)(QString , FilterAction::Action , FilterAction::ActionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExpertInfoDialog::filterAction)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ExpertInfoDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_ExpertInfoDialog.data,
      qt_meta_data_ExpertInfoDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ExpertInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpertInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExpertInfoDialog.stringdata))
        return static_cast<void*>(const_cast< ExpertInfoDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int ExpertInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ExpertInfoDialog::goToPacket(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExpertInfoDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
