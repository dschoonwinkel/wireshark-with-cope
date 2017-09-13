/****************************************************************************
** Meta object code from reading C++ file 'tap_parameter_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tap_parameter_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tap_parameter_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TapParameterDialog_t {
    QByteArrayData data[16];
    char stringdata[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TapParameterDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TapParameterDialog_t qt_meta_stringdata_TapParameterDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 12),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 6),
QT_MOC_LITERAL(4, 40, 20),
QT_MOC_LITERAL(5, 61, 6),
QT_MOC_LITERAL(6, 68, 24),
QT_MOC_LITERAL(7, 93, 4),
QT_MOC_LITERAL(8, 98, 12),
QT_MOC_LITERAL(9, 111, 21),
QT_MOC_LITERAL(10, 133, 13),
QT_MOC_LITERAL(11, 147, 8),
QT_MOC_LITERAL(12, 156, 28),
QT_MOC_LITERAL(13, 185, 34),
QT_MOC_LITERAL(14, 220, 25),
QT_MOC_LITERAL(15, 246, 26)
    },
    "TapParameterDialog\0filterAction\0\0"
    "filter\0FilterAction::Action\0action\0"
    "FilterAction::ActionType\0type\0"
    "updateFilter\0filterActionTriggered\0"
    "updateWidgets\0fillTree\0"
    "on_applyFilterButton_clicked\0"
    "on_actionCopyToClipboard_triggered\0"
    "on_actionSaveAs_triggered\0"
    "on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TapParameterDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06,
       8,    1,   66,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x09,
      10,    0,   70,    2, 0x09,
      11,    0,   71,    2, 0x08,
      12,    0,   72,    2, 0x08,
      13,    0,   73,    2, 0x08,
      14,    0,   74,    2, 0x08,
      15,    0,   75,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TapParameterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TapParameterDialog *_t = static_cast<TapParameterDialog *>(_o);
        switch (_id) {
        case 0: _t->filterAction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< FilterAction::Action(*)>(_a[2])),(*reinterpret_cast< FilterAction::ActionType(*)>(_a[3]))); break;
        case 1: _t->updateFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->filterActionTriggered(); break;
        case 3: _t->updateWidgets(); break;
        case 4: _t->fillTree(); break;
        case 5: _t->on_applyFilterButton_clicked(); break;
        case 6: _t->on_actionCopyToClipboard_triggered(); break;
        case 7: _t->on_actionSaveAs_triggered(); break;
        case 8: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TapParameterDialog::*_t)(QString , FilterAction::Action , FilterAction::ActionType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TapParameterDialog::filterAction)) {
                *result = 0;
            }
        }
        {
            typedef void (TapParameterDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TapParameterDialog::updateFilter)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TapParameterDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_TapParameterDialog.data,
      qt_meta_data_TapParameterDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *TapParameterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TapParameterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TapParameterDialog.stringdata))
        return static_cast<void*>(const_cast< TapParameterDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int TapParameterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TapParameterDialog::filterAction(QString _t1, FilterAction::Action _t2, FilterAction::ActionType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TapParameterDialog::updateFilter(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
