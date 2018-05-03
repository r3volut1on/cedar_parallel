/****************************************************************************
** Meta object code from reading C++ file 'QImagePlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/QImagePlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QImagePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__detail__QImagePlotLegend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      51,   43,   42,   42, 0x0a,
      88,   79,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend[] = {
    "cedar::aux::gui::detail::QImagePlotLegend\0"
    "\0min,max\0updateMinMax(double,double)\0"
    "gradient\0setGradient(cedar::aux::ColorGradientPtr)\0"
};

void cedar::aux::gui::detail::QImagePlotLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QImagePlotLegend *_t = static_cast<QImagePlotLegend *>(_o);
        switch (_id) {
        case 0: _t->updateMinMax((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setGradient((*reinterpret_cast< cedar::aux::ColorGradientPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::detail::QImagePlotLegend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::detail::QImagePlotLegend::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend,
      qt_meta_data_cedar__aux__gui__detail__QImagePlotLegend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::detail::QImagePlotLegend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::detail::QImagePlotLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::detail::QImagePlotLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__QImagePlotLegend))
        return static_cast<void*>(const_cast< QImagePlotLegend*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::detail::QImagePlotLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_cedar__aux__gui__QImagePlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   29,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   66,   28,   28, 0x0a,
     112,   96,   28,   28, 0x0a,
     142,  137,   28,   28, 0x0a,
     159,   29,   28,   28, 0x09,
     187,   28,   28,   28, 0x09,
     209,   28,   28,   28, 0x08,
     232,   28,   28,   28, 0x08,
     252,   28,   28,   28, 0x08,
     273,   28,   28,   28, 0x08,
     291,   28,   28,   28, 0x08,
     317,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__QImagePlot[] = {
    "cedar::aux::gui::QImagePlot\0\0min,max\0"
    "minMaxChanged(double,double)\0smooth\0"
    "setSmoothScaling(bool)\0keepAspectRatio\0"
    "setKeepAspectRatio(bool)\0show\0"
    "showLegend(bool)\0updateMinMax(double,double)\0"
    "setAutomaticScaling()\0queryFixedValueScale()\0"
    "showLegendChanged()\0valueLimitsChanged()\0"
    "colorJetChanged()\0colorJetActionTriggered()\0"
    "saveImageActionTriggered()\0"
};

void cedar::aux::gui::QImagePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QImagePlot *_t = static_cast<QImagePlot *>(_o);
        switch (_id) {
        case 0: _t->minMaxChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setSmoothScaling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setKeepAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateMinMax((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setAutomaticScaling(); break;
        case 6: _t->queryFixedValueScale(); break;
        case 7: _t->showLegendChanged(); break;
        case 8: _t->valueLimitsChanged(); break;
        case 9: _t->colorJetChanged(); break;
        case 10: _t->colorJetActionTriggered(); break;
        case 11: _t->saveImageActionTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::QImagePlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::QImagePlot::staticMetaObject = {
    { &cedar::aux::gui::ThreadedPlot::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__QImagePlot,
      qt_meta_data_cedar__aux__gui__QImagePlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::QImagePlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::QImagePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::QImagePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__QImagePlot))
        return static_cast<void*>(const_cast< QImagePlot*>(this));
    typedef cedar::aux::gui::ThreadedPlot QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::QImagePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::ThreadedPlot QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::QImagePlot::minMaxChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
