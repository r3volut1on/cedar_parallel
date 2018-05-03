/****************************************************************************
** Meta object code from reading C++ file 'PropertyPane.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/PropertyPane.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__PropertyPane[] = {

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
      31,   30,   30,   30, 0x0a,
      47,   30,   30,   30, 0x0a,
      56,   30,   30,   30, 0x0a,
      73,   30,   30,   30, 0x0a,
     107,  102,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__PropertyPane[] = {
    "cedar::aux::gui::PropertyPane\0\0"
    "resetContents()\0redraw()\0rowSizeChanged()\0"
    "parameterChangeFlagChanged()\0show\0"
    "showAdvanced(bool)\0"
};

void cedar::aux::gui::PropertyPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyPane *_t = static_cast<PropertyPane *>(_o);
        switch (_id) {
        case 0: _t->resetContents(); break;
        case 1: _t->redraw(); break;
        case 2: _t->rowSizeChanged(); break;
        case 3: _t->parameterChangeFlagChanged(); break;
        case 4: _t->showAdvanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::PropertyPane::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::PropertyPane::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__PropertyPane,
      qt_meta_data_cedar__aux__gui__PropertyPane, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::PropertyPane::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::PropertyPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::PropertyPane::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__PropertyPane))
        return static_cast<void*>(const_cast< PropertyPane*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int cedar::aux::gui::PropertyPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
