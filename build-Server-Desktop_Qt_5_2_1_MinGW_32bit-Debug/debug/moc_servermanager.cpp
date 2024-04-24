/****************************************************************************
** Meta object code from reading C++ file 'servermanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/servermanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ServerManager_t {
    QByteArrayData data[8];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ServerManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ServerManager_t qt_meta_stringdata_ServerManager = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 18),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 11),
QT_MOC_LITERAL(4, 46, 6),
QT_MOC_LITERAL(5, 53, 18),
QT_MOC_LITERAL(6, 72, 27),
QT_MOC_LITERAL(7, 100, 19)
    },
    "ServerManager\0newClientConnected\0\0"
    "QTcpSocket*\0client\0clientDisconnected\0"
    "newClientConnectionRecieved\0"
    "onClientDisconected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       5,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x08,
       7,    0,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerManager *_t = static_cast<ServerManager *>(_o);
        switch (_id) {
        case 0: _t->newClientConnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 1: _t->clientDisconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->newClientConnectionRecieved(); break;
        case 3: _t->onClientDisconected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ServerManager::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServerManager::newClientConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (ServerManager::*_t)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServerManager::clientDisconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ServerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServerManager.data,
      qt_meta_data_ServerManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *ServerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerManager.stringdata))
        return static_cast<void*>(const_cast< ServerManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ServerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ServerManager::newClientConnected(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerManager::clientDisconnected(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
