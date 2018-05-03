/****************************************************************************
** Meta object code from reading C++ file 'DoubleVectorParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/DoubleVectorParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DoubleVectorParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__DoubleVectorParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__DoubleVectorParameter[] = {
    "cedar::aux::gui::DoubleVectorParameter\0"
    "\0widgetValueChanged(double)\0"
};

void cedar::aux::gui::DoubleVectorParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DoubleVectorParameter *_t = static_cast<DoubleVectorParameter *>(_o);
        switch (_id) {
        case 0: _t->widgetValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::DoubleVectorParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::DoubleVectorParameter::staticMetaObject = {
    { &cedar::aux::gui::NumericVectorParameter<double,QDoubleSpinBox>::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__DoubleVectorParameter,
      qt_meta_data_cedar__aux__gui__DoubleVectorParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::DoubleVectorParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::DoubleVectorParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::DoubleVectorParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__DoubleVectorParameter))
        return static_cast<void*>(const_cast< DoubleVectorParameter*>(this));
    typedef cedar::aux::gui::NumericVectorParameter<double,QDoubleSpinBox> QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::DoubleVectorParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::NumericVectorParameter<double,QDoubleSpinBox> QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
