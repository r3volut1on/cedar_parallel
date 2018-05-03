/****************************************************************************
** Meta object code from reading C++ file 'Projection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/Projection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Projection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__steps__Projection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x09,
      62,   31,   31,   31, 0x09,
     110,   92,   31,   31, 0x09,
     128,   31,   31,   31, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__steps__Projection[] = {
    "cedar::proc::steps::Projection\0\0"
    "outputDimensionalityChanged()\0"
    "outputDimensionSizesChanged()\0"
    "triggerSubsequent\0reconfigure(bool)\0"
    "reconfigure()\0"
};

void cedar::proc::steps::Projection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Projection *_t = static_cast<Projection *>(_o);
        switch (_id) {
        case 0: _t->outputDimensionalityChanged(); break;
        case 1: _t->outputDimensionSizesChanged(); break;
        case 2: _t->reconfigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reconfigure(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::steps::Projection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::steps::Projection::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__Projection,
      qt_meta_data_cedar__proc__steps__Projection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::steps::Projection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::steps::Projection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::steps::Projection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__Projection))
        return static_cast<void*>(const_cast< Projection*>(this));
    typedef cedar::proc::Step QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::steps::Projection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::Step QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
