/****************************************************************************
** Meta object code from reading C++ file 'Properties.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/Properties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__sensors__camera__Properties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   61,   40,   40, 0x09,
     171,  152,   40,   40, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__sensors__camera__Properties[] = {
    "cedar::dev::sensors::camera::Properties\0"
    "\0propertiesChanged()\0propertyId,newValue\0"
    "propertyValueChanged(cedar::dev::sensors::camera::Property::Id,double)\0"
    "propertyId,newMode\0"
    "propertyModeChanged(cedar::dev::sensors::camera::Property::Id,cedar::d"
    "ev::sensors::camera::PropertyMode::Id)\0"
};

void cedar::dev::sensors::camera::Properties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Properties *_t = static_cast<Properties *>(_o);
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        case 1: _t->propertyValueChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->propertyModeChanged((*reinterpret_cast< cedar::dev::sensors::camera::Property::Id(*)>(_a[1])),(*reinterpret_cast< cedar::dev::sensors::camera::PropertyMode::Id(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::dev::sensors::camera::Properties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::sensors::camera::Properties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__camera__Properties,
      qt_meta_data_cedar__dev__sensors__camera__Properties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::sensors::camera::Properties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::sensors::camera::Properties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::sensors::camera::Properties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__Properties))
        return static_cast<void*>(const_cast< Properties*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< Properties*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::Properties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::dev::sensors::camera::Properties::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
