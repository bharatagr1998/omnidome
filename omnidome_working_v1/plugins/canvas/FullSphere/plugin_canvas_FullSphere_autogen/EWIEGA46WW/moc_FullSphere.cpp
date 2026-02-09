/****************************************************************************
** Meta object code from reading C++ file 'FullSphere.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/bharat/Desktop/OmniDome/omnidome_masterv1/omnidome-master/plugins/canvas/FullSphere/FullSphere.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FullSphere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__canvas__FullSphere_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__canvas__FullSphere_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__canvas__FullSphere_t qt_meta_stringdata_omni__canvas__FullSphere = {
    {
QT_MOC_LITERAL(0, 0, 24), // "omni::canvas::FullSphere"
QT_MOC_LITERAL(1, 25, 7), // "version"
QT_MOC_LITERAL(2, 33, 5), // "1.1.0"
QT_MOC_LITERAL(3, 39, 6), // "author"
QT_MOC_LITERAL(4, 46, 18), // "Michael Winkelmann"
QT_MOC_LITERAL(5, 65, 3), // "url"
QT_MOC_LITERAL(6, 69, 16), // "http://omnido.me"
QT_MOC_LITERAL(7, 86, 4), // "name"
QT_MOC_LITERAL(8, 91, 17), // "FullSphere canvas"
QT_MOC_LITERAL(9, 109, 11), // "description"
QT_MOC_LITERAL(10, 121, 18) // "Copyright (C) 2016"

    },
    "omni::canvas::FullSphere\0version\0""1.1.0\0"
    "author\0Michael Winkelmann\0url\0"
    "http://omnido.me\0name\0FullSphere canvas\0"
    "description\0Copyright (C) 2016"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__canvas__FullSphere[] = {

 // content:
       8,       // revision
       0,       // classname
       5,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    8,
       9,   10,

       0        // eod
};

void omni::canvas::FullSphere::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject omni::canvas::FullSphere::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_omni__canvas__FullSphere.data,
    qt_meta_data_omni__canvas__FullSphere,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::canvas::FullSphere::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::canvas::FullSphere::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__canvas__FullSphere.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dome"))
        return static_cast< Dome*>(this);
    if (!strcmp(_clname, "org.omnidome.canvas.Interface"))
        return static_cast< omni::canvas::Interface*>(this);
    return QObject::qt_metacast(_clname);
}

int omni::canvas::FullSphere::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
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
    0x03,  0x6a,  'F',  'u',  'l',  'l',  'S',  'p', 
    'h',  'e',  'r',  'e', 
    0xff, 
};
using namespace omni;
using namespace omni::canvas;
QT_MOC_EXPORT_PLUGIN(omni::canvas::FullSphere, FullSphere)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
