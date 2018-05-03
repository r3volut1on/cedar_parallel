/****************************************************************************
** Meta object code from reading C++ file 'LoopedTrigger.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/processing/LoopedTrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoopedTrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__LoopedTrigger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,
      42,   27,   27,   27, 0x05,
      60,   27,   27,   27, 0x05,
      77,   27,   27,   27, 0x05,
      95,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__LoopedTrigger[] = {
    "cedar::proc::LoopedTrigger\0\0nameChanged()\0"
    "triggerStarting()\0triggerStarted()\0"
    "triggerStopping()\0triggerStopped()\0"
    "onNameChanged()\0"
};

void cedar::proc::LoopedTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoopedTrigger *_t = static_cast<LoopedTrigger *>(_o);
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->triggerStarting(); break;
        case 2: _t->triggerStarted(); break;
        case 3: _t->triggerStopping(); break;
        case 4: _t->triggerStopped(); break;
        case 5: _t->onNameChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::LoopedTrigger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::LoopedTrigger::staticMetaObject = {
    { &cedar::aux::LoopedThread::staticMetaObject, qt_meta_stringdata_cedar__proc__LoopedTrigger,
      qt_meta_data_cedar__proc__LoopedTrigger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::LoopedTrigger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::LoopedTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::LoopedTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__LoopedTrigger))
        return static_cast<void*>(const_cast< LoopedTrigger*>(this));
    if (!strcmp(_clname, "cedar::proc::Trigger"))
        return static_cast< cedar::proc::Trigger*>(const_cast< LoopedTrigger*>(this));
    typedef cedar::aux::LoopedThread QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::LoopedTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::LoopedThread QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::LoopedTrigger::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::proc::LoopedTrigger::triggerStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void cedar::proc::LoopedTrigger::triggerStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void cedar::proc::LoopedTrigger::triggerStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void cedar::proc::LoopedTrigger::triggerStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
