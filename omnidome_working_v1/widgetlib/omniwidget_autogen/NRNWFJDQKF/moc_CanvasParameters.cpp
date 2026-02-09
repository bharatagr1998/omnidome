/****************************************************************************
** Meta object code from reading C++ file 'CanvasParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/widgetlib/include/omni/ui/CanvasParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CanvasParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__CanvasParameters_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__CanvasParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__CanvasParameters_t qt_meta_stringdata_omni__ui__CanvasParameters = {
    {
QT_MOC_LITERAL(0, 0, 26), // "omni::ui::CanvasParameters"
QT_MOC_LITERAL(1, 27, 16), // "dataModelChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "setDataModel"
QT_MOC_LITERAL(4, 58, 8), // "Session*"
QT_MOC_LITERAL(5, 67, 16), // "setRescaleValues"
QT_MOC_LITERAL(6, 84, 8), // "_rescale"
QT_MOC_LITERAL(7, 93, 8), // "setScale"
QT_MOC_LITERAL(8, 102, 7), // "_factor"
QT_MOC_LITERAL(9, 110, 7) // "setUnit"

    },
    "omni::ui::CanvasParameters\0dataModelChanged\0"
    "\0setDataModel\0Session*\0setRescaleValues\0"
    "_rescale\0setScale\0_factor\0setUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__CanvasParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void omni::ui::CanvasParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanvasParameters *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataModelChanged(); break;
        case 1: _t->setDataModel((*reinterpret_cast< Session*(*)>(_a[1]))); break;
        case 2: _t->setRescaleValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setUnit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanvasParameters::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasParameters::dataModelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::CanvasParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<ParameterWidget::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__CanvasParameters.data,
    qt_meta_data_omni__ui__CanvasParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::CanvasParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::CanvasParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__CanvasParameters.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mixin::UnsharedDataModel<CanvasParameters,Session>"))
        return static_cast< mixin::UnsharedDataModel<CanvasParameters,Session>*>(this);
    return ParameterWidget::qt_metacast(_clname);
}

int omni::ui::CanvasParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ParameterWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void omni::ui::CanvasParameters::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
