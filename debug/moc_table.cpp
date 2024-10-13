/****************************************************************************
** Meta object code from reading C++ file 'table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_table_t {
    QByteArrayData data[6];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_table_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_table_t qt_meta_stringdata_table = {
    {
QT_MOC_LITERAL(0, 0, 5), // "table"
QT_MOC_LITERAL(1, 6, 36), // "on_btn_validation_nbprocess_a..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "showPage1"
QT_MOC_LITERAL(4, 54, 9), // "showPage2"
QT_MOC_LITERAL(5, 64, 21) // "on_btnSuivant_clicked"

    },
    "table\0on_btn_validation_nbprocess_accepted\0"
    "\0showPage1\0showPage2\0on_btnSuivant_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_table[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void table::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        table *_t = static_cast<table *>(_o);
        switch (_id) {
        //case 0: _t->on_btn_validation_nbprocess_accepted(); break;
        case 1: _t->showPage1(); break;
        case 2: _t->showPage2(); break;
        case 3: _t->on_btnSuivant_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject table::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_table.data,
      qt_meta_data_table,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *table::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *table::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_table.stringdata))
        return static_cast<void*>(const_cast< table*>(this));
    return QDialog::qt_metacast(_clname);
}

int table::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
