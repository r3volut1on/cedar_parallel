/****************************************************************************
** Meta object code from reading C++ file 'Video.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/sources/Video.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__sources__Video[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   29,   28,   28, 0x0a,
      73,   28,   28,   28, 0x2a,
      87,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__sources__Video[] = {
    "cedar::proc::sources::Video\0\0"
    "emitOutputPropertyChanged\0updateVideo(bool)\0"
    "updateVideo()\0updateSpeedFactor()\0"
};

void cedar::proc::sources::Video::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Video *_t = static_cast<Video *>(_o);
        switch (_id) {
        case 0: _t->updateVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateVideo(); break;
        case 2: _t->updateSpeedFactor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::sources::Video::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::sources::Video::staticMetaObject = {
    { &cedar::proc::sources::GrabberBase::staticMetaObject, qt_meta_stringdata_cedar__proc__sources__Video,
      qt_meta_data_cedar__proc__sources__Video, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::sources::Video::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::sources::Video::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::sources::Video::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__sources__Video))
        return static_cast<void*>(const_cast< Video*>(this));
    typedef cedar::proc::sources::GrabberBase QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::sources::Video::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::sources::GrabberBase QMocSuperClass;
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
QT_END_MOC_NAMESPACE
