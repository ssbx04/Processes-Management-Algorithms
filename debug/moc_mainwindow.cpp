/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_actionAfficher_2_triggered"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 39), // "on_actionSaisir_les_processus..."
QT_MOC_LITERAL(4, 82, 23), // "on_actionFIFO_triggered"
QT_MOC_LITERAL(5, 106, 23), // "on_actionPCTE_triggered"
QT_MOC_LITERAL(6, 130, 24), // "on_actionPCTER_triggered"
QT_MOC_LITERAL(7, 155, 35), // "on_actionSANS_r_quisition_tri..."
QT_MOC_LITERAL(8, 191, 28), // "on_actionPriorit_2_triggered"
QT_MOC_LITERAL(9, 220, 28), // "on_actionPriorit_3_triggered"
QT_MOC_LITERAL(10, 249, 29), // "on_actionTourniquet_triggered"
QT_MOC_LITERAL(11, 279, 24), // "on_actionAjout_triggered"
QT_MOC_LITERAL(12, 304, 29) // "on_actionDiagrammes_triggered"

    },
    "MainWindow\0on_actionAfficher_2_triggered\0"
    "\0on_actionSaisir_les_processus_triggered\0"
    "on_actionFIFO_triggered\0on_actionPCTE_triggered\0"
    "on_actionPCTER_triggered\0"
    "on_actionSANS_r_quisition_triggered\0"
    "on_actionPriorit_2_triggered\0"
    "on_actionPriorit_3_triggered\0"
    "on_actionTourniquet_triggered\0"
    "on_actionAjout_triggered\0"
    "on_actionDiagrammes_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAfficher_2_triggered(); break;
        case 1: _t->on_actionSaisir_les_processus_triggered(); break;
        case 2: _t->on_actionFIFO_triggered(); break;
        case 3: _t->on_actionPCTE_triggered(); break;
        case 4: _t->on_actionPCTER_triggered(); break;
        //case 5: _t->on_actionSANS_r_quisition_triggered(); break;
        case 6: _t->on_actionPriorit_2_triggered(); break;
        case 7: _t->on_actionPriorit_3_triggered(); break;
        case 8: _t->on_actionTourniquet_triggered(); break;
        case 9: _t->on_actionAjout_triggered(); break;
        case 10: _t->on_actionDiagrammes_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
