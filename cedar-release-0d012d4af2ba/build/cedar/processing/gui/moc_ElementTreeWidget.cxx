/****************************************************************************
** Meta object code from reading C++ file 'ElementTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ElementTreeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElementTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__ElementTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x05,
      65,   36,   36,   36, 0x05,
     100,   95,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     149,  137,   36,   36, 0x08,
     171,  137,   36,   36, 0x08,
     195,   36,   36,   36, 0x08,
     229,  216,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget[] = {
    "cedar::proc::gui::ElementTreeWidget\0"
    "\0elementAddedSignal(QString)\0"
    "elementRemovedSignal(QString)\0item\0"
    "elementNameChanged(QTreeWidgetItem*)\0"
    "elementName\0elementAdded(QString)\0"
    "elementRemoved(QString)\0elementNameChanged()\0"
    "pItem,column\0itemChanged(QTreeWidgetItem*,int)\0"
};

void cedar::proc::gui::ElementTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementTreeWidget *_t = static_cast<ElementTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->elementAddedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->elementRemovedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->elementNameChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->elementAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->elementRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->elementNameChanged(); break;
        case 6: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ElementTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ElementTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget,
      qt_meta_data_cedar__proc__gui__ElementTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ElementTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ElementTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ElementTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ElementTreeWidget))
        return static_cast<void*>(const_cast< ElementTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ElementTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void cedar::proc::gui::ElementTreeWidget::elementAddedSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::ElementTreeWidget::elementRemovedSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::proc::gui::ElementTreeWidget::elementNameChanged(QTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
