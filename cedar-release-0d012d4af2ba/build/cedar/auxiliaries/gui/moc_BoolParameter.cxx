/****************************************************************************
** Meta object code from reading C++ file 'BoolParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/BoolParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoolParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__BoolParameter[] = {

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
      32,   31,   31,   31, 0x0a,
      64,   58,   31,   31, 0x0a,
      82,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__BoolParameter[] = {
    "cedar::aux::gui::BoolParameter\0\0"
    "parameterPointerChanged()\0state\0"
    "stateChanged(int)\0parameterValueChanged()\0"
};

void cedar::aux::gui::BoolParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BoolParameter *_t = static_cast<BoolParameter *>(_o);
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->parameterValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::BoolParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::BoolParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__BoolParameter,
      qt_meta_data_cedar__aux__gui__BoolParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::BoolParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::BoolParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::BoolParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__BoolParameter))
        return static_cast<void*>(const_cast< BoolParameter*>(this));
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::BoolParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::Parameter QMocSuperClass;
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
