/****************************************************************************
** Meta object code from reading C++ file 'ExperimentDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ExperimentDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExperimentDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__ExperimentDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      45,   35,   35,   35, 0x08,
      67,   35,   35,   35, 0x08,
      74,   35,   35,   35, 0x08,
      83,   35,   35,   35, 0x08,
      90,   35,   35,   35, 0x08,
     104,   35,   35,   35, 0x08,
     124,   35,   35,   35, 0x08,
     139,   35,   35,   35, 0x08,
     155,   35,   35,   35, 0x08,
     179,  172,   35,   35, 0x08,
     210,  203,   35,   35, 0x08,
     234,   35,   35,   35, 0x08,
     247,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ExperimentDialog[] = {
    "cedar::proc::gui::ExperimentDialog\0\0"
    "redraw()\0createNewExperiment()\0save()\0"
    "saveAs()\0load()\0nameChanged()\0"
    "addActionSequence()\0trialChanged()\0"
    "runExperiment()\0stopExperiment()\0"
    "status\0experimentRunning(bool)\0number\0"
    "trialNumberChanged(int)\0timeUpdate()\0"
    "repeatChecked(bool)\0"
};

void cedar::proc::gui::ExperimentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExperimentDialog *_t = static_cast<ExperimentDialog *>(_o);
        switch (_id) {
        case 0: _t->redraw(); break;
        case 1: _t->createNewExperiment(); break;
        case 2: _t->save(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->load(); break;
        case 5: _t->nameChanged(); break;
        case 6: _t->addActionSequence(); break;
        case 7: _t->trialChanged(); break;
        case 8: _t->runExperiment(); break;
        case 9: _t->stopExperiment(); break;
        case 10: _t->experimentRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->trialNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->timeUpdate(); break;
        case 13: _t->repeatChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ExperimentDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ExperimentDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ExperimentDialog,
      qt_meta_data_cedar__proc__gui__ExperimentDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ExperimentDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ExperimentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ExperimentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ExperimentDialog))
        return static_cast<void*>(const_cast< ExperimentDialog*>(this));
    if (!strcmp(_clname, "Ui_ExperimentDialog"))
        return static_cast< Ui_ExperimentDialog*>(const_cast< ExperimentDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ExperimentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
