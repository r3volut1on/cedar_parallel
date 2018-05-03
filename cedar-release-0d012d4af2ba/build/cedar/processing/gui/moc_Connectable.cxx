/****************************************************************************
** Meta object code from reading C++ file 'Connectable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/Connectable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connectable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__Connectable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   31,   30,   30, 0x05,
     122,  101,   30,   30, 0x05,
     190,   31,   30,   30, 0x05,
     248,   30,   30,   30, 0x05,
     275,   30,   30,   30, 0x05,
     302,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     336,   30,   30,   30, 0x0a,
     362,   31,   30,   30, 0x0a,
     416,   31,   30,   30, 0x0a,
     468,  101,   30,   30, 0x0a,
     530,   30,   30,   30, 0x0a,
     554,  546,   30,   30, 0x0a,
     584,   30,   30,   30, 0x2a,
     610,   30,   30,   30, 0x0a,
     620,   30,   30,   30, 0x0a,
     640,   30,   30,   30, 0x08,
     661,   30,   30,   30, 0x08,
     682,   30,   30,   30, 0x08,
     705,   30,   30,   30, 0x08,
     730,  722,   30,   30, 0x08,
     766,   30,   30,   30, 0x08,
     784,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__Connectable[] = {
    "cedar::proc::gui::Connectable\0\0role,name\0"
    "reactToSlotRemovedSignal(cedar::proc::DataRole::Id,QString)\0"
    "role,oldName,newName\0"
    "reactToSlotRenamedSignal(cedar::proc::DataRole::Id,QString,QString)\0"
    "reactToSlotAddedSignal(cedar::proc::DataRole::Id,QString)\0"
    "triggerableStartedSignal()\0"
    "triggerableStoppedSignal()\0"
    "triggerableParentTriggerChanged()\0"
    "updateTriggerColorState()\0"
    "reactToSlotRemoved(cedar::proc::DataRole::Id,QString)\0"
    "reactToSlotAdded(cedar::proc::DataRole::Id,QString)\0"
    "reactToSlotRenamed(cedar::proc::DataRole::Id,QString,QString)\0"
    "closeAllPlots()\0visible\0"
    "toggleVisibilityOfPlots(bool)\0"
    "toggleVisibilityOfPlots()\0plotAll()\0"
    "removeChildWidget()\0triggerableStarted()\0"
    "triggerableStopped()\0assignTriggerClicked()\0"
    "openProperties()\0pAction\0"
    "displayStyleMenuTriggered(QAction*)\0"
    "saveDataClicked()\0loadDataClicked()\0"
};

void cedar::proc::gui::Connectable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Connectable *_t = static_cast<Connectable *>(_o);
        switch (_id) {
        case 0: _t->reactToSlotRemovedSignal((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->reactToSlotRenamedSignal((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->reactToSlotAddedSignal((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->triggerableStartedSignal(); break;
        case 4: _t->triggerableStoppedSignal(); break;
        case 5: _t->triggerableParentTriggerChanged(); break;
        case 6: _t->updateTriggerColorState(); break;
        case 7: _t->reactToSlotRemoved((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->reactToSlotAdded((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->reactToSlotRenamed((*reinterpret_cast< cedar::proc::DataRole::Id(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->closeAllPlots(); break;
        case 11: _t->toggleVisibilityOfPlots((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toggleVisibilityOfPlots(); break;
        case 13: _t->plotAll(); break;
        case 14: _t->removeChildWidget(); break;
        case 15: _t->triggerableStarted(); break;
        case 16: _t->triggerableStopped(); break;
        case 17: _t->assignTriggerClicked(); break;
        case 18: _t->openProperties(); break;
        case 19: _t->displayStyleMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 20: _t->saveDataClicked(); break;
        case 21: _t->loadDataClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::Connectable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::Connectable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__Connectable,
      qt_meta_data_cedar__proc__gui__Connectable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::Connectable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::Connectable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::Connectable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__Connectable))
        return static_cast<void*>(const_cast< Connectable*>(this));
    if (!strcmp(_clname, "cedar::proc::gui::Element"))
        return static_cast< cedar::proc::gui::Element*>(const_cast< Connectable*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::proc::gui::Connectable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::Connectable::reactToSlotRemovedSignal(cedar::proc::DataRole::Id _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::Connectable::reactToSlotRenamedSignal(cedar::proc::DataRole::Id _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::proc::gui::Connectable::reactToSlotAddedSignal(cedar::proc::DataRole::Id _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cedar::proc::gui::Connectable::triggerableStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void cedar::proc::gui::Connectable::triggerableStoppedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void cedar::proc::gui::Connectable::triggerableParentTriggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
