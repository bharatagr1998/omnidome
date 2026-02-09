/****************************************************************************
** Meta object code from reading C++ file 'Rotation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/widgetlib/include/omni/ui/Rotation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Rotation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__Rotation_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__Rotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__Rotation_t qt_meta_stringdata_omni__ui__Rotation = {
    {
QT_MOC_LITERAL(0, 0, 18), // "omni::ui::Rotation"
QT_MOC_LITERAL(1, 19, 8), // "xChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "yChanged"
QT_MOC_LITERAL(4, 38, 8), // "zChanged"
QT_MOC_LITERAL(5, 47, 15), // "rotationChanged"
QT_MOC_LITERAL(6, 63, 4), // "setX"
QT_MOC_LITERAL(7, 68, 4), // "setY"
QT_MOC_LITERAL(8, 73, 4), // "setZ"
QT_MOC_LITERAL(9, 78, 11), // "setRotation"
QT_MOC_LITERAL(10, 90, 11) // "EulerAngles"

    },
    "omni::ui::Rotation\0xChanged\0\0yChanged\0"
    "zChanged\0rotationChanged\0setX\0setY\0"
    "setZ\0setRotation\0EulerAngles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__Rotation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void omni::ui::Rotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rotation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->zChanged(); break;
        case 3: _t->rotationChanged(); break;
        case 4: _t->setX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setRotation((*reinterpret_cast< const EulerAngles(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Rotation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rotation::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Rotation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rotation::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Rotation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rotation::zChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Rotation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rotation::rotationChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::Rotation::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__Rotation.data,
    qt_meta_data_omni__ui__Rotation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::Rotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::Rotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__Rotation.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int omni::ui::Rotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void omni::ui::Rotation::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omni::ui::Rotation::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omni::ui::Rotation::zChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omni::ui::Rotation::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
