/****************************************************************************
** Meta object code from reading C++ file 'font_color_preferences_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "font_color_preferences_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'font_color_preferences_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FontColorPreferencesFrame_t {
    QByteArrayData data[14];
    char stringdata[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FontColorPreferencesFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FontColorPreferencesFrame_t qt_meta_stringdata_FontColorPreferencesFrame = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 25),
QT_MOC_LITERAL(2, 52, 0),
QT_MOC_LITERAL(3, 53, 29),
QT_MOC_LITERAL(4, 83, 29),
QT_MOC_LITERAL(5, 113, 30),
QT_MOC_LITERAL(6, 144, 30),
QT_MOC_LITERAL(7, 175, 29),
QT_MOC_LITERAL(8, 205, 29),
QT_MOC_LITERAL(9, 235, 29),
QT_MOC_LITERAL(10, 265, 29),
QT_MOC_LITERAL(11, 295, 34),
QT_MOC_LITERAL(12, 330, 36),
QT_MOC_LITERAL(13, 367, 39)
    },
    "FontColorPreferencesFrame\0"
    "on_fontPushButton_clicked\0\0"
    "on_markedFGPushButton_clicked\0"
    "on_markedBGPushButton_clicked\0"
    "on_ignoredFGPushButton_clicked\0"
    "on_ignoredBGPushButton_clicked\0"
    "on_clientFGPushButton_clicked\0"
    "on_clientBGPushButton_clicked\0"
    "on_serverFGPushButton_clicked\0"
    "on_serverBGPushButton_clicked\0"
    "on_validFilterBGPushButton_clicked\0"
    "on_invalidFilterBGPushButton_clicked\0"
    "on_deprecatedFilterBGPushButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FontColorPreferencesFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08,
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    0,   78,    2, 0x08,
       7,    0,   79,    2, 0x08,
       8,    0,   80,    2, 0x08,
       9,    0,   81,    2, 0x08,
      10,    0,   82,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    0,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FontColorPreferencesFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FontColorPreferencesFrame *_t = static_cast<FontColorPreferencesFrame *>(_o);
        switch (_id) {
        case 0: _t->on_fontPushButton_clicked(); break;
        case 1: _t->on_markedFGPushButton_clicked(); break;
        case 2: _t->on_markedBGPushButton_clicked(); break;
        case 3: _t->on_ignoredFGPushButton_clicked(); break;
        case 4: _t->on_ignoredBGPushButton_clicked(); break;
        case 5: _t->on_clientFGPushButton_clicked(); break;
        case 6: _t->on_clientBGPushButton_clicked(); break;
        case 7: _t->on_serverFGPushButton_clicked(); break;
        case 8: _t->on_serverBGPushButton_clicked(); break;
        case 9: _t->on_validFilterBGPushButton_clicked(); break;
        case 10: _t->on_invalidFilterBGPushButton_clicked(); break;
        case 11: _t->on_deprecatedFilterBGPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FontColorPreferencesFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FontColorPreferencesFrame.data,
      qt_meta_data_FontColorPreferencesFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *FontColorPreferencesFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FontColorPreferencesFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontColorPreferencesFrame.stringdata))
        return static_cast<void*>(const_cast< FontColorPreferencesFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int FontColorPreferencesFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
