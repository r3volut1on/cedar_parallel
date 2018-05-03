/****************************************************************************
** Meta object code from reading C++ file 'GroupParameterDesigner.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/GroupParameterDesigner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupParameterDesigner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__GroupParameterDesigner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   42,   41,   41, 0x05,
      81,   42,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,   42,   41,   41, 0x08,
     149,   42,   41,   41, 0x08,
     186,   41,   41,   41, 0x08,
     199,   41,   41,   41, 0x08,
     227,  215,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__GroupParameterDesigner[] = {
    "cedar::proc::gui::GroupParameterDesigner\0"
    "\0pointer\0customParameterAdded(QVariant)\0"
    "customParameterRemoved(QVariant)\0"
    "customParameterAddedSlot(QVariant)\0"
    "customParameterRemovedSlot(QVariant)\0"
    "addClicked()\0deleteClicked()\0item,column\0"
    "itemChanged(QTreeWidgetItem*,int)\0"
};

void cedar::proc::gui::GroupParameterDesigner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupParameterDesigner *_t = static_cast<GroupParameterDesigner *>(_o);
        switch (_id) {
        case 0: _t->customParameterAdded((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->customParameterRemoved((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->customParameterAddedSlot((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->customParameterRemovedSlot((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->addClicked(); break;
        case 5: _t->deleteClicked(); break;
        case 6: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::GroupParameterDesigner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::GroupParameterDesigner::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__GroupParameterDesigner,
      qt_meta_data_cedar__proc__gui__GroupParameterDesigner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::GroupParameterDesigner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::GroupParameterDesigner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::GroupParameterDesigner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__GroupParameterDesigner))
        return static_cast<void*>(const_cast< GroupParameterDesigner*>(this));
    if (!strcmp(_clname, "Ui_GroupParameterDesigner"))
        return static_cast< Ui_GroupParameterDesigner*>(const_cast< GroupParameterDesigner*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::GroupParameterDesigner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::GroupParameterDesigner::customParameterAdded(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::GroupParameterDesigner::customParameterRemoved(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
