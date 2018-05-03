/****************************************************************************
** Meta object code from reading C++ file 'StepItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/StepItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StepItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__StepItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   27,   27,   27, 0x0a,
      65,   27,   27,   27, 0x0a,
      74,   27,   27,   27, 0x0a,
      98,   27,   27,   27, 0x08,
     128,   27,   27,   27, 0x08,
     152,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__StepItem[] = {
    "cedar::proc::gui::StepItem\0\0"
    "stepStateChanged()\0updateStepState()\0"
    "redraw()\0handleStepNameChanged()\0"
    "handleExternalActionButtons()\0"
    "openDefinedPlotAction()\0openActionsDock()\0"
};

void cedar::proc::gui::StepItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StepItem *_t = static_cast<StepItem *>(_o);
        switch (_id) {
        case 0: _t->stepStateChanged(); break;
        case 1: _t->updateStepState(); break;
        case 2: _t->redraw(); break;
        case 3: _t->handleStepNameChanged(); break;
        case 4: _t->handleExternalActionButtons(); break;
        case 5: _t->openDefinedPlotAction(); break;
        case 6: _t->openActionsDock(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::StepItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::StepItem::staticMetaObject = {
    { &cedar::proc::gui::Connectable::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__StepItem,
      qt_meta_data_cedar__proc__gui__StepItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::StepItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::StepItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::StepItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__StepItem))
        return static_cast<void*>(const_cast< StepItem*>(this));
    typedef cedar::proc::gui::Connectable QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::gui::StepItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::gui::Connectable QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::StepItem::stepStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
