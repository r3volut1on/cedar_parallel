/****************************************************************************
** Meta object code from reading C++ file 'ThreadedPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/ThreadedPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadedPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__ThreadedPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      56,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   30,   30,   30, 0x08,
      96,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__ThreadedPlot[] = {
    "cedar::aux::gui::ThreadedPlot\0\0"
    "conversionFailedSignal()\0"
    "conversionDoneSignal()\0conversionDone()\0"
    "conversionFailed()\0"
};

void cedar::aux::gui::ThreadedPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThreadedPlot *_t = static_cast<ThreadedPlot *>(_o);
        switch (_id) {
        case 0: _t->conversionFailedSignal(); break;
        case 1: _t->conversionDoneSignal(); break;
        case 2: _t->conversionDone(); break;
        case 3: _t->conversionFailed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::gui::ThreadedPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::ThreadedPlot::staticMetaObject = {
    { &cedar::aux::gui::PlotInterface::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__ThreadedPlot,
      qt_meta_data_cedar__aux__gui__ThreadedPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::ThreadedPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::ThreadedPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::ThreadedPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__ThreadedPlot))
        return static_cast<void*>(const_cast< ThreadedPlot*>(this));
    typedef cedar::aux::gui::PlotInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::ThreadedPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::PlotInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::ThreadedPlot::conversionFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::aux::gui::ThreadedPlot::conversionDoneSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
