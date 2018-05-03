/****************************************************************************
** Meta object code from reading C++ file 'SceneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/SceneWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SceneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__SceneWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      51,   45,   29,   29, 0x0a,
      69,   45,   29,   29, 0x0a,
      86,   45,   29,   29, 0x0a,
     104,   45,   29,   29, 0x0a,
     122,   45,   29,   29, 0x0a,
     143,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__SceneWidget[] = {
    "cedar::aux::gui::SceneWidget\0\0"
    "deleteObject()\0value\0setLength(double)\0"
    "setWidth(double)\0setHeight(double)\0"
    "setRadius(double)\0setThickness(double)\0"
    "setActiveVisualization()\0"
};

void cedar::aux::gui::SceneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SceneWidget *_t = static_cast<SceneWidget *>(_o);
        switch (_id) {
        case 0: _t->deleteObject(); break;
        case 1: _t->setLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setThickness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setActiveVisualization(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::SceneWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::SceneWidget::staticMetaObject = {
    { &cedar::aux::gui::BaseWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__SceneWidget,
      qt_meta_data_cedar__aux__gui__SceneWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::SceneWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::SceneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::SceneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__SceneWidget))
        return static_cast<void*>(const_cast< SceneWidget*>(this));
    typedef cedar::aux::gui::BaseWidget QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::gui::SceneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::gui::BaseWidget QMocSuperClass;
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
QT_END_MOC_NAMESPACE
