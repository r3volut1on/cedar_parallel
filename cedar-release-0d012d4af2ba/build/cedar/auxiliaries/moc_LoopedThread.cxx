/****************************************************************************
** Meta object code from reading C++ file 'LoopedThread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/LoopedThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoopedThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__LoopedThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__LoopedThread[] = {
    "cedar::aux::LoopedThread\0\0modeChanged()\0"
};

void cedar::aux::LoopedThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoopedThread *_t = static_cast<LoopedThread *>(_o);
        switch (_id) {
        case 0: _t->modeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::LoopedThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::LoopedThread::staticMetaObject = {
    { &cedar::aux::ThreadWrapper::staticMetaObject, qt_meta_stringdata_cedar__aux__LoopedThread,
      qt_meta_data_cedar__aux__LoopedThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::LoopedThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::LoopedThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::LoopedThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__LoopedThread))
        return static_cast<void*>(const_cast< LoopedThread*>(this));
    typedef cedar::aux::ThreadWrapper QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::LoopedThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::ThreadWrapper QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
