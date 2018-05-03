/****************************************************************************
** Meta object code from reading C++ file 'KinematicChainCommandWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/KinematicChainCommandWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KinematicChainCommandWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__gui__KinematicChainCommandWidget[] = {

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
      46,   45,   45,   45, 0x0a,
      61,   55,   45,   45, 0x08,
      84,   45,   45,   45, 0x08,
     100,   45,   45,   45, 0x08,
     121,  115,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget[] = {
    "cedar::dev::gui::KinematicChainCommandWidget\0"
    "\0update()\0index\0changeWorkingMode(int)\0"
    "commandJoints()\0stopMovement()\0state\0"
    "setKeepSendingState(int)\0"
};

void cedar::dev::gui::KinematicChainCommandWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KinematicChainCommandWidget *_t = static_cast<KinematicChainCommandWidget *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->changeWorkingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->commandJoints(); break;
        case 3: _t->stopMovement(); break;
        case 4: _t->setKeepSendingState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::dev::gui::KinematicChainCommandWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::gui::KinematicChainCommandWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget,
      qt_meta_data_cedar__dev__gui__KinematicChainCommandWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::gui::KinematicChainCommandWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::gui::KinematicChainCommandWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::gui::KinematicChainCommandWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__KinematicChainCommandWidget))
        return static_cast<void*>(const_cast< KinematicChainCommandWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::dev::gui::KinematicChainCommandWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
