/****************************************************************************
** Meta object code from reading C++ file 'SimulationControl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/SimulationControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulationControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget[] = {

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
      66,   65,   65,   65, 0x08,
      92,   65,   65,   65, 0x08,
     109,   65,   65,   65, 0x08,
     126,   65,   65,   65, 0x08,
     149,   65,   65,   65, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget[] = {
    "cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget\0"
    "\0startStopTriggerClicked()\0triggerStarted()\0"
    "triggerStopped()\0triggerChangingState()\0"
    "singleStepClicked()\0"
};

void cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TriggerControlWidget *_t = static_cast<TriggerControlWidget *>(_o);
        switch (_id) {
        case 0: _t->startStopTriggerClicked(); break;
        case 1: _t->triggerStarted(); break;
        case 2: _t->triggerStopped(); break;
        case 3: _t->triggerChangingState(); break;
        case 4: _t->singleStepClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget,
      qt_meta_data_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__SimulationControlPrivate__TriggerControlWidget))
        return static_cast<void*>(const_cast< TriggerControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::SimulationControlPrivate::TriggerControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_cedar__proc__gui__SimulationControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   37,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   36,   36,   36, 0x08,
     107,   36,   36,   36, 0x08,
     124,   36,   36,   36, 0x08,
     145,   36,   36,   36, 0x08,
     161,   36,   36,   36, 0x08,
     177,   36,   36,   36, 0x08,
     202,   36,   36,   36, 0x08,
     235,  223,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__SimulationControl[] = {
    "cedar::proc::gui::SimulationControl\0"
    "\0path\0signalTriggerCountChanged(QString)\0"
    "startPauseSimulationClicked()\0"
    "triggerStarted()\0allTriggersStopped()\0"
    "createClicked()\0removeClicked()\0"
    "updateAllTriggerColors()\0elementNameChanged()\0"
    "triggerPath\0triggerCountChanged(QString)\0"
};

void cedar::proc::gui::SimulationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationControl *_t = static_cast<SimulationControl *>(_o);
        switch (_id) {
        case 0: _t->signalTriggerCountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->startPauseSimulationClicked(); break;
        case 2: _t->triggerStarted(); break;
        case 3: _t->allTriggersStopped(); break;
        case 4: _t->createClicked(); break;
        case 5: _t->removeClicked(); break;
        case 6: _t->updateAllTriggerColors(); break;
        case 7: _t->elementNameChanged(); break;
        case 8: _t->triggerCountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::SimulationControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::SimulationControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__SimulationControl,
      qt_meta_data_cedar__proc__gui__SimulationControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::SimulationControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::SimulationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::SimulationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__SimulationControl))
        return static_cast<void*>(const_cast< SimulationControl*>(this));
    if (!strcmp(_clname, "Ui_SimulationControl"))
        return static_cast< Ui_SimulationControl*>(const_cast< SimulationControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::SimulationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::SimulationControl::signalTriggerCountChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
