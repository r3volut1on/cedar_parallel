/****************************************************************************
** Meta object code from reading C++ file 'AdvancedParameterLinker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/AdvancedParameterLinker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdvancedParameterLinker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__AdvancedParameterLinker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   42,   42,   42, 0x08,
      66,   42,   42,   42, 0x08,
      84,   42,   42,   42, 0x08,
     101,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__AdvancedParameterLinker[] = {
    "cedar::proc::gui::AdvancedParameterLinker\0"
    "\0itemSelectionChanged()\0linkInfoChanged()\0"
    "addLinkClicked()\0removeLinkClicked()\0"
};

void cedar::proc::gui::AdvancedParameterLinker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedParameterLinker *_t = static_cast<AdvancedParameterLinker *>(_o);
        switch (_id) {
        case 0: _t->itemSelectionChanged(); break;
        case 1: _t->linkInfoChanged(); break;
        case 2: _t->addLinkClicked(); break;
        case 3: _t->removeLinkClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::AdvancedParameterLinker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::AdvancedParameterLinker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__AdvancedParameterLinker,
      qt_meta_data_cedar__proc__gui__AdvancedParameterLinker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::AdvancedParameterLinker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::AdvancedParameterLinker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::AdvancedParameterLinker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__AdvancedParameterLinker))
        return static_cast<void*>(const_cast< AdvancedParameterLinker*>(this));
    if (!strcmp(_clname, "Ui_AdvancedParameterLinker"))
        return static_cast< Ui_AdvancedParameterLinker*>(const_cast< AdvancedParameterLinker*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::AdvancedParameterLinker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
