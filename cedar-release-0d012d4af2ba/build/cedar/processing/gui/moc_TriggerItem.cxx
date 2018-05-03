/****************************************************************************
** Meta object code from reading C++ file 'TriggerItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/TriggerItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TriggerItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__TriggerItem[] = {

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
      31,   30,   30,   30, 0x08,
      54,   30,   30,   30, 0x08,
      71,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__TriggerItem[] = {
    "cedar::proc::gui::TriggerItem\0\0"
    "triggerStateChanging()\0triggerStarted()\0"
    "triggerStopped()\0"
};

void cedar::proc::gui::TriggerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TriggerItem *_t = static_cast<TriggerItem *>(_o);
        switch (_id) {
        case 0: _t->triggerStateChanging(); break;
        case 1: _t->triggerStarted(); break;
        case 2: _t->triggerStopped(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::TriggerItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::TriggerItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__TriggerItem,
      qt_meta_data_cedar__proc__gui__TriggerItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::TriggerItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::TriggerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::TriggerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__TriggerItem))
        return static_cast<void*>(const_cast< TriggerItem*>(this));
    if (!strcmp(_clname, "cedar::proc::gui::Element"))
        return static_cast< cedar::proc::gui::Element*>(const_cast< TriggerItem*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::gui::TriggerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
