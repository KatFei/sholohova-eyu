/****************************************************************************
** Meta object code from reading C++ file 'QtMediaCatalog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtMediaCatalog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtMediaCatalog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMediaCatalog_t {
    QByteArrayData data[19];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMediaCatalog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMediaCatalog_t qt_meta_stringdata_QtMediaCatalog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtMediaCatalog"
QT_MOC_LITERAL(1, 15, 11), // "pathEntered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "pathToDir"
QT_MOC_LITERAL(4, 38, 10), // "extensions"
QT_MOC_LITERAL(5, 49, 10), // "dirEntered"
QT_MOC_LITERAL(6, 60, 7), // "dirName"
QT_MOC_LITERAL(7, 68, 19), // "organizingCompleted"
QT_MOC_LITERAL(8, 88, 9), // "pathToCat"
QT_MOC_LITERAL(9, 98, 11), // "UpdateTable"
QT_MOC_LITERAL(10, 110, 10), // "UpdateTree"
QT_MOC_LITERAL(11, 121, 4), // "dirs"
QT_MOC_LITERAL(12, 126, 12), // "AddDirToTree"
QT_MOC_LITERAL(13, 139, 9), // "Generated"
QT_MOC_LITERAL(14, 149, 5), // "fails"
QT_MOC_LITERAL(15, 155, 13), // "SearchClicked"
QT_MOC_LITERAL(16, 169, 15), // "OpenFileBrowser"
QT_MOC_LITERAL(17, 185, 10), // "AddClicked"
QT_MOC_LITERAL(18, 196, 15) // "GenerateClicked"

    },
    "QtMediaCatalog\0pathEntered\0\0pathToDir\0"
    "extensions\0dirEntered\0dirName\0"
    "organizingCompleted\0pathToCat\0UpdateTable\0"
    "UpdateTree\0dirs\0AddDirToTree\0Generated\0"
    "fails\0SearchClicked\0OpenFileBrowser\0"
    "AddClicked\0GenerateClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMediaCatalog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       1,    1,   79,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   88,    2, 0x0a /* Public */,
      10,    1,   89,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtMediaCatalog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMediaCatalog *_t = static_cast<QtMediaCatalog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathEntered((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->pathEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dirEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->organizingCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->UpdateTable(); break;
        case 5: _t->UpdateTree((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->AddDirToTree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->Generated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SearchClicked(); break;
        case 9: _t->OpenFileBrowser(); break;
        case 10: _t->AddClicked(); break;
        case 11: _t->GenerateClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtMediaCatalog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMediaCatalog::pathEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtMediaCatalog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMediaCatalog::dirEntered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QtMediaCatalog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMediaCatalog::organizingCompleted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtMediaCatalog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtMediaCatalog.data,
      qt_meta_data_QtMediaCatalog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMediaCatalog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMediaCatalog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMediaCatalog.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtMediaCatalog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QtMediaCatalog::pathEntered(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QtMediaCatalog::dirEntered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtMediaCatalog::organizingCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
