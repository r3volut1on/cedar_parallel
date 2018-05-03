/****************************************************************************
** Meta object code from reading C++ file 'ProjectionMappingParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ProjectionMappingParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectionMappingParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__ProjectionMappingParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      46,   45,   45,   45, 0x0a,
      78,   72,   45,   45, 0x0a,
     103,   45,   45,   45, 0x0a,
     118,   45,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter[] = {
    "cedar::proc::gui::ProjectionMappingParameter\0"
    "\0parameterPointerChanged()\0index\0"
    "currentIndexChanged(int)\0valueChanged()\0"
    "propertyChanged()\0"
};

void cedar::proc::gui::ProjectionMappingParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectionMappingParameter *_t = static_cast<ProjectionMappingParameter *>(_o);
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valueChanged(); break;
        case 3: _t->propertyChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ProjectionMappingParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ProjectionMappingParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter,
      qt_meta_data_cedar__proc__gui__ProjectionMappingParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ProjectionMappingParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ProjectionMappingParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ProjectionMappingParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ProjectionMappingParameter))
        return static_cast<void*>(const_cast< ProjectionMappingParameter*>(this));
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::gui::ProjectionMappingParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
