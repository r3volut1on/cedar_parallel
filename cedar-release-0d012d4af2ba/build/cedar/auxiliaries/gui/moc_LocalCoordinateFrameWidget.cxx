/****************************************************************************
** Meta object code from reading C++ file 'LocalCoordinateFrameWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/LocalCoordinateFrameWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalCoordinateFrameWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__LocalCoordinateFrameWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x08,
      63,   44,   44,   44, 0x0a,
      72,   44,   44,   44, 0x08,
      85,   44,   44,   44, 0x08,
      98,   44,   44,   44, 0x08,
     111,   44,   44,   44, 0x08,
     124,   44,   44,   44, 0x08,
     137,   44,   44,   44, 0x08,
     150,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget[] = {
    "cedar::aux::gui::LocalCoordinateFrameWidget\0"
    "\0decimalsChanged()\0update()\0rotateXPos()\0"
    "rotateXNeg()\0rotateYPos()\0rotateYNeg()\0"
    "rotateZPos()\0rotateZNeg()\0"
    "positionChanged(double)\0"
};

void cedar::aux::gui::LocalCoordinateFrameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalCoordinateFrameWidget *_t = static_cast<LocalCoordinateFrameWidget *>(_o);
        switch (_id) {
        case 0: _t->decimalsChanged(); break;
        case 1: _t->update(); break;
        case 2: _t->rotateXPos(); break;
        case 3: _t->rotateXNeg(); break;
        case 4: _t->rotateYPos(); break;
        case 5: _t->rotateYNeg(); break;
        case 6: _t->rotateZPos(); break;
        case 7: _t->rotateZNeg(); break;
        case 8: _t->positionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::LocalCoordinateFrameWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::LocalCoordinateFrameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget,
      qt_meta_data_cedar__aux__gui__LocalCoordinateFrameWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::LocalCoordinateFrameWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::LocalCoordinateFrameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::LocalCoordinateFrameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__LocalCoordinateFrameWidget))
        return static_cast<void*>(const_cast< LocalCoordinateFrameWidget*>(this));
    if (!strcmp(_clname, "cedar::aux::Configurable"))
        return static_cast< cedar::aux::Configurable*>(const_cast< LocalCoordinateFrameWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::LocalCoordinateFrameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
