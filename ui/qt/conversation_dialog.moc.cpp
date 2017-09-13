/****************************************************************************
** Meta object code from reading C++ file 'conversation_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "conversation_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conversation_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConversationTreeWidget_t {
    QByteArrayData data[5];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ConversationTreeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ConversationTreeWidget_t qt_meta_stringdata_ConversationTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 15),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 8),
QT_MOC_LITERAL(4, 49, 21)
    },
    "ConversationTreeWidget\0updateStartTime\0"
    "\0absolute\0filterActionTriggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConversationTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a,
       4,    0,   27,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void ConversationTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConversationTreeWidget *_t = static_cast<ConversationTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->updateStartTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->filterActionTriggered(); break;
        default: ;
        }
    }
}

const QMetaObject ConversationTreeWidget::staticMetaObject = {
    { &TrafficTableTreeWidget::staticMetaObject, qt_meta_stringdata_ConversationTreeWidget.data,
      qt_meta_data_ConversationTreeWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *ConversationTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConversationTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConversationTreeWidget.stringdata))
        return static_cast<void*>(const_cast< ConversationTreeWidget*>(this));
    return TrafficTableTreeWidget::qt_metacast(_clname);
}

int ConversationTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrafficTableTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ConversationDialog_t {
    QByteArrayData data[20];
    char stringdata[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ConversationDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ConversationDialog_t qt_meta_stringdata_ConversationDialog = {
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
QT_MOC_LITERAL(12, 165, 18),
QT_MOC_LITERAL(13, 184, 17),
QT_MOC_LITERAL(14, 202, 28),
QT_MOC_LITERAL(15, 231, 32),
QT_MOC_LITERAL(16, 264, 7),
QT_MOC_LITERAL(17, 272, 12),
QT_MOC_LITERAL(18, 285, 8),
QT_MOC_LITERAL(19, 294, 26)
    },
    "ConversationDialog\0filterAction\0\0"
    "filter\0FilterAction::Action\0action\0"
    "FilterAction::ActionType\0type\0"
    "openFollowStreamDialog\0follow_type_t\0"
    "openTcpStreamGraph\0graph_type\0"
    "captureFileClosing\0currentTabChanged\0"
    "conversationSelectionChanged\0"
    "on_displayFilterCheckBox_toggled\0"
    "checked\0followStream\0graphTcp\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConversationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06,
       8,    1,   71,    2, 0x06,
      10,    1,   74,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    0,   77,    2, 0x0a,
      13,    0,   78,    2, 0x08,
      14,    0,   79,    2, 0x08,
      15,    1,   80,    2, 0x08,
      17,    0,   83,    2, 0x08,
      18,    0,   84,    2, 0x08,
      19,    0,   85,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConversationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConversationDialog *_t = static_cast<ConversationDialog *>(_o);
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FilterAction::Action(*)>(_a[2])),(*reinterpret_cast< FilterAction::ActionType(*)>(_a[3]))); break;
        case 1: _t->openFollowStreamDialog((*reinterpret_cast< follow_type_t(*)>(_a[1]))); break;
        case 2: _t->openTcpStreamGraph((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->captureFileClosing(); break;
        case 4: _t->currentTabChanged(); break;
        case 5: _t->conversationSelectionChanged(); break;
        case 6: _t->on_displayFilterCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->followStream(); break;
        case 8: _t->graphTcp(); break;
        case 9: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConversationDialog::*_t)(QString , FilterAction::Action , FilterAction::ActionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConversationDialog::filterAction)) {
                *result = 0;
            }
        }
        {
            typedef void (ConversationDialog::*_t)(follow_type_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConversationDialog::openFollowStreamDialog)) {
                *result = 1;
            }
        }
        {
            typedef void (ConversationDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConversationDialog::openTcpStreamGraph)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ConversationDialog::staticMetaObject = {
    { &TrafficTableDialog::staticMetaObject, qt_meta_stringdata_ConversationDialog.data,
      qt_meta_data_ConversationDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ConversationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConversationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConversationDialog.stringdata))
        return static_cast<void*>(const_cast< ConversationDialog*>(this));
    return TrafficTableDialog::qt_metacast(_clname);
}

int ConversationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrafficTableDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ConversationDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConversationDialog::openFollowStreamDialog(follow_type_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConversationDialog::openTcpStreamGraph(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
