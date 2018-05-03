/****************************************************************************
** Meta object code from reading C++ file 'Group.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/processing/Group.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__Group[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,
      69,   19,   19,   19, 0x05,
      86,   19,   19,   19, 0x05,
     107,   19,   19,   19, 0x05,
     139,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,   19,   19,   19, 0x08,
     171,   19,   19,   19, 0x08,
     189,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__Group[] = {
    "cedar::proc::Group\0\0from,to\0"
    "stepNameChanged(std::string,std::string)\0"
    "triggerStarted()\0allTriggersStopped()\0"
    "triggerableStateCountsChanged()\0"
    "loopedChanged()\0onNameChanged()\0"
    "onLoopedChanged()\0triggerStopped()\0"
};

void cedar::proc::Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Group *_t = static_cast<Group *>(_o);
        switch (_id) {
        case 0: _t->stepNameChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->triggerStarted(); break;
        case 2: _t->allTriggersStopped(); break;
        case 3: _t->triggerableStateCountsChanged(); break;
        case 4: _t->loopedChanged(); break;
        case 5: _t->onNameChanged(); break;
        case 6: _t->onLoopedChanged(); break;
        case 7: _t->triggerStopped(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::Group::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::Group::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_cedar__proc__Group,
      qt_meta_data_cedar__proc__Group, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::Group::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::Group::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__Group))
        return static_cast<void*>(const_cast< Group*>(this));
    if (!strcmp(_clname, "cedar::proc::Connectable"))
        return static_cast< cedar::proc::Connectable*>(const_cast< Group*>(this));
    if (!strcmp(_clname, "cedar::proc::Triggerable"))
        return static_cast< cedar::proc::Triggerable*>(const_cast< Group*>(this));
    return QThread::qt_metacast(_clname);
}

int cedar::proc::Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::Group::stepNameChanged(const std::string & _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::Group::triggerStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void cedar::proc::Group::allTriggersStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void cedar::proc::Group::triggerableStateCountsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void cedar::proc::Group::loopedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
