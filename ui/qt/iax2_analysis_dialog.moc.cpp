/****************************************************************************
** Meta object code from reading C++ file 'iax2_analysis_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iax2_analysis_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iax2_analysis_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Iax2AnalysisDialog_t {
    QByteArrayData data[25];
    char stringdata[533];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Iax2AnalysisDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Iax2AnalysisDialog_t qt_meta_stringdata_Iax2AnalysisDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 10),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 13),
QT_MOC_LITERAL(5, 56, 29),
QT_MOC_LITERAL(6, 86, 30),
QT_MOC_LITERAL(7, 117, 26),
QT_MOC_LITERAL(8, 144, 7),
QT_MOC_LITERAL(9, 152, 24),
QT_MOC_LITERAL(10, 177, 26),
QT_MOC_LITERAL(11, 204, 24),
QT_MOC_LITERAL(12, 229, 28),
QT_MOC_LITERAL(13, 258, 35),
QT_MOC_LITERAL(14, 294, 35),
QT_MOC_LITERAL(15, 330, 26),
QT_MOC_LITERAL(16, 357, 33),
QT_MOC_LITERAL(17, 391, 33),
QT_MOC_LITERAL(18, 425, 28),
QT_MOC_LITERAL(19, 454, 26),
QT_MOC_LITERAL(20, 481, 14),
QT_MOC_LITERAL(21, 496, 3),
QT_MOC_LITERAL(22, 500, 12),
QT_MOC_LITERAL(23, 513, 12),
QT_MOC_LITERAL(24, 526, 5)
    },
    "Iax2AnalysisDialog\0goToPacket\0\0"
    "packet_num\0updateWidgets\0"
    "on_actionGoToPacket_triggered\0"
    "on_actionNextProblem_triggered\0"
    "on_fJitterCheckBox_toggled\0checked\0"
    "on_fDiffCheckBox_toggled\0"
    "on_rJitterCheckBox_toggled\0"
    "on_rDiffCheckBox_toggled\0"
    "on_actionSaveAudio_triggered\0"
    "on_actionSaveForwardAudio_triggered\0"
    "on_actionSaveReverseAudio_triggered\0"
    "on_actionSaveCsv_triggered\0"
    "on_actionSaveForwardCsv_triggered\0"
    "on_actionSaveReverseCsv_triggered\0"
    "on_actionSaveGraph_triggered\0"
    "on_buttonBox_helpRequested\0showStreamMenu\0"
    "pos\0graphClicked\0QMouseEvent*\0event\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Iax2AnalysisDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,  107,    2, 0x09,
       5,    0,  108,    2, 0x08,
       6,    0,  109,    2, 0x08,
       7,    1,  110,    2, 0x08,
       9,    1,  113,    2, 0x08,
      10,    1,  116,    2, 0x08,
      11,    1,  119,    2, 0x08,
      12,    0,  122,    2, 0x08,
      13,    0,  123,    2, 0x08,
      14,    0,  124,    2, 0x08,
      15,    0,  125,    2, 0x08,
      16,    0,  126,    2, 0x08,
      17,    0,  127,    2, 0x08,
      18,    0,  128,    2, 0x08,
      19,    0,  129,    2, 0x08,
      20,    1,  130,    2, 0x08,
      22,    1,  133,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void, 0x80000000 | 23,   24,

       0        // eod
};

void Iax2AnalysisDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Iax2AnalysisDialog *_t = static_cast<Iax2AnalysisDialog *>(_o);
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateWidgets(); break;
        case 2: _t->on_actionGoToPacket_triggered(); break;
        case 3: _t->on_actionNextProblem_triggered(); break;
        case 4: _t->on_fJitterCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_fDiffCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_rJitterCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_rDiffCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_actionSaveAudio_triggered(); break;
        case 9: _t->on_actionSaveForwardAudio_triggered(); break;
        case 10: _t->on_actionSaveReverseAudio_triggered(); break;
        case 11: _t->on_actionSaveCsv_triggered(); break;
        case 12: _t->on_actionSaveForwardCsv_triggered(); break;
        case 13: _t->on_actionSaveReverseCsv_triggered(); break;
        case 14: _t->on_actionSaveGraph_triggered(); break;
        case 15: _t->on_buttonBox_helpRequested(); break;
        case 16: _t->showStreamMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 17: _t->graphClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Iax2AnalysisDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Iax2AnalysisDialog::goToPacket)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Iax2AnalysisDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_Iax2AnalysisDialog.data,
      qt_meta_data_Iax2AnalysisDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *Iax2AnalysisDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Iax2AnalysisDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Iax2AnalysisDialog.stringdata))
        return static_cast<void*>(const_cast< Iax2AnalysisDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int Iax2AnalysisDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Iax2AnalysisDialog::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
