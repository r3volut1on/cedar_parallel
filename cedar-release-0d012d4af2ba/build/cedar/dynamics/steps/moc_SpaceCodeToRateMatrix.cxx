/****************************************************************************
** Meta object code from reading C++ file 'SpaceCodeToRateMatrix.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/steps/SpaceCodeToRateMatrix.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpaceCodeToRateMatrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dyn__SpaceCodeToRateMatrix[] = {

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
      35,   34,   34,   34, 0x0a,
      51,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dyn__SpaceCodeToRateMatrix[] = {
    "cedar::dyn::SpaceCodeToRateMatrix\0\0"
    "limitsChanged()\0outputSizesChanged()\0"
};

void cedar::dyn::SpaceCodeToRateMatrix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpaceCodeToRateMatrix *_t = static_cast<SpaceCodeToRateMatrix *>(_o);
        switch (_id) {
        case 0: _t->limitsChanged(); break;
        case 1: _t->outputSizesChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dyn::SpaceCodeToRateMatrix::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dyn::SpaceCodeToRateMatrix::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__dyn__SpaceCodeToRateMatrix,
      qt_meta_data_cedar__dyn__SpaceCodeToRateMatrix, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dyn::SpaceCodeToRateMatrix::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dyn::SpaceCodeToRateMatrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dyn::SpaceCodeToRateMatrix::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__SpaceCodeToRateMatrix))
        return static_cast<void*>(const_cast< SpaceCodeToRateMatrix*>(this));
    typedef cedar::proc::Step QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::dyn::SpaceCodeToRateMatrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::Step QMocSuperClass;
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
