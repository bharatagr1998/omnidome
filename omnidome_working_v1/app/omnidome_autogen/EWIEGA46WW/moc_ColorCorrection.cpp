/****************************************************************************
** Meta object code from reading C++ file 'ColorCorrection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/app/ColorCorrection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorCorrection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__ColorCorrection_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__ColorCorrection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__ColorCorrection_t qt_meta_stringdata_omni__ui__ColorCorrection = {
    {
QT_MOC_LITERAL(0, 0, 25), // "omni::ui::ColorCorrection"
QT_MOC_LITERAL(1, 26, 16), // "dataModelChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "setAllChannels"
QT_MOC_LITERAL(4, 59, 13), // "setRedChannel"
QT_MOC_LITERAL(5, 73, 15), // "setGreenChannel"
QT_MOC_LITERAL(6, 89, 14), // "setBlueChannel"
QT_MOC_LITERAL(7, 104, 10), // "setChannel"
QT_MOC_LITERAL(8, 115, 7), // "Channel"
QT_MOC_LITERAL(9, 123, 8), // "_channel"
QT_MOC_LITERAL(10, 132, 7) // "setUsed"

    },
    "omni::ui::ColorCorrection\0dataModelChanged\0"
    "\0setAllChannels\0setRedChannel\0"
    "setGreenChannel\0setBlueChannel\0"
    "setChannel\0Channel\0_channel\0setUsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__ColorCorrection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void omni::ui::ColorCorrection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorCorrection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataModelChanged(); break;
        case 1: _t->setAllChannels(); break;
        case 2: _t->setRedChannel(); break;
        case 3: _t->setGreenChannel(); break;
        case 4: _t->setBlueChannel(); break;
        case 5: _t->setChannel((*reinterpret_cast< Channel(*)>(_a[1]))); break;
        case 6: _t->setUsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorCorrection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorCorrection::dataModelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::ColorCorrection::staticMetaObject = { {
    QMetaObject::SuperData::link<DockWidget::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__ColorCorrection.data,
    qt_meta_data_omni__ui__ColorCorrection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::ColorCorrection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::ColorCorrection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__ColorCorrection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mixin::SharedDataModel<ColorCorrection,Session>"))
        return static_cast< mixin::SharedDataModel<ColorCorrection,Session>*>(this);
    return DockWidget::qt_metacast(_clname);
}

int omni::ui::ColorCorrection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void omni::ui::ColorCorrection::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
