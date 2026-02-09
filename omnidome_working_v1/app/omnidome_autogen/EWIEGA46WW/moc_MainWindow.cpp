/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/app/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__MainWindow_t qt_meta_stringdata_omni__ui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "omni::ui::MainWindow"
QT_MOC_LITERAL(1, 21, 13), // "newProjection"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "saveProjection"
QT_MOC_LITERAL(4, 51, 16), // "saveProjectionAs"
QT_MOC_LITERAL(5, 68, 14), // "openProjection"
QT_MOC_LITERAL(6, 83, 9), // "_filename"
QT_MOC_LITERAL(7, 93, 9), // "editAsNew"
QT_MOC_LITERAL(8, 103, 14), // "updateAllViews"
QT_MOC_LITERAL(9, 118, 8), // "modified"
QT_MOC_LITERAL(10, 127, 11), // "buttonState"
QT_MOC_LITERAL(11, 139, 14), // "setTuningIndex"
QT_MOC_LITERAL(12, 154, 12), // "addProjector"
QT_MOC_LITERAL(13, 167, 8), // "QAction*"
QT_MOC_LITERAL(14, 176, 7), // "_action"
QT_MOC_LITERAL(15, 184, 7) // "setMode"

    },
    "omni::ui::MainWindow\0newProjection\0\0"
    "saveProjection\0saveProjectionAs\0"
    "openProjection\0_filename\0editAsNew\0"
    "updateAllViews\0modified\0buttonState\0"
    "setTuningIndex\0addProjector\0QAction*\0"
    "_action\0setMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void omni::ui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newProjection(); break;
        case 1: _t->saveProjection(); break;
        case 2: _t->saveProjectionAs(); break;
        case 3: _t->openProjection(); break;
        case 4: { bool _r = _t->openProjection((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->editAsNew(); break;
        case 6: _t->updateAllViews(); break;
        case 7: _t->modified(); break;
        case 8: _t->buttonState(); break;
        case 9: _t->setTuningIndex(); break;
        case 10: _t->addProjector((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->setMode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__MainWindow.data,
    qt_meta_data_omni__ui__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int omni::ui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
