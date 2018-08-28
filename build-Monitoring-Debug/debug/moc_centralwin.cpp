/****************************************************************************
** Meta object code from reading C++ file 'centralwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../centralwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Centralwin_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Centralwin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Centralwin_t qt_meta_stringdata_Centralwin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Centralwin"
QT_MOC_LITERAL(1, 11, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 43, 4), // "item"
QT_MOC_LITERAL(5, 48, 13), // "addCameraSlot"
QT_MOC_LITERAL(6, 62, 13), // "WinListInfo_t"
QT_MOC_LITERAL(7, 76, 10), // "cameraInfo"
QT_MOC_LITERAL(8, 87, 15), // "deleteCamerSlot"
QT_MOC_LITERAL(9, 103, 5) // "ipStr"

    },
    "Centralwin\0doubleClicked\0\0QTreeWidgetItem*\0"
    "item\0addCameraSlot\0WinListInfo_t\0"
    "cameraInfo\0deleteCamerSlot\0ipStr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Centralwin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       8,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Centralwin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Centralwin *_t = static_cast<Centralwin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->addCameraSlot((*reinterpret_cast< WinListInfo_t(*)>(_a[1]))); break;
        case 2: _t->deleteCamerSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Centralwin::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Centralwin.data,
      qt_meta_data_Centralwin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Centralwin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Centralwin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Centralwin.stringdata0))
        return static_cast<void*>(const_cast< Centralwin*>(this));
    return QFrame::qt_metacast(_clname);
}

int Centralwin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
