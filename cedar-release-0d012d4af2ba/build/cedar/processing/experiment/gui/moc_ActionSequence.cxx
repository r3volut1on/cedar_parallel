/****************************************************************************
** Meta object code from reading C++ file 'ActionSequence.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../cedar/processing/experiment/gui/ActionSequence.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActionSequence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__experiment__gui__ActionSequence[] = {

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
      46,   45,   45,   45, 0x0a,
      55,   45,   45,   45, 0x08,
      64,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__experiment__gui__ActionSequence[] = {
    "cedar::proc::experiment::gui::ActionSequence\0"
    "\0update()\0remove()\0updateCondition()\0"
};

void cedar::proc::experiment::gui::ActionSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ActionSequence *_t = static_cast<ActionSequence *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->remove(); break;
        case 2: _t->updateCondition(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::experiment::gui::ActionSequence::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::experiment::gui::ActionSequence::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_cedar__proc__experiment__gui__ActionSequence,
      qt_meta_data_cedar__proc__experiment__gui__ActionSequence, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::experiment::gui::ActionSequence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::experiment::gui::ActionSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::experiment::gui::ActionSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__experiment__gui__ActionSequence))
        return static_cast<void*>(const_cast< ActionSequence*>(this));
    return QFrame::qt_metacast(_clname);
}

int cedar::proc::experiment::gui::ActionSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
