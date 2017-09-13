/****************************************************************************
** Meta object code from reading C++ file 'endpoint_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "endpoint_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'endpoint_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EndpointTreeWidget_t {
    QByteArrayData data[4];
    char stringdata[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EndpointTreeWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EndpointTreeWidget_t qt_meta_stringdata_EndpointTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 18),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 21)
    },
    "EndpointTreeWidget\0geoIPStatusChanged\0"
    "\0filterActionTriggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndpointTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EndpointTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EndpointTreeWidget *_t = static_cast<EndpointTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->geoIPStatusChanged(); break;
        case 1: _t->filterActionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EndpointTreeWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EndpointTreeWidget::geoIPStatusChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EndpointTreeWidget::staticMetaObject = {
    { &TrafficTableTreeWidget::staticMetaObject, qt_meta_stringdata_EndpointTreeWidget.data,
      qt_meta_data_EndpointTreeWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *EndpointTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndpointTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EndpointTreeWidget.stringdata))
        return static_cast<void*>(const_cast< EndpointTreeWidget*>(this));
    return TrafficTableTreeWidget::qt_metacast(_clname);
}

int EndpointTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void EndpointTreeWidget::geoIPStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_EndpointDialog_t {
    QByteArrayData data[6];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_EndpointDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_EndpointDialog_t qt_meta_stringdata_EndpointDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 18),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 10),
QT_MOC_LITERAL(4, 46, 9),
QT_MOC_LITERAL(5, 56, 26)
    },
    "EndpointDialog\0captureFileClosing\0\0"
    "tabChanged\0createMap\0on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EndpointDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EndpointDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EndpointDialog *_t = static_cast<EndpointDialog *>(_o);
        switch (_id) {
        case 0: _t->captureFileClosing(); break;
        case 1: _t->tabChanged(); break;
        case 2: _t->createMap(); break;
        case 3: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EndpointDialog::staticMetaObject = {
    { &TrafficTableDialog::staticMetaObject, qt_meta_stringdata_EndpointDialog.data,
      qt_meta_data_EndpointDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *EndpointDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EndpointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EndpointDialog.stringdata))
        return static_cast<void*>(const_cast< EndpointDialog*>(this));
    return TrafficTableDialog::qt_metacast(_clname);
}

int EndpointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrafficTableDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
