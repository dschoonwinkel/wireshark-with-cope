/****************************************************************************
** Meta object code from reading C++ file 'display_filter_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "display_filter_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_filter_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DisplayFilterEdit_t {
    QByteArrayData data[26];
    char stringdata[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DisplayFilterEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DisplayFilterEdit_t qt_meta_stringdata_DisplayFilterEdit = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 22),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 21),
QT_MOC_LITERAL(4, 64, 23),
QT_MOC_LITERAL(5, 88, 13),
QT_MOC_LITERAL(6, 102, 10),
QT_MOC_LITERAL(7, 113, 5),
QT_MOC_LITERAL(8, 119, 21),
QT_MOC_LITERAL(9, 141, 34),
QT_MOC_LITERAL(10, 176, 10),
QT_MOC_LITERAL(11, 187, 11),
QT_MOC_LITERAL(12, 199, 18),
QT_MOC_LITERAL(13, 218, 18),
QT_MOC_LITERAL(14, 237, 20),
QT_MOC_LITERAL(15, 258, 7),
QT_MOC_LITERAL(16, 266, 11),
QT_MOC_LITERAL(17, 278, 11),
QT_MOC_LITERAL(18, 290, 11),
QT_MOC_LITERAL(19, 302, 7),
QT_MOC_LITERAL(20, 310, 5),
QT_MOC_LITERAL(21, 316, 10),
QT_MOC_LITERAL(22, 327, 12),
QT_MOC_LITERAL(23, 340, 11),
QT_MOC_LITERAL(24, 352, 19),
QT_MOC_LITERAL(25, 372, 13)
    },
    "DisplayFilterEdit\0pushFilterSyntaxStatus\0"
    "\0popFilterSyntaxStatus\0pushFilterSyntaxWarning\0"
    "filterPackets\0new_filter\0force\0"
    "showPreferencesDialog\0"
    "PreferencesDialog::PreferencesPane\0"
    "start_pane\0checkFilter\0updateBookmarkMenu\0"
    "applyDisplayFilter\0displayFilterSuccess\0"
    "success\0filter_text\0clearFilter\0"
    "changeEvent\0QEvent*\0event\0saveFilter\0"
    "removeFilter\0showFilters\0showExpressionPrefs\0"
    "prepareFilter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayFilterEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06,
       3,    0,  102,    2, 0x06,
       4,    1,  103,    2, 0x06,
       5,    2,  106,    2, 0x06,
       8,    1,  111,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,  114,    2, 0x0a,
      12,    0,  115,    2, 0x0a,
      13,    0,  116,    2, 0x0a,
      14,    1,  117,    2, 0x0a,
      11,    1,  120,    2, 0x08,
      17,    0,  123,    2, 0x08,
      18,    1,  124,    2, 0x08,
      21,    0,  127,    2, 0x08,
      22,    0,  128,    2, 0x08,
      23,    0,  129,    2, 0x08,
      24,    0,  130,    2, 0x08,
      25,    0,  131,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DisplayFilterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayFilterEdit *_t = static_cast<DisplayFilterEdit *>(_o);
        switch (_id) {
        case 0: _t->pushFilterSyntaxStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->popFilterSyntaxStatus(); break;
        case 2: _t->pushFilterSyntaxWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->filterPackets((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->showPreferencesDialog((*reinterpret_cast< PreferencesDialog::PreferencesPane(*)>(_a[1]))); break;
        case 5: { bool _r = _t->checkFilter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->updateBookmarkMenu(); break;
        case 7: _t->applyDisplayFilter(); break;
        case 8: _t->displayFilterSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->checkFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->clearFilter(); break;
        case 11: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 12: _t->saveFilter(); break;
        case 13: _t->removeFilter(); break;
        case 14: _t->showFilters(); break;
        case 15: _t->showExpressionPrefs(); break;
        case 16: _t->prepareFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DisplayFilterEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayFilterEdit::pushFilterSyntaxStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (DisplayFilterEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayFilterEdit::popFilterSyntaxStatus)) {
                *result = 1;
            }
        }
        {
            typedef void (DisplayFilterEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayFilterEdit::pushFilterSyntaxWarning)) {
                *result = 2;
            }
        }
        {
            typedef void (DisplayFilterEdit::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayFilterEdit::filterPackets)) {
                *result = 3;
            }
        }
        {
            typedef void (DisplayFilterEdit::*_t)(PreferencesDialog::PreferencesPane );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayFilterEdit::showPreferencesDialog)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject DisplayFilterEdit::staticMetaObject = {
    { &SyntaxLineEdit::staticMetaObject, qt_meta_stringdata_DisplayFilterEdit.data,
      qt_meta_data_DisplayFilterEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *DisplayFilterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayFilterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayFilterEdit.stringdata))
        return static_cast<void*>(const_cast< DisplayFilterEdit*>(this));
    return SyntaxLineEdit::qt_metacast(_clname);
}

int DisplayFilterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SyntaxLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void DisplayFilterEdit::pushFilterSyntaxStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DisplayFilterEdit::popFilterSyntaxStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DisplayFilterEdit::pushFilterSyntaxWarning(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DisplayFilterEdit::filterPackets(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DisplayFilterEdit::showPreferencesDialog(PreferencesDialog::PreferencesPane _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
