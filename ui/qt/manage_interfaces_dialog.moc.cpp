/****************************************************************************
** Meta object code from reading C++ file 'manage_interfaces_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "manage_interfaces_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manage_interfaces_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PathChooserDelegate_t {
    QByteArrayData data[4];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PathChooserDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PathChooserDelegate_t qt_meta_stringdata_PathChooserDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 10),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 21)
    },
    "PathChooserDelegate\0stopEditor\0\0"
    "browse_button_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PathChooserDelegate[] = {

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
       1,    0,   24,    2, 0x08,
       3,    0,   25,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PathChooserDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PathChooserDelegate *_t = static_cast<PathChooserDelegate *>(_o);
        switch (_id) {
        case 0: _t->stopEditor(); break;
        case 1: _t->browse_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PathChooserDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_PathChooserDelegate.data,
      qt_meta_data_PathChooserDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *PathChooserDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PathChooserDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathChooserDelegate.stringdata))
        return static_cast<void*>(const_cast< PathChooserDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int PathChooserDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ManageInterfacesDialog_t {
    QByteArrayData data[17];
    char stringdata[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ManageInterfacesDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ManageInterfacesDialog_t qt_meta_stringdata_ManageInterfacesDialog = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 10),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 13),
QT_MOC_LITERAL(4, 49, 21),
QT_MOC_LITERAL(5, 71, 18),
QT_MOC_LITERAL(6, 90, 18),
QT_MOC_LITERAL(7, 109, 12),
QT_MOC_LITERAL(8, 122, 30),
QT_MOC_LITERAL(9, 153, 16),
QT_MOC_LITERAL(10, 170, 7),
QT_MOC_LITERAL(11, 178, 8),
QT_MOC_LITERAL(12, 187, 13),
QT_MOC_LITERAL(13, 201, 26),
QT_MOC_LITERAL(14, 228, 4),
QT_MOC_LITERAL(15, 233, 6),
QT_MOC_LITERAL(16, 240, 26)
    },
    "ManageInterfacesDialog\0ifsChanged\0\0"
    "updateWidgets\0on_buttonBox_accepted\0"
    "on_addPipe_clicked\0on_delPipe_clicked\0"
    "pipeAccepted\0on_pipeList_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "localAccepted\0localListItemDoubleClicked\0"
    "item\0column\0on_buttonBox_helpRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManageInterfacesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    2,   70,    2, 0x08,
      12,    0,   75,    2, 0x08,
      13,    2,   76,    2, 0x08,
      16,    0,   81,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   14,   15,
    QMetaType::Void,

       0        // eod
};

void ManageInterfacesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManageInterfacesDialog *_t = static_cast<ManageInterfacesDialog *>(_o);
        switch (_id) {
        case 0: _t->ifsChanged(); break;
        case 1: _t->updateWidgets(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_addPipe_clicked(); break;
        case 4: _t->on_delPipe_clicked(); break;
        case 5: _t->pipeAccepted(); break;
        case 6: _t->on_pipeList_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->localAccepted(); break;
        case 8: _t->localListItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_buttonBox_helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ManageInterfacesDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ManageInterfacesDialog::ifsChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ManageInterfacesDialog::staticMetaObject = {
    { &GeometryStateDialog::staticMetaObject, qt_meta_stringdata_ManageInterfacesDialog.data,
      qt_meta_data_ManageInterfacesDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ManageInterfacesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageInterfacesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManageInterfacesDialog.stringdata))
        return static_cast<void*>(const_cast< ManageInterfacesDialog*>(this));
    return GeometryStateDialog::qt_metacast(_clname);
}

int ManageInterfacesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryStateDialog::qt_metacall(_c, _id, _a);
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
void ManageInterfacesDialog::ifsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
