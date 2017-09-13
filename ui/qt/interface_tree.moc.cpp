/****************************************************************************
** Meta object code from reading C++ file 'interface_tree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interface_tree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InterfaceTree_t {
    QByteArrayData data[12];
    char stringdata[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InterfaceTree_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InterfaceTree_t qt_meta_stringdata_InterfaceTree = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 9),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 3),
QT_MOC_LITERAL(4, 29, 10),
QT_MOC_LITERAL(5, 40, 3),
QT_MOC_LITERAL(6, 44, 20),
QT_MOC_LITERAL(7, 65, 24),
QT_MOC_LITERAL(8, 90, 24),
QT_MOC_LITERAL(9, 115, 14),
QT_MOC_LITERAL(10, 130, 16),
QT_MOC_LITERAL(11, 147, 16)
    },
    "InterfaceTree\0getPoints\0\0row\0PointList*\0"
    "pts\0interfaceListChanged\0"
    "selectedInterfaceChanged\0"
    "updateSelectedInterfaces\0updateToolTips\0"
    "getInterfaceList\0updateStatistics\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceTree[] = {

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
       1,    2,   49,    2, 0x0a,
       6,    0,   54,    2, 0x0a,
       7,    0,   55,    2, 0x0a,
       8,    0,   56,    2, 0x0a,
       9,    0,   57,    2, 0x0a,
      10,    0,   58,    2, 0x08,
      11,    0,   59,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InterfaceTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfaceTree *_t = static_cast<InterfaceTree *>(_o);
        switch (_id) {
        case 0: _t->getPoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< PointList*(*)>(_a[2]))); break;
        case 1: _t->interfaceListChanged(); break;
        case 2: _t->selectedInterfaceChanged(); break;
        case 3: _t->updateSelectedInterfaces(); break;
        case 4: _t->updateToolTips(); break;
        case 5: _t->getInterfaceList(); break;
        case 6: _t->updateStatistics(); break;
        default: ;
        }
    }
}

const QMetaObject InterfaceTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_InterfaceTree.data,
      qt_meta_data_InterfaceTree,  qt_static_metacall, 0, 0}
};


const QMetaObject *InterfaceTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceTree.stringdata))
        return static_cast<void*>(const_cast< InterfaceTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int InterfaceTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
