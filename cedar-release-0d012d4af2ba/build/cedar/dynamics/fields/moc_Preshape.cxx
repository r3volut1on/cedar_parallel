/****************************************************************************
** Meta object code from reading C++ file 'Preshape.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/fields/Preshape.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preshape.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dyn__Preshape[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      46,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dyn__Preshape[] = {
    "cedar::dyn::Preshape\0\0dimensionalityChanged()\0"
    "dimensionSizeChanged()\0"
};

void cedar::dyn::Preshape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Preshape *_t = static_cast<Preshape *>(_o);
        switch (_id) {
        case 0: _t->dimensionalityChanged(); break;
        case 1: _t->dimensionSizeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dyn::Preshape::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dyn::Preshape::staticMetaObject = {
    { &cedar::dyn::Dynamics::staticMetaObject, qt_meta_stringdata_cedar__dyn__Preshape,
      qt_meta_data_cedar__dyn__Preshape, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dyn::Preshape::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dyn::Preshape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dyn::Preshape::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__Preshape))
        return static_cast<void*>(const_cast< Preshape*>(this));
    typedef cedar::dyn::Dynamics QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::dyn::Preshape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::dyn::Dynamics QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
