/****************************************************************************
** Meta object code from reading C++ file 'CppScript.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/processing/CppScript.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CppScript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__CppScript[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      40,   23,   23,   23, 0x05,
      56,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   23,   23,   23, 0x0a,
      93,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__CppScript[] = {
    "cedar::proc::CppScript\0\0scriptStarted()\0"
    "scriptStopped()\0statusChanged(QString)\0"
    "requestStop()\0threadStopped()\0"
};

void cedar::proc::CppScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CppScript *_t = static_cast<CppScript *>(_o);
        switch (_id) {
        case 0: _t->scriptStarted(); break;
        case 1: _t->scriptStopped(); break;
        case 2: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->requestStop(); break;
        case 4: _t->threadStopped(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::CppScript::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::CppScript::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__CppScript,
      qt_meta_data_cedar__proc__CppScript, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::CppScript::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::CppScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::CppScript::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__CppScript))
        return static_cast<void*>(const_cast< CppScript*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< CppScript*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::CppScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::CppScript::scriptStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::proc::CppScript::scriptStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void cedar::proc::CppScript::statusChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
