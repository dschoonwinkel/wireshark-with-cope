/****************************************************************************
** Meta object code from reading C++ file 'io_graph_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "io_graph_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'io_graph_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IOGraph_t {
    QByteArrayData data[10];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_IOGraph_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_IOGraph_t qt_meta_stringdata_IOGraph = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 13),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 13),
QT_MOC_LITERAL(4, 37, 12),
QT_MOC_LITERAL(5, 50, 15),
QT_MOC_LITERAL(6, 66, 13),
QT_MOC_LITERAL(7, 80, 8),
QT_MOC_LITERAL(8, 89, 18),
QT_MOC_LITERAL(9, 108, 20)
    },
    "IOGraph\0requestReplot\0\0requestRecalc\0"
    "requestRetap\0recalcGraphData\0capture_file*\0"
    "cap_file\0captureFileClosing\0"
    "reloadValueUnitField\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IOGraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    0,   45,    2, 0x06,
       4,    0,   46,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a,
       8,    0,   50,    2, 0x0a,
       9,    0,   51,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IOGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IOGraph *_t = static_cast<IOGraph *>(_o);
        switch (_id) {
        case 0: _t->requestReplot(); break;
        case 1: _t->requestRecalc(); break;
        case 2: _t->requestRetap(); break;
        case 3: _t->recalcGraphData((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 4: _t->captureFileClosing(); break;
        case 5: _t->reloadValueUnitField(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IOGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraph::requestReplot)) {
                *result = 0;
            }
        }
        {
            typedef void (IOGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraph::requestRecalc)) {
                *result = 1;
            }
        }
        {
            typedef void (IOGraph::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraph::requestRetap)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject IOGraph::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IOGraph.data,
      qt_meta_data_IOGraph,  qt_static_metacall, 0, 0}
};


const QMetaObject *IOGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IOGraph.stringdata))
        return static_cast<void*>(const_cast< IOGraph*>(this));
    return QObject::qt_metacast(_clname);
}

int IOGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IOGraph::requestReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void IOGraph::requestRecalc()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void IOGraph::requestRetap()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
struct qt_meta_stringdata_IOGraphDialog_t {
    QByteArrayData data[67];
    char stringdata[1369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_IOGraphDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_IOGraphDialog_t qt_meta_stringdata_IOGraphDialog = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 10),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 10),
QT_MOC_LITERAL(4, 37, 15),
QT_MOC_LITERAL(5, 53, 13),
QT_MOC_LITERAL(6, 67, 15),
QT_MOC_LITERAL(7, 83, 8),
QT_MOC_LITERAL(8, 92, 21),
QT_MOC_LITERAL(9, 114, 14),
QT_MOC_LITERAL(10, 129, 3),
QT_MOC_LITERAL(11, 133, 14),
QT_MOC_LITERAL(12, 148, 13),
QT_MOC_LITERAL(13, 162, 12),
QT_MOC_LITERAL(14, 175, 13),
QT_MOC_LITERAL(15, 189, 12),
QT_MOC_LITERAL(16, 202, 12),
QT_MOC_LITERAL(17, 215, 5),
QT_MOC_LITERAL(18, 221, 10),
QT_MOC_LITERAL(19, 232, 13),
QT_MOC_LITERAL(20, 246, 12),
QT_MOC_LITERAL(21, 259, 8),
QT_MOC_LITERAL(22, 268, 8),
QT_MOC_LITERAL(23, 277, 7),
QT_MOC_LITERAL(24, 285, 16),
QT_MOC_LITERAL(25, 302, 9),
QT_MOC_LITERAL(26, 312, 16),
QT_MOC_LITERAL(27, 329, 16),
QT_MOC_LITERAL(28, 346, 39),
QT_MOC_LITERAL(29, 386, 5),
QT_MOC_LITERAL(30, 392, 22),
QT_MOC_LITERAL(31, 415, 7),
QT_MOC_LITERAL(32, 423, 37),
QT_MOC_LITERAL(33, 461, 16),
QT_MOC_LITERAL(34, 478, 32),
QT_MOC_LITERAL(35, 511, 4),
QT_MOC_LITERAL(36, 516, 6),
QT_MOC_LITERAL(37, 523, 39),
QT_MOC_LITERAL(38, 563, 30),
QT_MOC_LITERAL(39, 594, 22),
QT_MOC_LITERAL(40, 617, 22),
QT_MOC_LITERAL(41, 640, 24),
QT_MOC_LITERAL(42, 665, 27),
QT_MOC_LITERAL(43, 693, 25),
QT_MOC_LITERAL(44, 719, 26),
QT_MOC_LITERAL(45, 746, 26),
QT_MOC_LITERAL(46, 773, 24),
QT_MOC_LITERAL(47, 798, 25),
QT_MOC_LITERAL(48, 824, 26),
QT_MOC_LITERAL(49, 851, 26),
QT_MOC_LITERAL(50, 878, 26),
QT_MOC_LITERAL(51, 905, 27),
QT_MOC_LITERAL(52, 933, 27),
QT_MOC_LITERAL(53, 961, 27),
QT_MOC_LITERAL(54, 989, 29),
QT_MOC_LITERAL(55, 1019, 30),
QT_MOC_LITERAL(56, 1050, 29),
QT_MOC_LITERAL(57, 1080, 26),
QT_MOC_LITERAL(58, 1107, 28),
QT_MOC_LITERAL(59, 1136, 29),
QT_MOC_LITERAL(60, 1166, 28),
QT_MOC_LITERAL(61, 1195, 29),
QT_MOC_LITERAL(62, 1225, 27),
QT_MOC_LITERAL(63, 1253, 35),
QT_MOC_LITERAL(64, 1289, 29),
QT_MOC_LITERAL(65, 1319, 26),
QT_MOC_LITERAL(66, 1346, 21)
    },
    "IOGraphDialog\0goToPacket\0\0packet_num\0"
    "recalcGraphData\0capture_file*\0"
    "intervalChanged\0interval\0reloadValueUnitFields\0"
    "scheduleReplot\0now\0scheduleRecalc\0"
    "scheduleRetap\0reloadFields\0updateWidgets\0"
    "graphClicked\0QMouseEvent*\0event\0"
    "mouseMoved\0mouseReleased\0focusChanged\0"
    "QWidget*\0previous\0current\0activateLastItem\0"
    "resetAxes\0updateStatistics\0copyAsCsvClicked\0"
    "on_intervalComboBox_currentIndexChanged\0"
    "index\0on_todCheckBox_toggled\0checked\0"
    "on_graphTreeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0on_graphTreeWidget_itemActivated\0"
    "item\0column\0on_graphTreeWidget_itemSelectionChanged\0"
    "on_graphTreeWidget_itemChanged\0"
    "on_resetButton_clicked\0on_logCheckBox_toggled\0"
    "on_newToolButton_clicked\0"
    "on_deleteToolButton_clicked\0"
    "on_copyToolButton_clicked\0"
    "on_dragRadioButton_toggled\0"
    "on_zoomRadioButton_toggled\0"
    "on_actionReset_triggered\0"
    "on_actionZoomIn_triggered\0"
    "on_actionZoomInX_triggered\0"
    "on_actionZoomInY_triggered\0"
    "on_actionZoomOut_triggered\0"
    "on_actionZoomOutX_triggered\0"
    "on_actionZoomOutY_triggered\0"
    "on_actionMoveUp10_triggered\0"
    "on_actionMoveLeft10_triggered\0"
    "on_actionMoveRight10_triggered\0"
    "on_actionMoveDown10_triggered\0"
    "on_actionMoveUp1_triggered\0"
    "on_actionMoveLeft1_triggered\0"
    "on_actionMoveRight1_triggered\0"
    "on_actionMoveDown1_triggered\0"
    "on_actionGoToPacket_triggered\0"
    "on_actionDragZoom_triggered\0"
    "on_actionToggleTimeOrigin_triggered\0"
    "on_actionCrosshairs_triggered\0"
    "on_buttonBox_helpRequested\0"
    "on_buttonBox_accepted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IOGraphDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06,
       4,    1,  287,    2, 0x06,
       6,    1,  290,    2, 0x06,
       8,    0,  293,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    1,  294,    2, 0x0a,
       9,    0,  297,    2, 0x2a,
      11,    1,  298,    2, 0x0a,
      11,    0,  301,    2, 0x2a,
      12,    1,  302,    2, 0x0a,
      12,    0,  305,    2, 0x2a,
      13,    0,  306,    2, 0x0a,
      14,    0,  307,    2, 0x08,
      15,    1,  308,    2, 0x08,
      18,    1,  311,    2, 0x08,
      19,    1,  314,    2, 0x08,
      20,    2,  317,    2, 0x08,
      24,    0,  322,    2, 0x08,
      25,    0,  323,    2, 0x08,
      26,    0,  324,    2, 0x08,
      27,    0,  325,    2, 0x08,
      28,    1,  326,    2, 0x08,
      30,    1,  329,    2, 0x08,
      32,    2,  332,    2, 0x08,
      34,    2,  337,    2, 0x08,
      37,    0,  342,    2, 0x08,
      38,    2,  343,    2, 0x08,
      39,    0,  348,    2, 0x08,
      40,    1,  349,    2, 0x08,
      41,    0,  352,    2, 0x08,
      42,    0,  353,    2, 0x08,
      43,    0,  354,    2, 0x08,
      44,    1,  355,    2, 0x08,
      45,    1,  358,    2, 0x08,
      46,    0,  361,    2, 0x08,
      47,    0,  362,    2, 0x08,
      48,    0,  363,    2, 0x08,
      49,    0,  364,    2, 0x08,
      50,    0,  365,    2, 0x08,
      51,    0,  366,    2, 0x08,
      52,    0,  367,    2, 0x08,
      53,    0,  368,    2, 0x08,
      54,    0,  369,    2, 0x08,
      55,    0,  370,    2, 0x08,
      56,    0,  371,    2, 0x08,
      57,    0,  372,    2, 0x08,
      58,    0,  373,    2, 0x08,
      59,    0,  374,    2, 0x08,
      60,    0,  375,    2, 0x08,
      61,    0,  376,    2, 0x08,
      62,    0,  377,    2, 0x08,
      63,    0,  378,    2, 0x08,
      64,    0,  379,    2, 0x08,
      65,    0,  380,    2, 0x08,
      66,    0,  381,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 21,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 33,   23,   22,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Int,   35,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Int,   35,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
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

void IOGraphDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IOGraphDialog *_t = static_cast<IOGraphDialog *>(_o);
        switch (_id) {
        case 0: _t->goToPacket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->recalcGraphData((*reinterpret_cast< capture_file*(*)>(_a[1]))); break;
        case 2: _t->intervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->reloadValueUnitFields(); break;
        case 4: _t->scheduleReplot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->scheduleReplot(); break;
        case 6: _t->scheduleRecalc((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->scheduleRecalc(); break;
        case 8: _t->scheduleRetap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scheduleRetap(); break;
        case 10: _t->reloadFields(); break;
        case 11: _t->updateWidgets(); break;
        case 12: _t->graphClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: _t->mouseMoved((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 14: _t->mouseReleased((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 15: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 16: _t->activateLastItem(); break;
        case 17: _t->resetAxes(); break;
        case 18: _t->updateStatistics(); break;
        case 19: _t->copyAsCsvClicked(); break;
        case 20: _t->on_intervalComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_todCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->on_graphTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 23: _t->on_graphTreeWidget_itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->on_graphTreeWidget_itemSelectionChanged(); break;
        case 25: _t->on_graphTreeWidget_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->on_resetButton_clicked(); break;
        case 27: _t->on_logCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_newToolButton_clicked(); break;
        case 29: _t->on_deleteToolButton_clicked(); break;
        case 30: _t->on_copyToolButton_clicked(); break;
        case 31: _t->on_dragRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_zoomRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_actionReset_triggered(); break;
        case 34: _t->on_actionZoomIn_triggered(); break;
        case 35: _t->on_actionZoomInX_triggered(); break;
        case 36: _t->on_actionZoomInY_triggered(); break;
        case 37: _t->on_actionZoomOut_triggered(); break;
        case 38: _t->on_actionZoomOutX_triggered(); break;
        case 39: _t->on_actionZoomOutY_triggered(); break;
        case 40: _t->on_actionMoveUp10_triggered(); break;
        case 41: _t->on_actionMoveLeft10_triggered(); break;
        case 42: _t->on_actionMoveRight10_triggered(); break;
        case 43: _t->on_actionMoveDown10_triggered(); break;
        case 44: _t->on_actionMoveUp1_triggered(); break;
        case 45: _t->on_actionMoveLeft1_triggered(); break;
        case 46: _t->on_actionMoveRight1_triggered(); break;
        case 47: _t->on_actionMoveDown1_triggered(); break;
        case 48: _t->on_actionGoToPacket_triggered(); break;
        case 49: _t->on_actionDragZoom_triggered(); break;
        case 50: _t->on_actionToggleTimeOrigin_triggered(); break;
        case 51: _t->on_actionCrosshairs_triggered(); break;
        case 52: _t->on_buttonBox_helpRequested(); break;
        case 53: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IOGraphDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraphDialog::goToPacket)) {
                *result = 0;
            }
        }
        {
            typedef void (IOGraphDialog::*_t)(capture_file * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraphDialog::recalcGraphData)) {
                *result = 1;
            }
        }
        {
            typedef void (IOGraphDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraphDialog::intervalChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (IOGraphDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOGraphDialog::reloadValueUnitFields)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject IOGraphDialog::staticMetaObject = {
    { &WiresharkDialog::staticMetaObject, qt_meta_stringdata_IOGraphDialog.data,
      qt_meta_data_IOGraphDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *IOGraphDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOGraphDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IOGraphDialog.stringdata))
        return static_cast<void*>(const_cast< IOGraphDialog*>(this));
    return WiresharkDialog::qt_metacast(_clname);
}

int IOGraphDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WiresharkDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void IOGraphDialog::goToPacket(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IOGraphDialog::recalcGraphData(capture_file * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IOGraphDialog::intervalChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IOGraphDialog::reloadValueUnitFields()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
