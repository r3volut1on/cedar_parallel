/****************************************************************************
** Meta object code from reading C++ file 'NeuralFieldView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/dynamics/gui/NeuralFieldView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NeuralFieldView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dyn__gui__NeuralFieldView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView[] = {
    "cedar::dyn::gui::NeuralFieldView\0\0"
    "updateIconDimensionality()\0"
};

void cedar::dyn::gui::NeuralFieldView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NeuralFieldView *_t = static_cast<NeuralFieldView *>(_o);
        switch (_id) {
        case 0: _t->updateIconDimensionality(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dyn::gui::NeuralFieldView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dyn::gui::NeuralFieldView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView,
      qt_meta_data_cedar__dyn__gui__NeuralFieldView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dyn::gui::NeuralFieldView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dyn::gui::NeuralFieldView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dyn::gui::NeuralFieldView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dyn__gui__NeuralFieldView))
        return static_cast<void*>(const_cast< NeuralFieldView*>(this));
    if (!strcmp(_clname, "cedar::proc::gui::DefaultConnectableIconView"))
        return static_cast< cedar::proc::gui::DefaultConnectableIconView*>(const_cast< NeuralFieldView*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dyn::gui::NeuralFieldView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE