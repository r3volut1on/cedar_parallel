/****************************************************************************
** Meta object code from reading C++ file 'FindDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/FindDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__FindDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      59,   29,   29,   29, 0x08,
      85,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__FindDialog[] = {
    "cedar::proc::gui::FindDialog\0\0"
    "searchStringChangedChanged()\0"
    "checkButtonAvailability()\0findNext()\0"
};

void cedar::proc::gui::FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindDialog *_t = static_cast<FindDialog *>(_o);
        switch (_id) {
        case 0: _t->searchStringChangedChanged(); break;
        case 1: _t->checkButtonAvailability(); break;
        case 2: _t->findNext(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::FindDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::FindDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__FindDialog,
      qt_meta_data_cedar__proc__gui__FindDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::FindDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__FindDialog))
        return static_cast<void*>(const_cast< FindDialog*>(this));
    if (!strcmp(_clname, "Ui_FindDialog"))
        return static_cast< Ui_FindDialog*>(const_cast< FindDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::proc::gui::FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
