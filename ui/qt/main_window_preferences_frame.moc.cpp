/****************************************************************************
** Meta object code from reading C++ file 'main_window_preferences_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main_window_preferences_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window_preferences_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindowPreferencesFrame_t {
    QByteArrayData data[19];
    char stringdata[505];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindowPreferencesFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindowPreferencesFrame_t qt_meta_stringdata_MainWindowPreferencesFrame = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 27),
QT_MOC_LITERAL(2, 55, 0),
QT_MOC_LITERAL(3, 56, 7),
QT_MOC_LITERAL(4, 64, 39),
QT_MOC_LITERAL(5, 104, 38),
QT_MOC_LITERAL(6, 143, 38),
QT_MOC_LITERAL(7, 182, 7),
QT_MOC_LITERAL(8, 190, 37),
QT_MOC_LITERAL(9, 228, 31),
QT_MOC_LITERAL(10, 260, 7),
QT_MOC_LITERAL(11, 268, 31),
QT_MOC_LITERAL(12, 300, 33),
QT_MOC_LITERAL(13, 334, 29),
QT_MOC_LITERAL(14, 364, 42),
QT_MOC_LITERAL(15, 407, 7),
QT_MOC_LITERAL(16, 415, 42),
QT_MOC_LITERAL(17, 458, 5),
QT_MOC_LITERAL(18, 464, 39)
    },
    "MainWindowPreferencesFrame\0"
    "on_geometryCheckBox_toggled\0\0checked\0"
    "on_foStyleLastOpenedRadioButton_toggled\0"
    "on_foStyleSpecifiedRadioButton_toggled\0"
    "on_foStyleSpecifiedLineEdit_textEdited\0"
    "new_dir\0on_foStyleSpecifiedPushButton_clicked\0"
    "on_maxFilterLineEdit_textEdited\0new_max\0"
    "on_maxRecentLineEdit_textEdited\0"
    "on_confirmUnsavedCheckBox_toggled\0"
    "on_autoScrollCheckBox_toggled\0"
    "on_autoScrollPercentageLineEdit_textEdited\0"
    "new_pct\0on_mainToolbarComboBox_currentIndexChanged\0"
    "index\0on_languageComboBox_currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowPreferencesFrame[] = {

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
       1,    1,   74,    2, 0x08,
       4,    1,   77,    2, 0x08,
       5,    1,   80,    2, 0x08,
       6,    1,   83,    2, 0x08,
       8,    0,   86,    2, 0x08,
       9,    1,   87,    2, 0x08,
      11,    1,   90,    2, 0x08,
      12,    1,   93,    2, 0x08,
      13,    1,   96,    2, 0x08,
      14,    1,   99,    2, 0x08,
      16,    1,  102,    2, 0x08,
      18,    1,  105,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void MainWindowPreferencesFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowPreferencesFrame *_t = static_cast<MainWindowPreferencesFrame *>(_o);
        switch (_id) {
        case 0: _t->on_geometryCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_foStyleLastOpenedRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_foStyleSpecifiedRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_foStyleSpecifiedLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_foStyleSpecifiedPushButton_clicked(); break;
        case 5: _t->on_maxFilterLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_maxRecentLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_confirmUnsavedCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_autoScrollCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_autoScrollPercentageLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_mainToolbarComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_languageComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindowPreferencesFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MainWindowPreferencesFrame.data,
      qt_meta_data_MainWindowPreferencesFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindowPreferencesFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowPreferencesFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowPreferencesFrame.stringdata))
        return static_cast<void*>(const_cast< MainWindowPreferencesFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int MainWindowPreferencesFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
