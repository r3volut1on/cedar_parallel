/****************************************************************************
** Meta object code from reading C++ file 'MatrixPadding.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/steps/MatrixPadding.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MatrixPadding.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__steps__MatrixPadding[] = {

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
      35,   34,   34,   34, 0x08,
      54,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__steps__MatrixPadding[] = {
    "cedar::proc::steps::MatrixPadding\0\0"
    "updateOutputSize()\0recompute()\0"
};

void cedar::proc::steps::MatrixPadding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MatrixPadding *_t = static_cast<MatrixPadding *>(_o);
        switch (_id) {
        case 0: _t->updateOutputSize(); break;
        case 1: _t->recompute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::steps::MatrixPadding::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::steps::MatrixPadding::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__steps__MatrixPadding,
      qt_meta_data_cedar__proc__steps__MatrixPadding, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::steps::MatrixPadding::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::steps::MatrixPadding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::steps::MatrixPadding::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__steps__MatrixPadding))
        return static_cast<void*>(const_cast< MatrixPadding*>(this));
    typedef cedar::proc::Step QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::steps::MatrixPadding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
