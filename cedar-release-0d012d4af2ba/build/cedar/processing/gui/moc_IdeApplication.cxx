/****************************************************************************
** Meta object code from reading C++ file 'IdeApplication.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/IdeApplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IdeApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__IdeApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__IdeApplication[] = {
    "cedar::proc::gui::IdeApplication\0\0"
    "showExceptionDialogSignal()\0"
    "showExceptionDialog()\0"
};

void cedar::proc::gui::IdeApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IdeApplication *_t = static_cast<IdeApplication *>(_o);
        switch (_id) {
        case 0: _t->showExceptionDialogSignal(); break;
        case 1: _t->showExceptionDialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::IdeApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::IdeApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__IdeApplication,
      qt_meta_data_cedar__proc__gui__IdeApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::IdeApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::IdeApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::IdeApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__IdeApplication))
        return static_cast<void*>(const_cast< IdeApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int cedar::proc::gui::IdeApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::IdeApplication::showExceptionDialogSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE