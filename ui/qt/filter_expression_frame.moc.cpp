/****************************************************************************
** Meta object code from reading C++ file 'filter_expression_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filter_expression_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filter_expression_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FilterExpressionFrame_t {
    QByteArrayData data[11];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FilterExpressionFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FilterExpressionFrame_t qt_meta_stringdata_FilterExpressionFrame = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 21),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 34),
QT_MOC_LITERAL(4, 80, 10),
QT_MOC_LITERAL(5, 91, 24),
QT_MOC_LITERAL(6, 116, 13),
QT_MOC_LITERAL(7, 130, 48),
QT_MOC_LITERAL(8, 179, 28),
QT_MOC_LITERAL(9, 208, 21),
QT_MOC_LITERAL(10, 230, 21)
    },
    "FilterExpressionFrame\0showPreferencesDialog\0"
    "\0PreferencesDialog::PreferencesPane\0"
    "start_pane\0filterExpressionsChanged\0"
    "updateWidgets\0"
    "on_filterExpressionPreferencesToolButton_clicked\0"
    "on_labelLineEdit_textChanged\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterExpressionFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       5,    0,   52,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    1,   55,    2, 0x08,
       9,    0,   58,    2, 0x08,
      10,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FilterExpressionFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterExpressionFrame *_t = static_cast<FilterExpressionFrame *>(_o);
        switch (_id) {
        case 0: _t->showPreferencesDialog((*reinterpret_cast< PreferencesDialog::PreferencesPane(*)>(_a[1]))); break;
        case 1: _t->filterExpressionsChanged(); break;
        case 2: _t->updateWidgets(); break;
        case 3: _t->on_filterExpressionPreferencesToolButton_clicked(); break;
        case 4: _t->on_labelLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_buttonBox_accepted(); break;
        case 6: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FilterExpressionFrame::*_t)(PreferencesDialog::PreferencesPane );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterExpressionFrame::showPreferencesDialog)) {
                *result = 0;
            }
        }
        {
            typedef void (FilterExpressionFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterExpressionFrame::filterExpressionsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject FilterExpressionFrame::staticMetaObject = {
    { &AccordionFrame::staticMetaObject, qt_meta_stringdata_FilterExpressionFrame.data,
      qt_meta_data_FilterExpressionFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *FilterExpressionFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterExpressionFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterExpressionFrame.stringdata))
        return static_cast<void*>(const_cast< FilterExpressionFrame*>(this));
    return AccordionFrame::qt_metacast(_clname);
}

int FilterExpressionFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccordionFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FilterExpressionFrame::showPreferencesDialog(PreferencesDialog::PreferencesPane _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterExpressionFrame::filterExpressionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
