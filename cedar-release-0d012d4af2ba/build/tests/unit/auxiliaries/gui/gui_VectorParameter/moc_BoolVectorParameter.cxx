/****************************************************************************
** Meta object code from reading C++ file 'BoolVectorParameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../tests/unit/auxiliaries/gui/gui_VectorParameter/BoolVectorParameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoolVectorParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BoolVectorParameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_BoolVectorParameter[] = {
    "BoolVectorParameter\0"
};

void BoolVectorParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BoolVectorParameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BoolVectorParameter::staticMetaObject = {
    { &cedar::aux::gui::BoolVectorParameter::staticMetaObject, qt_meta_stringdata_BoolVectorParameter,
      qt_meta_data_BoolVectorParameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BoolVectorParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BoolVectorParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BoolVectorParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoolVectorParameter))
        return static_cast<void*>(const_cast< BoolVectorParameter*>(this));
    typedef cedar::aux::gui::BoolVectorParameter QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BoolVectorParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::BoolVectorParameter QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
