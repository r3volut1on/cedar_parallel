/****************************************************************************
** Meta object code from reading C++ file 'View.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/View.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__View[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   62,   23,   23, 0x0a,
      89,   23,   23,   23, 0x0a,
     118,  108,   23,   23, 0x08,
     139,   23,   23,   23, 0x08,
     156,   23,   23,   23, 0x08,
     176,   23,   23,   23, 0x08,
     196,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__View[] = {
    "cedar::proc::gui::View\0\0newZoomLevel\0"
    "zoomLevelChanged(double)\0newLevel\0"
    "setZoomLevel(int)\0scrollTimerEvent()\0"
    "zoomLevel\0zoomLevelSet(double)\0"
    "resetZoomLevel()\0increaseZoomLevel()\0"
    "decreaseZoomLevel()\0fitZoomToArchitecture()\0"
};

void cedar::proc::gui::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        View *_t = static_cast<View *>(_o);
        switch (_id) {
        case 0: _t->zoomLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setZoomLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scrollTimerEvent(); break;
        case 3: _t->zoomLevelSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->resetZoomLevel(); break;
        case 5: _t->increaseZoomLevel(); break;
        case 6: _t->decreaseZoomLevel(); break;
        case 7: _t->fitZoomToArchitecture(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::View::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::View::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__View,
      qt_meta_data_cedar__proc__gui__View, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::View::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__View))
        return static_cast<void*>(const_cast< View*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int cedar::proc::gui::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::View::zoomLevelChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
