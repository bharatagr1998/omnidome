/****************************************************************************
** Meta object code from reading C++ file 'MeshWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../omnidome_masterv1/omnidome-master/plugins/canvas/Mesh/MeshWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeshWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__canvas__Mesh_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__canvas__Mesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__canvas__Mesh_t qt_meta_stringdata_omni__ui__canvas__Mesh = {
    {
QT_MOC_LITERAL(0, 0, 22), // "omni::ui::canvas::Mesh"
QT_MOC_LITERAL(1, 23, 8), // "loadMesh"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "centerMesh"
QT_MOC_LITERAL(4, 44, 9) // "scaleMesh"

    },
    "omni::ui::canvas::Mesh\0loadMesh\0\0"
    "centerMesh\0scaleMesh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__canvas__Mesh[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       4,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void omni::ui::canvas::Mesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadMesh(); break;
        case 1: _t->centerMesh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->scaleMesh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::canvas::Mesh::staticMetaObject = { {
    QMetaObject::SuperData::link<ui::CanvasParameters::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__canvas__Mesh.data,
    qt_meta_data_omni__ui__canvas__Mesh,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::canvas::Mesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::canvas::Mesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__canvas__Mesh.stringdata0))
        return static_cast<void*>(this);
    return ui::CanvasParameters::qt_metacast(_clname);
}

int omni::ui::canvas::Mesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ui::CanvasParameters::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
