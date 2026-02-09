/****************************************************************************
** Meta object code from reading C++ file 'Box.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../omnidome_masterv1/omnidome-master/plugins/canvas/Box/Box.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Box.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__canvas__Box_t {
    QByteArrayData data[13];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__canvas__Box_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__canvas__Box_t qt_meta_stringdata_omni__canvas__Box = {
    {
QT_MOC_LITERAL(0, 0, 17), // "omni::canvas::Box"
QT_MOC_LITERAL(1, 18, 7), // "version"
QT_MOC_LITERAL(2, 26, 5), // "1.1.0"
QT_MOC_LITERAL(3, 32, 6), // "author"
QT_MOC_LITERAL(4, 39, 18), // "Michael Winkelmann"
QT_MOC_LITERAL(5, 58, 3), // "url"
QT_MOC_LITERAL(6, 62, 16), // "http://omnido.me"
QT_MOC_LITERAL(7, 79, 4), // "name"
QT_MOC_LITERAL(8, 84, 10), // "Box canvas"
QT_MOC_LITERAL(9, 95, 11), // "description"
QT_MOC_LITERAL(10, 107, 18), // "Copyright (C) 2017"
QT_MOC_LITERAL(11, 126, 11), // "sizeChanged"
QT_MOC_LITERAL(12, 138, 0) // ""

    },
    "omni::canvas::Box\0version\0""1.1.0\0"
    "author\0Michael Winkelmann\0url\0"
    "http://omnido.me\0name\0Box canvas\0"
    "description\0Copyright (C) 2017\0"
    "sizeChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__canvas__Box[] = {

 // content:
       8,       // revision
       0,       // classname
       5,   14, // classinfo
       1,   24, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    8,
       9,   10,

 // signals: name, argc, parameters, tag, flags
      11,    0,   29,   12, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void omni::canvas::Box::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Box *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Box::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Box::sizeChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject omni::canvas::Box::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_omni__canvas__Box.data,
    qt_meta_data_omni__canvas__Box,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::canvas::Box::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::canvas::Box::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__canvas__Box.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Envelope"))
        return static_cast< Envelope*>(this);
    if (!strcmp(_clname, "org.omnidome.canvas.Interface"))
        return static_cast< omni::canvas::Interface*>(this);
    return QObject::qt_metacast(_clname);
}

int omni::canvas::Box::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void omni::canvas::Box::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1d,  'o',  'r',  'g',  '.',  'o', 
    'm',  'n',  'i',  'd',  'o',  'm',  'e',  '.', 
    'c',  'a',  'n',  'v',  'a',  's',  '.',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x63,  'B',  'o',  'x', 
    0xff, 
};
using namespace omni;
using namespace omni::canvas;
QT_MOC_EXPORT_PLUGIN(omni::canvas::Box, Box)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
