/****************************************************************************
** Meta object code from reading C++ file 'ActionParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/experiment/gui/ActionParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActionParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__experiment__gui__ActionParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x0a,
      73,   46,   46,   46, 0x0a,
      94,   46,   46,   46, 0x0a,
     114,   46,   46,   46, 0x0a,
     130,   46,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter[] = {
    "cedar::proc::experiment::gui::ActionParameter\0"
    "\0parameterPointerChanged()\0"
    "connectableChanged()\0actionListChanged()\0"
    "actionChanged()\0updateActions()\0"
};

void cedar::proc::experiment::gui::ActionParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionParameter *_t = static_cast<ActionParameter *>(_o);
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->connectableChanged(); break;
        case 2: _t->actionListChanged(); break;
        case 3: _t->actionChanged(); break;
        case 4: _t->updateActions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::experiment::gui::ActionParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::experiment::gui::ActionParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter,
      qt_meta_data_cedar__proc__experiment__gui__ActionParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::experiment::gui::ActionParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::experiment::gui::ActionParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::experiment::gui::ActionParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__gui__ActionParameter))
        return static_cast<void*>(const_cast< ActionParameter*>(this));
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::experiment::gui::ActionParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
