/****************************************************************************
** Meta object code from reading C++ file 'createassignment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Desktop/Git/CPE810C_2016F_Canvas/ShiftingDate/createassignment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createassignment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createassignment_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createassignment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createassignment_t qt_meta_stringdata_createassignment = {
    {
QT_MOC_LITERAL(0, 0, 16), // "createassignment"
QT_MOC_LITERAL(1, 17, 10), // "entryAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "createassignmententry*"
QT_MOC_LITERAL(4, 52, 5), // "entry"
QT_MOC_LITERAL(5, 58, 12) // "entryRemoved"

    },
    "createassignment\0entryAdded\0\0"
    "createassignmententry*\0entry\0entryRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createassignment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void createassignment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createassignment *_t = static_cast<createassignment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entryAdded((*reinterpret_cast< createassignmententry*(*)>(_a[1]))); break;
        case 1: _t->entryRemoved((*reinterpret_cast< createassignmententry*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< createassignmententry* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< createassignmententry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (createassignment::*_t)(createassignmententry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&createassignment::entryAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (createassignment::*_t)(createassignmententry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&createassignment::entryRemoved)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject createassignment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_createassignment.data,
      qt_meta_data_createassignment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createassignment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createassignment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createassignment.stringdata0))
        return static_cast<void*>(const_cast< createassignment*>(this));
    return QObject::qt_metacast(_clname);
}

int createassignment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void createassignment::entryAdded(createassignmententry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void createassignment::entryRemoved(createassignmententry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
