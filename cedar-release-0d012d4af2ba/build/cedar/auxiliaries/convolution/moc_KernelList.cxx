/****************************************************************************
** Meta object code from reading C++ file 'KernelList.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/convolution/KernelList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KernelList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__conv__KernelList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__conv__KernelList[] = {
    "cedar::aux::conv::KernelList\0\0"
    "combinedKernelUpdated()\0"
    "calculateCombinedKernel()\0"
};

void cedar::aux::conv::KernelList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KernelList *_t = static_cast<KernelList *>(_o);
        switch (_id) {
        case 0: _t->combinedKernelUpdated(); break;
        case 1: _t->calculateCombinedKernel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::conv::KernelList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::conv::KernelList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__conv__KernelList,
      qt_meta_data_cedar__aux__conv__KernelList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::conv::KernelList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::conv::KernelList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::conv::KernelList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__conv__KernelList))
        return static_cast<void*>(const_cast< KernelList*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::conv::KernelList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::conv::KernelList::combinedKernelUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
