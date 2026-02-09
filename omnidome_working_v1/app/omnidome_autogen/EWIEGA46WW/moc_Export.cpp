/****************************************************************************
** Meta object code from reading C++ file 'Export.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/app/Export.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Export.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__Export_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__Export_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__Export_t qt_meta_stringdata_omni__ui__Export = {
    {
QT_MOC_LITERAL(0, 0, 16), // "omni::ui::Export"
QT_MOC_LITERAL(1, 17, 16), // "dataModelChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "exportToFile"
QT_MOC_LITERAL(4, 48, 13), // "renderPreview"
QT_MOC_LITERAL(5, 62, 16), // "selectPlainImage"
QT_MOC_LITERAL(6, 79, 21), // "selectOmniCalibration"
QT_MOC_LITERAL(7, 101, 17) // "getExportSettings"

    },
    "omni::ui::Export\0dataModelChanged\0\0"
    "exportToFile\0renderPreview\0selectPlainImage\0"
    "selectOmniCalibration\0getExportSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__Export[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void omni::ui::Export::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Export *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataModelChanged(); break;
        case 1: _t->exportToFile(); break;
        case 2: _t->renderPreview(); break;
        case 3: _t->selectPlainImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->selectOmniCalibration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->getExportSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Export::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Export::dataModelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::Export::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__Export.data,
    qt_meta_data_omni__ui__Export,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::Export::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::Export::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__Export.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mixin::SharedDataModel<Export,Session>"))
        return static_cast< mixin::SharedDataModel<Export,Session>*>(this);
    return QWidget::qt_metacast(_clname);
}

int omni::ui::Export::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void omni::ui::Export::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
