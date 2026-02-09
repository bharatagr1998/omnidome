/****************************************************************************
** Meta object code from reading C++ file 'TuningList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../omnidome_masterv1/omnidome-master/app/proj/TuningList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TuningList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omni__ui__proj__TuningList_t {
    QByteArrayData data[22];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omni__ui__proj__TuningList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omni__ui__proj__TuningList_t qt_meta_stringdata_omni__ui__proj__TuningList = {
    {
QT_MOC_LITERAL(0, 0, 26), // "omni::ui::proj::TuningList"
QT_MOC_LITERAL(1, 27, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "dataModelChanged"
QT_MOC_LITERAL(4, 65, 11), // "tuningAdded"
QT_MOC_LITERAL(5, 77, 13), // "tuningRemoved"
QT_MOC_LITERAL(6, 91, 13), // "tuningChanged"
QT_MOC_LITERAL(7, 105, 17), // "sessionModeChange"
QT_MOC_LITERAL(8, 123, 9), // "addTuning"
QT_MOC_LITERAL(9, 133, 9), // "Projector"
QT_MOC_LITERAL(10, 143, 12), // "removeTuning"
QT_MOC_LITERAL(11, 156, 6), // "_index"
QT_MOC_LITERAL(12, 163, 16), // "setCurrentTuning"
QT_MOC_LITERAL(13, 180, 14), // "setTuningIndex"
QT_MOC_LITERAL(14, 195, 5), // "clear"
QT_MOC_LITERAL(15, 201, 11), // "updateViews"
QT_MOC_LITERAL(16, 213, 15), // "updateSceneSize"
QT_MOC_LITERAL(17, 229, 14), // "_rescaleValues"
QT_MOC_LITERAL(18, 244, 11), // "updateUnits"
QT_MOC_LITERAL(19, 256, 17), // "disableAllTunings"
QT_MOC_LITERAL(20, 274, 16), // "enableAllTunings"
QT_MOC_LITERAL(21, 291, 24) // "enableSelectedTuningOnly"

    },
    "omni::ui::proj::TuningList\0"
    "currentIndexChanged\0\0dataModelChanged\0"
    "tuningAdded\0tuningRemoved\0tuningChanged\0"
    "sessionModeChange\0addTuning\0Projector\0"
    "removeTuning\0_index\0setCurrentTuning\0"
    "setTuningIndex\0clear\0updateViews\0"
    "updateSceneSize\0_rescaleValues\0"
    "updateUnits\0disableAllTunings\0"
    "enableAllTunings\0enableSelectedTuningOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omni__ui__proj__TuningList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    0,  107,    2, 0x06 /* Public */,
       4,    0,  108,    2, 0x06 /* Public */,
       5,    0,  109,    2, 0x06 /* Public */,
       6,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  111,    2, 0x0a /* Public */,
       8,    0,  112,    2, 0x0a /* Public */,
       8,    1,  113,    2, 0x0a /* Public */,
      10,    1,  116,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    1,  120,    2, 0x0a /* Public */,
      14,    0,  123,    2, 0x0a /* Public */,
      15,    0,  124,    2, 0x0a /* Public */,
      16,    1,  125,    2, 0x0a /* Public */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    0,  129,    2, 0x0a /* Public */,
      20,    0,  130,    2, 0x0a /* Public */,
      21,    0,  131,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omni::ui::proj::TuningList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TuningList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->dataModelChanged(); break;
        case 2: _t->tuningAdded(); break;
        case 3: _t->tuningRemoved(); break;
        case 4: _t->tuningChanged(); break;
        case 5: _t->sessionModeChange(); break;
        case 6: _t->addTuning(); break;
        case 7: _t->addTuning((*reinterpret_cast< const Projector(*)>(_a[1]))); break;
        case 8: _t->removeTuning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setCurrentTuning(); break;
        case 10: _t->setTuningIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->clear(); break;
        case 12: _t->updateViews(); break;
        case 13: _t->updateSceneSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updateUnits(); break;
        case 15: _t->disableAllTunings(); break;
        case 16: _t->enableAllTunings(); break;
        case 17: _t->enableSelectedTuningOnly(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TuningList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TuningList::currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TuningList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TuningList::dataModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TuningList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TuningList::tuningAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TuningList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TuningList::tuningRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TuningList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TuningList::tuningChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omni::ui::proj::TuningList::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_omni__ui__proj__TuningList.data,
    qt_meta_data_omni__ui__proj__TuningList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omni::ui::proj::TuningList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omni::ui::proj::TuningList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omni__ui__proj__TuningList.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mixin::SharedDataModel<TuningList,Session>"))
        return static_cast< mixin::SharedDataModel<TuningList,Session>*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int omni::ui::proj::TuningList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void omni::ui::proj::TuningList::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omni::ui::proj::TuningList::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omni::ui::proj::TuningList::tuningAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omni::ui::proj::TuningList::tuningRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void omni::ui::proj::TuningList::tuningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
