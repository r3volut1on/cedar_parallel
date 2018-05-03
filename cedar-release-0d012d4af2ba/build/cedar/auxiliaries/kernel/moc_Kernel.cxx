/****************************************************************************
** Meta object code from reading C++ file 'Kernel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/kernel/Kernel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Kernel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__kernel__Kernel[] = {

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
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   27,   27,   27, 0x0a,
      59,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__kernel__Kernel[] = {
    "cedar::aux::kernel::Kernel\0\0kernelUpdated()\0"
    "updateKernel()\0dimensionalityChanged()\0"
};

void cedar::aux::kernel::Kernel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Kernel *_t = static_cast<Kernel *>(_o);
        switch (_id) {
        case 0: _t->kernelUpdated(); break;
        case 1: _t->updateKernel(); break;
        case 2: _t->dimensionalityChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::kernel::Kernel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::kernel::Kernel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__kernel__Kernel,
      qt_meta_data_cedar__aux__kernel__Kernel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::kernel::Kernel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::kernel::Kernel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::kernel::Kernel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__kernel__Kernel))
        return static_cast<void*>(const_cast< Kernel*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< Kernel*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::kernel::Kernel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::aux::kernel::Kernel::kernelUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
