/****************************************************************************
** Meta object code from reading C++ file 'ToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/app/ToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__ToolBar_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__ToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__ToolBar_t qt_meta_stringdata_omni__ui__ToolBar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "omni::ui::ToolBar"
QT_MOC_LITERAL(1, 18, 16), // "dataModelChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "setScreenSetupMode"
QT_MOC_LITERAL(4, 55, 14), // "setArrangeMode"
QT_MOC_LITERAL(5, 70, 11), // "setWarpMode"
QT_MOC_LITERAL(6, 82, 12), // "setBlendMode"
QT_MOC_LITERAL(7, 95, 22), // "setColorCorrectionMode"
QT_MOC_LITERAL(8, 118, 13), // "setExportMode"
QT_MOC_LITERAL(9, 132, 11), // "setLiveMode"
QT_MOC_LITERAL(10, 144, 9), // "showAbout"
QT_MOC_LITERAL(11, 154, 12) // "buttonStates"

    },
    "omni::ui::ToolBar\0dataModelChanged\0\0"
    "setScreenSetupMode\0setArrangeMode\0"
    "setWarpMode\0setBlendMode\0"
    "setColorCorrectionMode\0setExportMode\0"
    "setLiveMode\0showAbout\0buttonStates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__ToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omni::ui::ToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataModelChanged(); break;
        case 1: _t->setScreenSetupMode(); break;
        case 2: _t->setArrangeMode(); break;
        case 3: _t->setWarpMode(); break;
        case 4: _t->setBlendMode(); break;
        case 5: _t->setColorCorrectionMode(); break;
        case 6: _t->setExportMode(); break;
        case 7: _t->setLiveMode(); break;
        case 8: _t->showAbout(); break;
        case 9: _t->buttonStates(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBar::dataModelChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::ToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__ToolBar.data,
    qt_meta_data_omni__ui__ToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::ToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::ToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__ToolBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mixin::SharedDataModel<ToolBar,Session>"))
        return static_cast< mixin::SharedDataModel<ToolBar,Session>*>(this);
    return QToolBar::qt_metacast(_clname);
}

int omni::ui::ToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void omni::ui::ToolBar::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
