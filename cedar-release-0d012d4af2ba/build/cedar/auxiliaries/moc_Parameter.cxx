/****************************************************************************
** Meta object code from reading C++ file 'Parameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/Parameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Parameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__Parameter[] = {

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
      23,   22,   22,   22, 0x05,
      38,   22,   22,   22, 0x05,
      56,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__Parameter[] = {
    "cedar::aux::Parameter\0\0valueChanged()\0"
    "propertyChanged()\0changedFlagChanged()\0"
};

void cedar::aux::Parameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Parameter *_t = static_cast<Parameter *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->propertyChanged(); break;
        case 2: _t->changedFlagChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::Parameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::Parameter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__Parameter,
      qt_meta_data_cedar__aux__Parameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::Parameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::Parameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::Parameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__Parameter))
        return static_cast<void*>(const_cast< Parameter*>(this));
    if (!strcmp(_clname, "cedar::aux::IntrusivePtrBase"))
        return static_cast< cedar::aux::IntrusivePtrBase*>(const_cast< Parameter*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::Parameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::Parameter::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::aux::Parameter::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void cedar::aux::Parameter::changedFlagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
