/****************************************************************************
** Meta object code from reading C++ file 'Experiment.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/experiment/Experiment.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Experiment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__experiment__Experiment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   37,   36,   36, 0x05,
      81,   69,   36,   36, 0x05,
     105,   36,   36,   36, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__experiment__Experiment[] = {
    "cedar::proc::experiment::Experiment\0"
    "\0running\0experimentRunning(bool)\0"
    "trialNumber\0trialNumberChanged(int)\0"
    "groupChanged()\0"
};

void cedar::proc::experiment::Experiment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Experiment *_t = static_cast<Experiment *>(_o);
        switch (_id) {
        case 0: _t->experimentRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->trialNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->groupChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::experiment::Experiment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::experiment::Experiment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__Experiment,
      qt_meta_data_cedar__proc__experiment__Experiment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::experiment::Experiment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::experiment::Experiment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::experiment::Experiment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__Experiment))
        return static_cast<void*>(const_cast< Experiment*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< Experiment*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::experiment::Experiment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::experiment::Experiment::experimentRunning(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::experiment::Experiment::trialNumberChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::proc::experiment::Experiment::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
