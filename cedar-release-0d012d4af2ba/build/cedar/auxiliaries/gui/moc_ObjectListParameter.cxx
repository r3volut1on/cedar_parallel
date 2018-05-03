/****************************************************************************
** Meta object code from reading C++ file 'ObjectListParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/ObjectListParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectListParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__ObjectListParameter[] = {

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
      38,   37,   37,   37, 0x08,
      64,   37,   37,   37, 0x08,
      77,   37,   37,   37, 0x08,
      99,   93,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__ObjectListParameter[] = {
    "cedar::aux::gui::ObjectListParameter\0"
    "\0parameterPointerChanged()\0addClicked()\0"
    "removeClicked()\0index\0"
    "currentInstanceIndexChanged(int)\0"
};

void cedar::aux::gui::ObjectListParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObjectListParameter *_t = static_cast<ObjectListParameter *>(_o);
        switch (_id) {
        case 0: _t->parameterPointerChanged(); break;
        case 1: _t->addClicked(); break;
        case 2: _t->removeClicked(); break;
        case 3: _t->currentInstanceIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::ObjectListParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::ObjectListParameter::staticMetaObject = {
    { &cedar::aux::gui::Parameter::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__ObjectListParameter,
      qt_meta_data_cedar__aux__gui__ObjectListParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::ObjectListParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::ObjectListParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::ObjectListParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__ObjectListParameter))
        return static_cast<void*>(const_cast< ObjectListParameter*>(this));
    typedef cedar::aux::gui::Parameter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::ObjectListParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
