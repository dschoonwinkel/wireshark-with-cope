/****************************************************************************
** Meta object code from reading C++ file 'traffic_table_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "traffic_table_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traffic_table_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrafficTableTreeWidget_t {
    QByteArrayData data[18];
    char stringdata[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TrafficTableTreeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TrafficTableTreeWidget_t qt_meta_stringdata_TrafficTableTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 12),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 8),
QT_MOC_LITERAL(4, 46, 4),
QT_MOC_LITERAL(5, 51, 4),
QT_MOC_LITERAL(6, 56, 12),
QT_MOC_LITERAL(7, 69, 6),
QT_MOC_LITERAL(8, 76, 20),
QT_MOC_LITERAL(9, 97, 6),
QT_MOC_LITERAL(10, 104, 24),
QT_MOC_LITERAL(11, 129, 4),
QT_MOC_LITERAL(12, 134, 24),
QT_MOC_LITERAL(13, 159, 6),
QT_MOC_LITERAL(14, 166, 16),
QT_MOC_LITERAL(15, 183, 15),
QT_MOC_LITERAL(16, 199, 12),
QT_MOC_LITERAL(17, 212, 27)
    },
    "TrafficTableTreeWidget\0titleChanged\0"
    "\0QWidget*\0tree\0text\0filterAction\0"
    "filter\0FilterAction::Action\0action\0"
    "FilterAction::ActionType\0type\0"
    "setNameResolutionEnabled\0enable\0"
    "trafficTreeTitle\0trafficTreeHash\0"
    "conv_hash_t*\0updateItemsForSettingChange\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrafficTableTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06,
       6,    3,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    1,   56,    2, 0x0a,
      14,    0,   59,    2, 0x0a,
      15,    0,   60,    2, 0x0a,
      17,    0,   61,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 10,    7,    9,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    0x80000000 | 16,
    QMetaType::Void,

       0        // eod
};

void TrafficTableTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrafficTableTreeWidget *_t = static_cast<TrafficTableTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->filterAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FilterAction::Action(*)>(_a[2])),(*reinterpret_cast< FilterAction::ActionType(*)>(_a[3]))); break;
        case 2: _t->setNameResolutionEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->trafficTreeTitle(); break;
        case 4: { conv_hash_t* _r = _t->trafficTreeHash();
            if (_a[0]) *reinterpret_cast< conv_hash_t**>(_a[0]) = _r; }  break;
        case 5: _t->updateItemsForSettingChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrafficTableTreeWidget::*_t)(QWidget * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrafficTableTreeWidget::titleChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (TrafficTableTreeWidget::*_t)(QString , FilterAction::Action , FilterAction::ActionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrafficTableTreeWidget::filterAction)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TrafficTableTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_TrafficTableTreeWidget.data,
      qt_meta_data_TrafficTableTreeWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *TrafficTableTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficTableTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrafficTableTreeWidget.stringdata))
        return static_cast<void*>(const_cast< TrafficTableTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int TrafficTableTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void TrafficTableTreeWidget::titleChanged(QWidget * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrafficTableTreeWidget::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_TrafficTableDialog_t {
    QByteArrayData data[29];
    char stringdata[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TrafficTableDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TrafficTableDialog_t qt_meta_stringdata_TrafficTableDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 6),
QT_MOC_LITERAL(4, 40, 20),
QT_MOC_LITERAL(5, 61, 6),
QT_MOC_LITERAL(6, 68, 24),
QT_MOC_LITERAL(7, 93, 4),
QT_MOC_LITERAL(8, 98, 22),
QT_MOC_LITERAL(9, 121, 13),
QT_MOC_LITERAL(10, 135, 18),
QT_MOC_LITERAL(11, 154, 10),
QT_MOC_LITERAL(12, 165, 17),
QT_MOC_LITERAL(13, 183, 13),
QT_MOC_LITERAL(14, 197, 33),
QT_MOC_LITERAL(15, 231, 7),
QT_MOC_LITERAL(16, 239, 32),
QT_MOC_LITERAL(17, 272, 10),
QT_MOC_LITERAL(18, 283, 8),
QT_MOC_LITERAL(19, 292, 4),
QT_MOC_LITERAL(20, 297, 4),
QT_MOC_LITERAL(21, 302, 11),
QT_MOC_LITERAL(22, 314, 12),
QT_MOC_LITERAL(23, 327, 13),
QT_MOC_LITERAL(24, 341, 9),
QT_MOC_LITERAL(25, 351, 10),
QT_MOC_LITERAL(26, 362, 26),
QT_MOC_LITERAL(27, 389, 19),
QT_MOC_LITERAL(28, 409, 21)
    },
    "TrafficTableDialog\0filterAction\0\0"
    "filter\0FilterAction::Action\0action\0"
    "FilterAction::ActionType\0type\0"
    "openFollowStreamDialog\0follow_type_t\0"
    "openTcpStreamGraph\0graph_type\0"
    "currentTabChanged\0updateWidgets\0"
    "on_nameResolutionCheckBox_toggled\0"
    "checked\0on_displayFilterCheckBox_toggled\0"
    "setTabText\0QWidget*\0tree\0text\0toggleTable\0"
    "retapStarted\0retapFinished\0copyAsCsv\0"
    "copyAsYaml\0on_buttonBox_helpRequested\0"
    "absolute_start_time\0nanosecond_timestamps\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrafficTableDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       2,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   84,    2, 0x06,
       8,    1,   91,    2, 0x06,
      10,    1,   94,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    0,   97,    2, 0x09,
      13,    0,   98,    2, 0x09,
      14,    1,   99,    2, 0x08,
      16,    1,  102,    2, 0x08,
      17,    2,  105,    2, 0x08,
      21,    0,  110,    2, 0x08,
      22,    0,  111,    2, 0x08,
      23,    0,  112,    2, 0x08,
      24,    0,  113,    2, 0x08,
      25,    0,  114,    2, 0x08,
      26,    0,  115,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QString,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00095001,
      28, QMetaType::Bool, 0x00095001,

       0        // eod
};

void TrafficTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrafficTableDialog *_t = static_cast<TrafficTableDialog *>(_o);
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FilterAction::Action(*)>(_a[2])),(*reinterpret_cast< FilterAction::ActionType(*)>(_a[3]))); break;
        case 1: _t->openFollowStreamDialog((*reinterpret_cast< follow_type_t(*)>(_a[1]))); break;
        case 2: _t->openTcpStreamGraph((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentTabChanged(); break;
        case 4: _t->updateWidgets(); break;
        case 5: _t->on_nameResolutionCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_displayFilterCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setTabText((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->toggleTable(); break;
        case 9: _t->retapStarted(); break;
        case 10: _t->retapFinished(); break;
        case 11: _t->copyAsCsv(); break;
        case 12: _t->copyAsYaml(); break;
        case 13: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrafficTableDialog::*_t)(QString , FilterAction::Action , FilterAction::ActionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrafficTableDialog::filterAction)) {
                *result = 0;
            }
        }
        {
            typedef void (TrafficTableDialog::*_t)(follow_type_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrafficTableDialog::openFollowStreamDialog)) {
                *result = 1;
            }
        }
        {
            typedef void (TrafficTableDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrafficTableDialog::openTcpStreamGraph)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TrafficTableDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_TrafficTableDialog.data,
      qt_meta_data_TrafficTableDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *TrafficTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrafficTableDialog.stringdata))
        return static_cast<void*>(const_cast< TrafficTableDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int TrafficTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = absoluteStartTime(); break;
        case 1: *reinterpret_cast< bool*>(_v) = nanosecondTimestamps(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TrafficTableDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrafficTableDialog::openFollowStreamDialog(follow_type_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrafficTableDialog::openTcpStreamGraph(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
