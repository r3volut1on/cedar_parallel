/****************************************************************************
** Meta object code from reading C++ file 'IterateDirectoryContents.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/experiment/action/IterateDirectoryContents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IterateDirectoryContents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__experiment__action__IterateDirectoryContents[] = {

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
      59,   58,   58,   58, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__experiment__action__IterateDirectoryContents[] = {
    "cedar::proc::experiment::action::IterateDirectoryContents\0"
    "\0updateDirectoryContents()\0"
};

void cedar::proc::experiment::action::IterateDirectoryContents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IterateDirectoryContents *_t = static_cast<IterateDirectoryContents *>(_o);
        switch (_id) {
        case 0: _t->updateDirectoryContents(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::experiment::action::IterateDirectoryContents::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::experiment::action::IterateDirectoryContents::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__action__IterateDirectoryContents,
      qt_meta_data_cedar__proc__experiment__action__IterateDirectoryContents, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::experiment::action::IterateDirectoryContents::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::experiment::action::IterateDirectoryContents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::experiment::action::IterateDirectoryContents::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__action__IterateDirectoryContents))
        return static_cast<void*>(const_cast< IterateDirectoryContents*>(this));
    if (!strcmp(_clname, "cedar::proc::experiment::action::SetParameterValue"))
        return static_cast< cedar::proc::experiment::action::SetParameterValue*>(const_cast< IterateDirectoryContents*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::experiment::action::IterateDirectoryContents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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