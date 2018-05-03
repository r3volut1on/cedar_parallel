/****************************************************************************
** Meta object code from reading C++ file 'VideoGrabber.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/devices/sensors/visual/VideoGrabber.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoGrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__sensors__visual__VideoGrabber[] = {

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
      43,   42,   42,   42, 0x05,
      60,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   42,   42,   42, 0x09,
     101,   42,   42,   42, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber[] = {
    "cedar::dev::sensors::visual::VideoGrabber\0"
    "\0doVideoChanged()\0doSpeedFactorChanged()\0"
    "fileNameChanged()\0speedFactorChanged()\0"
};

void cedar::dev::sensors::visual::VideoGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VideoGrabber *_t = static_cast<VideoGrabber *>(_o);
        switch (_id) {
        case 0: _t->doVideoChanged(); break;
        case 1: _t->doSpeedFactorChanged(); break;
        case 2: _t->fileNameChanged(); break;
        case 3: _t->speedFactorChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dev::sensors::visual::VideoGrabber::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::sensors::visual::VideoGrabber::staticMetaObject = {
    { &cedar::dev::sensors::visual::Grabber::staticMetaObject, qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber,
      qt_meta_data_cedar__dev__sensors__visual__VideoGrabber, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::sensors::visual::VideoGrabber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::sensors::visual::VideoGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::sensors::visual::VideoGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__sensors__visual__VideoGrabber))
        return static_cast<void*>(const_cast< VideoGrabber*>(this));
    typedef cedar::dev::sensors::visual::Grabber QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::dev::sensors::visual::VideoGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::dev::sensors::visual::Grabber QMocSuperClass;
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

// SIGNAL 0
void cedar::dev::sensors::visual::VideoGrabber::doVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::dev::sensors::visual::VideoGrabber::doSpeedFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
