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
    QByteArrayData data[13];
    char stringdata0[139];
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
QT_MOC_LITERAL(4, 38, 10), // "DirEntered"
QT_MOC_LITERAL(5, 49, 7), // "dirName"
QT_MOC_LITERAL(6, 57, 11), // "UpdateTable"
QT_MOC_LITERAL(7, 69, 10), // "UpdateTree"
QT_MOC_LITERAL(8, 80, 4), // "dirs"
QT_MOC_LITERAL(9, 85, 12), // "AddDirToTree"
QT_MOC_LITERAL(10, 98, 13), // "SearchClicked"
QT_MOC_LITERAL(11, 112, 15), // "OpenFileBrowser"
QT_MOC_LITERAL(12, 128, 10) // "AddClicked"

    },
    "QtMediaCatalog\0pathEntered\0\0pathToDir\0"
    "DirEntered\0dirName\0UpdateTable\0"
    "UpdateTree\0dirs\0AddDirToTree\0SearchClicked\0"
    "OpenFileBrowser\0AddClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMediaCatalog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,    5,
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
        case 0: _t->pathEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->DirEntered((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->UpdateTable(); break;
        case 3: _t->UpdateTree((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->AddDirToTree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SearchClicked(); break;
        case 6: _t->OpenFileBrowser(); break;
        case 7: _t->AddClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtMediaCatalog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMediaCatalog::pathEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtMediaCatalog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMediaCatalog::DirEntered)) {
                *result = 1;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtMediaCatalog::pathEntered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtMediaCatalog::DirEntered(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
