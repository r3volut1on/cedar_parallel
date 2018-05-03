/****************************************************************************
** Meta object code from reading C++ file 'Channel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/camera/Channel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Channel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__sensors__camera__Channel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x05,
      53,   37,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   37,   37,   37, 0x09,
      85,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__sensors__camera__Channel[] = {
    "cedar::dev::sensors::camera::Channel\0"
    "\0changeCamera()\0changeSetting()\0"
    "deviceChanged()\0grabModeChanged()\0"
};

void cedar::dev::sensors::camera::Channel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Channel *_t = static_cast<Channel *>(_o);
        switch (_id) {
        case 0: _t->changeCamera(); break;
        case 1: _t->changeSetting(); break;
        case 2: _t->deviceChanged(); break;
        case 3: _t->grabModeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dev::sensors::camera::Channel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::sensors::camera::Channel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__camera__Channel,
      qt_meta_data_cedar__dev__sensors__camera__Channel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::sensors::camera::Channel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::sensors::camera::Channel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::sensors::camera::Channel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__camera__Channel))
        return static_cast<void*>(const_cast< Channel*>(this));
    if (!strcmp(_clname, "cedar::dev::sensors::visual::GrabberChannel"))
        return static_cast< cedar::dev::sensors::visual::GrabberChannel*>(const_cast< Channel*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::sensors::camera::Channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cedar::dev::sensors::camera::Channel::changeCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::dev::sensors::camera::Channel::changeSetting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
