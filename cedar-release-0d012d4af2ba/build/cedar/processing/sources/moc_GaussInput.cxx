/****************************************************************************
** Meta object code from reading C++ file 'GaussInput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/sources/GaussInput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GaussInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__sources__GaussInput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      49,   33,   33,   33, 0x0a,
      68,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__sources__GaussInput[] = {
    "cedar::proc::sources::GaussInput\0\0"
    "updateMatrix()\0updateMatrixSize()\0"
    "updateDimensionality()\0"
};

void cedar::proc::sources::GaussInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GaussInput *_t = static_cast<GaussInput *>(_o);
        switch (_id) {
        case 0: _t->updateMatrix(); break;
        case 1: _t->updateMatrixSize(); break;
        case 2: _t->updateDimensionality(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::sources::GaussInput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::sources::GaussInput::staticMetaObject = {
    { &cedar::proc::Step::staticMetaObject, qt_meta_stringdata_cedar__proc__sources__GaussInput,
      qt_meta_data_cedar__proc__sources__GaussInput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::sources::GaussInput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::sources::GaussInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::sources::GaussInput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__sources__GaussInput))
        return static_cast<void*>(const_cast< GaussInput*>(this));
    typedef cedar::proc::Step QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::sources::GaussInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::Step QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
