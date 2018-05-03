/****************************************************************************
** Meta object code from reading C++ file 'ThreadWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/ThreadWrapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__ThreadWrapper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   26,   26,   26, 0x0a,
      64,   26,   26,   26, 0x0a,
      84,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__ThreadWrapper[] = {
    "cedar::aux::ThreadWrapper\0\0finishedThread()\0"
    "quittedThreadSlot()\0startedThreadSlot()\0"
    "finishedWorkSlot()\0"
};

void cedar::aux::ThreadWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadWrapper *_t = static_cast<ThreadWrapper *>(_o);
        switch (_id) {
        case 0: _t->finishedThread(); break;
        case 1: _t->quittedThreadSlot(); break;
        case 2: _t->startedThreadSlot(); break;
        case 3: _t->finishedWorkSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::ThreadWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::ThreadWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__ThreadWrapper,
      qt_meta_data_cedar__aux__ThreadWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::ThreadWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::ThreadWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::ThreadWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__ThreadWrapper))
        return static_cast<void*>(const_cast< ThreadWrapper*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< ThreadWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::ThreadWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::ThreadWrapper::finishedThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
