/****************************************************************************
** Meta object code from reading C++ file 'Grabber.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/Grabber.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Grabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__sensors__camera__Grabber[] = {

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
      38,   37,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   37,   37,   37, 0x09,
      74,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__sensors__camera__Grabber[] = {
    "cedar::dev::sensors::camera::Grabber\0"
    "\0frameSizeChanged()\0settingChanged()\0"
    "backendChanged()\0"
};

void cedar::dev::sensors::camera::Grabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Grabber *_t = static_cast<Grabber *>(_o);
        switch (_id) {
        case 0: _t->frameSizeChanged(); break;
        case 1: _t->settingChanged(); break;
        case 2: _t->backendChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dev::sensors::camera::Grabber::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::sensors::camera::Grabber::staticMetaObject = {
    { &cedar::dev::sensors::visual::Grabber::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__camera__Grabber,
      qt_meta_data_cedar__dev__sensors__camera__Grabber, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::sensors::camera::Grabber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::sensors::camera::Grabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::sensors::camera::Grabber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__Grabber))
        return static_cast<void*>(const_cast< Grabber*>(this));
    typedef cedar::dev::sensors::visual::Grabber QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::Grabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::dev::sensors::visual::Grabber QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
void cedar::dev::sensors::camera::Grabber::frameSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
