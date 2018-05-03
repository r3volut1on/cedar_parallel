/****************************************************************************
** Meta object code from reading C++ file 'RecorderProperty.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/RecorderProperty.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecorderProperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__RecorderProperty[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   46,   35,   35, 0x08,
      84,   78,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__RecorderProperty[] = {
    "cedar::proc::gui::RecorderProperty\0\0"
    "changed()\0status\0registerRecordData(bool)\0"
    "value\0updateStepSize(int)\0"
};

void cedar::proc::gui::RecorderProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecorderProperty *_t = static_cast<RecorderProperty *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->registerRecordData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateStepSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::RecorderProperty::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::RecorderProperty::staticMetaObject = {
    { &QHBoxLayout::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__RecorderProperty,
      qt_meta_data_cedar__proc__gui__RecorderProperty, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::RecorderProperty::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::RecorderProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::RecorderProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__RecorderProperty))
        return static_cast<void*>(const_cast< RecorderProperty*>(this));
    return QHBoxLayout::qt_metacast(_clname);
}

int cedar::proc::gui::RecorderProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHBoxLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::RecorderProperty::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
