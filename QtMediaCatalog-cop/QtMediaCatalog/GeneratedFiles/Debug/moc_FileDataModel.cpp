/****************************************************************************
** Meta object code from reading C++ file 'FileDataModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FileDataModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileDataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileDataModel_t {
    QByteArrayData data[14];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDataModel_t qt_meta_stringdata_FileDataModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileDataModel"
QT_MOC_LITERAL(1, 14, 13), // "isFileChecked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "check"
QT_MOC_LITERAL(4, 35, 11), // "fileChoosen"
QT_MOC_LITERAL(5, 47, 7), // "choosen"
QT_MOC_LITERAL(6, 55, 13), // "addFilesToDir"
QT_MOC_LITERAL(7, 69, 7), // "dirName"
QT_MOC_LITERAL(8, 77, 10), // "QList<int>"
QT_MOC_LITERAL(9, 88, 7), // "chfiles"
QT_MOC_LITERAL(10, 96, 13), // "SendFilesList"
QT_MOC_LITERAL(11, 110, 13), // "OnCellClicked"
QT_MOC_LITERAL(12, 124, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 136, 5) // "index"

    },
    "FileDataModel\0isFileChecked\0\0check\0"
    "fileChoosen\0choosen\0addFilesToDir\0"
    "dirName\0QList<int>\0chfiles\0SendFilesList\0"
    "OnCellClicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void FileDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileDataModel *_t = static_cast<FileDataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isFileChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fileChoosen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addFilesToDir((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 3: _t->SendFilesList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->OnCellClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            using _t = void (FileDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDataModel::isFileChecked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDataModel::fileChoosen)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDataModel::*)(QString , QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDataModel::addFilesToDir)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileDataModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_FileDataModel.data,
      qt_meta_data_FileDataModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int FileDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileDataModel::isFileChecked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileDataModel::fileChoosen(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileDataModel::addFilesToDir(QString _t1, QList<int> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
