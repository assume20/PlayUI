/****************************************************************************
** Meta object code from reading C++ file 'ipportinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ipportinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ipportinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IPportinfo_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IPportinfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IPportinfo_t qt_meta_stringdata_IPportinfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "IPportinfo"
QT_MOC_LITERAL(1, 11, 12), // "addCameraSig"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "WinListInfo_t"
QT_MOC_LITERAL(4, 39, 10), // "cameraInfo"
QT_MOC_LITERAL(5, 50, 14), // "deleteCamerSig"
QT_MOC_LITERAL(6, 65, 5), // "ipStr"
QT_MOC_LITERAL(7, 71, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(8, 90, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(9, 112, 20), // "on_btn_apply_clicked"
QT_MOC_LITERAL(10, 133, 21) // "on_btn_cancel_clicked"

    },
    "IPportinfo\0addCameraSig\0\0WinListInfo_t\0"
    "cameraInfo\0deleteCamerSig\0ipStr\0"
    "on_btn_add_clicked\0on_btn_delete_clicked\0"
    "on_btn_apply_clicked\0on_btn_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IPportinfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IPportinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IPportinfo *_t = static_cast<IPportinfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCameraSig((*reinterpret_cast< WinListInfo_t(*)>(_a[1]))); break;
        case 1: _t->deleteCamerSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btn_add_clicked(); break;
        case 3: _t->on_btn_delete_clicked(); break;
        case 4: _t->on_btn_apply_clicked(); break;
        case 5: _t->on_btn_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IPportinfo::*_t)(WinListInfo_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IPportinfo::addCameraSig)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IPportinfo::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IPportinfo::deleteCamerSig)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject IPportinfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IPportinfo.data,
      qt_meta_data_IPportinfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IPportinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IPportinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IPportinfo.stringdata0))
        return static_cast<void*>(const_cast< IPportinfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int IPportinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void IPportinfo::addCameraSig(WinListInfo_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IPportinfo::deleteCamerSig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
