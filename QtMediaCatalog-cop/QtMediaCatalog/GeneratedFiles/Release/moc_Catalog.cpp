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
    QByteArrayData data[8];
    char stringdata0[77];
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
QT_MOC_LITERAL(4, 36, 11), // "FillCatalog"
QT_MOC_LITERAL(5, 48, 4), // "path"
QT_MOC_LITERAL(6, 53, 15), // "GenerateCatalog"
QT_MOC_LITERAL(7, 69, 7) // "newPath"

    },
    "Catalog\0catalogIsReady\0\0dataChanged\0"
    "FillCatalog\0path\0GenerateCatalog\0"
    "newPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Catalog[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

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
        case 2: _t->FillCatalog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->GenerateCatalog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
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
void Catalog::catalogIsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Catalog::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
