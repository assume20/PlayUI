/****************************************************************************
** Meta object code from reading C++ file 'labelmodify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../labelmodify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labelmodify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LAbel_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LAbel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LAbel_t qt_meta_stringdata_LAbel = {
    {
QT_MOC_LITERAL(0, 0, 5), // "LAbel"
QT_MOC_LITERAL(1, 6, 11), // "resizeEvent"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 33, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(5, 52, 12), // "rcvlabelInfo"
QT_MOC_LITERAL(6, 65, 11), // "labelInfo_t"
QT_MOC_LITERAL(7, 77, 4), // "info"
QT_MOC_LITERAL(8, 82, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(9, 104, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(10, 122, 21) // "on_btn_modify_clicked"

    },
    "LAbel\0resizeEvent\0\0QResizeEvent*\0"
    "on_btn_add_clicked\0rcvlabelInfo\0"
    "labelInfo_t\0info\0on_btn_delete_clicked\0"
    "on_btn_ok_clicked\0on_btn_modify_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LAbel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LAbel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LAbel *_t = static_cast<LAbel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->on_btn_add_clicked(); break;
        case 2: _t->rcvlabelInfo((*reinterpret_cast< labelInfo_t(*)>(_a[1]))); break;
        case 3: _t->on_btn_delete_clicked(); break;
        case 4: _t->on_btn_ok_clicked(); break;
        case 5: _t->on_btn_modify_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LAbel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LAbel.data,
      qt_meta_data_LAbel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LAbel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LAbel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LAbel.stringdata0))
        return static_cast<void*>(const_cast< LAbel*>(this));
    if (!strcmp(_clname, "Ui_labDlg"))
        return static_cast< Ui_labDlg*>(const_cast< LAbel*>(this));
    return QDialog::qt_metacast(_clname);
}

int LAbel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
