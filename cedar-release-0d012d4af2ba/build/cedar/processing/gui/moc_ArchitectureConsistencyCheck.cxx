/****************************************************************************
** Meta object code from reading C++ file 'ArchitectureConsistencyCheck.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ArchitectureConsistencyCheck.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArchitectureConsistencyCheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__ArchitectureConsistencyCheck[] = {

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
      48,   47,   47,   47, 0x0a,
      69,   58,   47,   47, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck[] = {
    "cedar::proc::gui::ArchitectureConsistencyCheck\0"
    "\0recheck()\0row,column\0itemAction(int,int)\0"
};

void cedar::proc::gui::ArchitectureConsistencyCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArchitectureConsistencyCheck *_t = static_cast<ArchitectureConsistencyCheck *>(_o);
        switch (_id) {
        case 0: _t->recheck(); break;
        case 1: _t->itemAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ArchitectureConsistencyCheck::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ArchitectureConsistencyCheck::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck,
      qt_meta_data_cedar__proc__gui__ArchitectureConsistencyCheck, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ArchitectureConsistencyCheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ArchitectureConsistencyCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ArchitectureConsistencyCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ArchitectureConsistencyCheck))
        return static_cast<void*>(const_cast< ArchitectureConsistencyCheck*>(this));
    if (!strcmp(_clname, "Ui_ConsistencyCheck"))
        return static_cast< Ui_ConsistencyCheck*>(const_cast< ArchitectureConsistencyCheck*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ArchitectureConsistencyCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
