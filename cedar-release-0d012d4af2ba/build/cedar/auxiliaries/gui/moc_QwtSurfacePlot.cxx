/****************************************************************************
** Meta object code from reading C++ file 'QwtSurfacePlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/QwtSurfacePlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QwtSurfacePlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__detail__QwtSurfacePlotWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   46,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__detail__QwtSurfacePlotWorker[] = {
    "cedar::aux::gui::detail::QwtSurfacePlotWorker\0"
    "\0done()\0convert()\0"
};

void cedar::aux::gui::detail::QwtSurfacePlotWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QwtSurfacePlotWorker *_t = static_cast<QwtSurfacePlotWorker *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->convert(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::gui::detail::QwtSurfacePlotWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::detail::QwtSurfacePlotWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__detail__QwtSurfacePlotWorker,
      qt_meta_data_cedar__aux__gui__detail__QwtSurfacePlotWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::detail::QwtSurfacePlotWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::detail::QwtSurfacePlotWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::detail::QwtSurfacePlotWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__detail__QwtSurfacePlotWorker))
        return static_cast<void*>(const_cast< QwtSurfacePlotWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::gui::detail::QwtSurfacePlotWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::detail::QwtSurfacePlotWorker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_cedar__aux__gui__QwtSurfacePlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__QwtSurfacePlot[] = {
    "cedar::aux::gui::QwtSurfacePlot\0\0"
    "convert()\0conversionDone()\0"
};

void cedar::aux::gui::QwtSurfacePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QwtSurfacePlot *_t = static_cast<QwtSurfacePlot *>(_o);
        switch (_id) {
        case 0: _t->convert(); break;
        case 1: _t->conversionDone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::gui::QwtSurfacePlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::QwtSurfacePlot::staticMetaObject = {
    { &PlotInterface::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__QwtSurfacePlot,
      qt_meta_data_cedar__aux__gui__QwtSurfacePlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::QwtSurfacePlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::QwtSurfacePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::QwtSurfacePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__QwtSurfacePlot))
        return static_cast<void*>(const_cast< QwtSurfacePlot*>(this));
    return PlotInterface::qt_metacast(_clname);
}

int cedar::aux::gui::QwtSurfacePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::QwtSurfacePlot::convert()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE