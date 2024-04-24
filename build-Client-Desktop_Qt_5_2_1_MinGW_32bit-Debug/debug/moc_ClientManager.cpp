/****************************************************************************
** Meta object code from reading C++ file 'ClientManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/ClientManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientManager_t {
    QByteArrayData data[7];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ClientManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ClientManager_t qt_meta_stringdata_ClientManager = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 9),
QT_MOC_LITERAL(4, 38, 12),
QT_MOC_LITERAL(5, 51, 4),
QT_MOC_LITERAL(6, 56, 9)
    },
    "ClientManager\0disconnected\0\0connected\0"
    "dataReceived\0data\0readyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    0,   35,    2, 0x06,
       4,    1,   36,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ClientManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientManager *_t = static_cast<ClientManager *>(_o);
        switch (_id) {
        case 0: _t->disconnected(); break;
        case 1: _t->connected(); break;
        case 2: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientManager::disconnected)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientManager::connected)) {
                *result = 1;
            }
        }
        {
            typedef void (ClientManager::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientManager::dataReceived)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ClientManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientManager.data,
      qt_meta_data_ClientManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *ClientManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientManager.stringdata))
        return static_cast<void*>(const_cast< ClientManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ClientManager::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ClientManager::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ClientManager::dataReceived(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
