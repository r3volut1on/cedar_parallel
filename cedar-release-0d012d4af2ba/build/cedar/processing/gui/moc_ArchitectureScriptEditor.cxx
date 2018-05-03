/****************************************************************************
** Meta object code from reading C++ file 'ArchitectureScriptEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ArchitectureScriptEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArchitectureScriptEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__detail__ScriptControlWidget[] = {

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
      47,   46,   46,   46, 0x08,
      59,   46,   46,   46, 0x08,
      79,   46,   46,   46, 0x08,
      95,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget[] = {
    "cedar::proc::gui::detail::ScriptControlWidget\0"
    "\0runScript()\0requestScriptStop()\0"
    "scriptStarted()\0scriptStopped()\0"
};

void cedar::proc::gui::detail::ScriptControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptControlWidget *_t = static_cast<ScriptControlWidget *>(_o);
        switch (_id) {
        case 0: _t->runScript(); break;
        case 1: _t->requestScriptStop(); break;
        case 2: _t->scriptStarted(); break;
        case 3: _t->scriptStopped(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::proc::gui::detail::ScriptControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::detail::ScriptControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget,
      qt_meta_data_cedar__proc__gui__detail__ScriptControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::detail::ScriptControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::detail::ScriptControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::detail::ScriptControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__detail__ScriptControlWidget))
        return static_cast<void*>(const_cast< ScriptControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::detail::ScriptControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_cedar__proc__gui__ArchitectureScriptEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   44,   43,   43, 0x05,
      83,   44,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   43,   43,   43, 0x08,
     128,   43,   43,   43, 0x08,
     144,   44,   43,   43, 0x08,
     169,   44,   43,   43, 0x08,
     199,   43,   43,   43, 0x08,
     214,   43,   43,   43, 0x08,
     244,  234,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor[] = {
    "cedar::proc::gui::ArchitectureScriptEditor\0"
    "\0scriptName\0scriptAddedInGroup(QString)\0"
    "scriptRemovedFromGroup(QString)\0"
    "addClicked()\0removeClicked()\0"
    "addScriptToList(QString)\0"
    "removeScriptFromList(QString)\0"
    "itemSelected()\0scriptNameChanged()\0"
    "newStatus\0scriptStatusChanged(QString)\0"
};

void cedar::proc::gui::ArchitectureScriptEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArchitectureScriptEditor *_t = static_cast<ArchitectureScriptEditor *>(_o);
        switch (_id) {
        case 0: _t->scriptAddedInGroup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->scriptRemovedFromGroup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addClicked(); break;
        case 3: _t->removeClicked(); break;
        case 4: _t->addScriptToList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->removeScriptFromList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->itemSelected(); break;
        case 7: _t->scriptNameChanged(); break;
        case 8: _t->scriptStatusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ArchitectureScriptEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ArchitectureScriptEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor,
      qt_meta_data_cedar__proc__gui__ArchitectureScriptEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ArchitectureScriptEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ArchitectureScriptEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ArchitectureScriptEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ArchitectureScriptEditor))
        return static_cast<void*>(const_cast< ArchitectureScriptEditor*>(this));
    if (!strcmp(_clname, "Ui_ArchitectureScriptEditor"))
        return static_cast< Ui_ArchitectureScriptEditor*>(const_cast< ArchitectureScriptEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ArchitectureScriptEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::ArchitectureScriptEditor::scriptAddedInGroup(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::ArchitectureScriptEditor::scriptRemovedFromGroup(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
