/****************************************************************************
** Meta object code from reading C++ file 'QwtLinePlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/QwtLinePlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QwtLinePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__detail__QwtLinePlotWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      52,   44,   43,   43, 0x05,
      72,   43,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__detail__QwtLinePlotWorker[] = {
    "cedar::aux::gui::detail::QwtLinePlotWorker\0"
    "\0min,max\0done(double,double)\0dataChanged()\0"
    "convert()\0"
};

void cedar::aux::gui::detail::QwtLinePlotWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QwtLinePlotWorker *_t = static_cast<QwtLinePlotWorker *>(_o);
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->convert(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::detail::QwtLinePlotWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::detail::QwtLinePlotWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__QwtLinePlotWorker,
      qt_meta_data_cedar__aux__gui__detail__QwtLinePlotWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::detail::QwtLinePlotWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::detail::QwtLinePlotWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::detail::QwtLinePlotWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__QwtLinePlotWorker))
        return static_cast<void*>(const_cast< QwtLinePlotWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::gui::detail::QwtLinePlotWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void cedar::aux::gui::detail::QwtLinePlotWorker::done(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::aux::gui::detail::QwtLinePlotWorker::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_cedar__aux__gui__QwtLinePlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   29,   29,   29, 0x0a,
      67,   29,   29,   29, 0x0a,
     102,   90,   29,   29, 0x0a,
     138,   90,   29,   29, 0x0a,
     179,  174,   29,   29, 0x08,
     196,   29,   29,   29, 0x28,
     209,  174,   29,   29, 0x08,
     229,   29,   29,   29, 0x28,
     245,  174,   29,   29, 0x08,
     265,   29,   29,   29, 0x28,
     281,  174,   29,   29, 0x08,
     296,   29,   29,   29, 0x28,
     315,  307,   29,   29, 0x08,
     345,   29,   29,   29, 0x08,
     366,   29,   29,   29, 0x08,
     386,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__QwtLinePlot[] = {
    "cedar::aux::gui::QwtLinePlot\0\0convert()\0"
    "setAutomaticYAxisScaling()\0"
    "setFixedYAxisScaling()\0lower,upper\0"
    "setFixedYAxisScaling(double,double)\0"
    "setFixedXAxisScaling(double,double)\0"
    "show\0showLegend(bool)\0showLegend()\0"
    "showMajorGrid(bool)\0showMajorGrid()\0"
    "showMinorGrid(bool)\0showMinorGrid()\0"
    "showGrid(bool)\0showGrid()\0min,max\0"
    "conversionDone(double,double)\0"
    "autoScalingChanged()\0axisLimitsChanged()\0"
    "gridVisibilityChanged()\0"
};

void cedar::aux::gui::QwtLinePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QwtLinePlot *_t = static_cast<QwtLinePlot *>(_o);
        switch (_id) {
        case 0: _t->convert(); break;
        case 1: _t->setAutomaticYAxisScaling(); break;
        case 2: _t->setFixedYAxisScaling(); break;
        case 3: _t->setFixedYAxisScaling((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setFixedXAxisScaling((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showLegend(); break;
        case 7: _t->showMajorGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showMajorGrid(); break;
        case 9: _t->showMinorGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showMinorGrid(); break;
        case 11: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->showGrid(); break;
        case 13: _t->conversionDone((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->autoScalingChanged(); break;
        case 15: _t->axisLimitsChanged(); break;
        case 16: _t->gridVisibilityChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::QwtLinePlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::QwtLinePlot::staticMetaObject = {
    { &cedar::aux::gui::MultiPlotInterface::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__QwtLinePlot,
      qt_meta_data_cedar__aux__gui__QwtLinePlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::QwtLinePlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::QwtLinePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::QwtLinePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__QwtLinePlot))
        return static_cast<void*>(const_cast< QwtLinePlot*>(this));
    typedef cedar::aux::gui::MultiPlotInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::QwtLinePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::MultiPlotInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::QwtLinePlot::convert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
