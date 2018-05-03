/****************************************************************************
** Meta object code from reading C++ file 'PluginManagerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/PluginManagerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginManagerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__PluginManagerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      62,   37,   37,   37, 0x08,
      93,   37,   37,   37, 0x08,
     116,   37,   37,   37, 0x08,
     142,   37,   37,   37, 0x08,
     168,  161,   37,   37, 0x08,
     203,   37,   37,   37, 0x08,
     225,   37,   37,   37, 0x08,
     242,   37,   37,   37, 0x08,
     269,   37,   37,   37, 0x08,
     298,   37,   37,   37, 0x08,
     326,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog[] = {
    "cedar::aux::gui::PluginManagerDialog\0"
    "\0removeSelectedPlugins()\0"
    "toggleSelectedPluginsButtons()\0"
    "addSearchPathClicked()\0removeSearchPathClicked()\0"
    "addPluginClicked()\0loaded\0"
    "loadOnStartupCheckboxToggled(bool)\0"
    "loadSelectedPlugins()\0openInfoDialog()\0"
    "moveSelectedSearchPathUp()\0"
    "moveSelectedSearchPathDown()\0"
    "selectedSearchPathChanged()\0"
    "showSearchPathHelp()\0"
};

void cedar::aux::gui::PluginManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginManagerDialog *_t = static_cast<PluginManagerDialog *>(_o);
        switch (_id) {
        case 0: _t->removeSelectedPlugins(); break;
        case 1: _t->toggleSelectedPluginsButtons(); break;
        case 2: _t->addSearchPathClicked(); break;
        case 3: _t->removeSearchPathClicked(); break;
        case 4: _t->addPluginClicked(); break;
        case 5: _t->loadOnStartupCheckboxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loadSelectedPlugins(); break;
        case 7: _t->openInfoDialog(); break;
        case 8: _t->moveSelectedSearchPathUp(); break;
        case 9: _t->moveSelectedSearchPathDown(); break;
        case 10: _t->selectedSearchPathChanged(); break;
        case 11: _t->showSearchPathHelp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::PluginManagerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::PluginManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog,
      qt_meta_data_cedar__aux__gui__PluginManagerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::PluginManagerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::PluginManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::PluginManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__PluginManagerDialog))
        return static_cast<void*>(const_cast< PluginManagerDialog*>(this));
    if (!strcmp(_clname, "Ui_PluginManagerDialog"))
        return static_cast< Ui_PluginManagerDialog*>(const_cast< PluginManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cedar::aux::gui::PluginManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
