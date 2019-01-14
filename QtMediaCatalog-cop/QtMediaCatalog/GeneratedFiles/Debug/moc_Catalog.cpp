/****************************************************************************
** Meta object code from reading C++ file 'Catalog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Catalog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Catalog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Catalog_t {
    QByteArrayData data[18];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Catalog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Catalog_t qt_meta_stringdata_Catalog = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Catalog"
QT_MOC_LITERAL(1, 8, 14), // "catalogIsReady"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "dataChanged"
QT_MOC_LITERAL(4, 36, 9), // "organized"
QT_MOC_LITERAL(5, 46, 8), // "dirAdded"
QT_MOC_LITERAL(6, 55, 7), // "dirName"
QT_MOC_LITERAL(7, 63, 9), // "generated"
QT_MOC_LITERAL(8, 73, 5), // "fails"
QT_MOC_LITERAL(9, 79, 11), // "FillCatalog"
QT_MOC_LITERAL(10, 91, 4), // "path"
QT_MOC_LITERAL(11, 96, 7), // "strExts"
QT_MOC_LITERAL(12, 104, 11), // "SearchFiles"
QT_MOC_LITERAL(13, 116, 13), // "OrganizeFiles"
QT_MOC_LITERAL(14, 130, 10), // "QList<int>"
QT_MOC_LITERAL(15, 141, 7), // "chfiles"
QT_MOC_LITERAL(16, 149, 15), // "GenerateCatalog"
QT_MOC_LITERAL(17, 165, 7) // "newPath"

    },
    "Catalog\0catalogIsReady\0\0dataChanged\0"
    "organized\0dirAdded\0dirName\0generated\0"
    "fails\0FillCatalog\0path\0strExts\0"
    "SearchFiles\0OrganizeFiles\0QList<int>\0"
    "chfiles\0GenerateCatalog\0newPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Catalog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   73,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x2a /* Public | MethodCloned */,
      12,    2,   81,    2, 0x0a /* Public */,
      13,    2,   86,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    6,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void Catalog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Catalog *_t = static_cast<Catalog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->catalogIsReady(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->organized(); break;
        case 3: _t->dirAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->generated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->FillCatalog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->FillCatalog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->SearchFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->OrganizeFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 9: _t->GenerateCatalog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Catalog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catalog::catalogIsReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Catalog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catalog::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Catalog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catalog::organized)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Catalog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catalog::dirAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Catalog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catalog::generated)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Catalog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Catalog.data,
      qt_meta_data_Catalog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Catalog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Catalog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Catalog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Catalog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Catalog::catalogIsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Catalog::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Catalog::organized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Catalog::dirAdded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Catalog::generated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
