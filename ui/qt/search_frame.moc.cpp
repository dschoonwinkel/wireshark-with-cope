/****************************************************************************
** Meta object code from reading C++ file 'search_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "search_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchFrame_t {
    QByteArrayData data[17];
    char stringdata[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SearchFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SearchFrame_t qt_meta_stringdata_SearchFrame = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 22),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 14),
QT_MOC_LITERAL(4, 51, 13),
QT_MOC_LITERAL(5, 65, 2),
QT_MOC_LITERAL(6, 68, 19),
QT_MOC_LITERAL(7, 88, 8),
QT_MOC_LITERAL(8, 97, 6),
QT_MOC_LITERAL(9, 104, 23),
QT_MOC_LITERAL(10, 128, 41),
QT_MOC_LITERAL(11, 170, 29),
QT_MOC_LITERAL(12, 200, 21),
QT_MOC_LITERAL(13, 222, 23),
QT_MOC_LITERAL(14, 246, 11),
QT_MOC_LITERAL(15, 258, 7),
QT_MOC_LITERAL(16, 266, 5)
    },
    "SearchFrame\0pushFilterSyntaxStatus\0\0"
    "setCaptureFile\0capture_file*\0cf\0"
    "findFrameWithFilter\0QString&\0filter\0"
    "on_caseCheckBox_toggled\0"
    "on_searchTypeComboBox_currentIndexChanged\0"
    "on_searchLineEdit_textChanged\0"
    "on_findButton_clicked\0on_cancelButton_clicked\0"
    "changeEvent\0QEvent*\0event\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x0a,
       6,    1,   65,    2, 0x0a,
       9,    1,   68,    2, 0x08,
      10,    1,   71,    2, 0x08,
      11,    1,   74,    2, 0x08,
      12,    0,   77,    2, 0x08,
      13,    0,   78,    2, 0x08,
      14,    1,   79,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void SearchFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchFrame *_t = static_cast<SearchFrame *>(_o);
        switch (_id) {
        case 0: _t->pushFilterSyntaxStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCaptureFile((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 2: _t->findFrameWithFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_caseCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_searchTypeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_searchLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_findButton_clicked(); break;
        case 7: _t->on_cancelButton_clicked(); break;
        case 8: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchFrame::pushFilterSyntaxStatus)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SearchFrame::staticMetaObject = {
    { &AccordionFrame::staticMetaObject, qt_meta_stringdata_SearchFrame.data,
      qt_meta_data_SearchFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *SearchFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchFrame.stringdata))
        return static_cast<void*>(const_cast< SearchFrame*>(this));
    return AccordionFrame::qt_metacast(_clname);
}

int SearchFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
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
void SearchFrame::pushFilterSyntaxStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
