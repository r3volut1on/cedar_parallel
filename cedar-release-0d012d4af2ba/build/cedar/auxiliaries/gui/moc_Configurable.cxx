/****************************************************************************
** Meta object code from reading C++ file 'Configurable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/gui/Configurable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Configurable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__gui__Configurable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      72,   49,   30,   30, 0x05,
     128,  100,   30,   30, 0x05,
     193,  159,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,   30,   30,   30, 0x0a,
     251,   30,   30,   30, 0x08,
     280,   30,   30,   30, 0x08,
     310,   30,   30,   30, 0x08,
     344,   49,   30,   30, 0x08,
     376,  100,   30,   30, 0x08,
     411,  159,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__Configurable[] = {
    "cedar::aux::gui::Configurable\0\0"
    "settingsChanged()\0configurableIndex,path\0"
    "parameterAdded(int,QString)\0"
    "configurableIndex,parameter\0"
    "parameterRemoved(int,QVariant)\0"
    "configurableIndex,oldName,newName\0"
    "parameterRenamed(int,QString,QString)\0"
    "fitRowsToContents()\0parameterChangeFlagChanged()\0"
    "objectParameterValueChanged()\0"
    "objectListParameterValueChanged()\0"
    "parameterAddedSlot(int,QString)\0"
    "parameterRemovedSlot(int,QVariant)\0"
    "parameterRenamedSlot(int,QString,QString)\0"
};

void cedar::aux::gui::Configurable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Configurable *_t = static_cast<Configurable *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->parameterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->parameterRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->parameterRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->fitRowsToContents(); break;
        case 5: _t->parameterChangeFlagChanged(); break;
        case 6: _t->objectParameterValueChanged(); break;
        case 7: _t->objectListParameterValueChanged(); break;
        case 8: _t->parameterAddedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->parameterRemovedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 10: _t->parameterRenamedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::Configurable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::Configurable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Configurable,
      qt_meta_data_cedar__aux__gui__Configurable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::Configurable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::Configurable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::Configurable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Configurable))
        return static_cast<void*>(const_cast< Configurable*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::aux::gui::Configurable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void cedar::aux::gui::Configurable::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::aux::gui::Configurable::parameterAdded(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cedar::aux::gui::Configurable::parameterRemoved(int _t1, QVariant _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cedar::aux::gui::Configurable::parameterRenamed(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_cedar__aux__gui__Configurable__DataDelegate[] = {

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
      53,   45,   44,   44, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate[] = {
    "cedar::aux::gui::Configurable::DataDelegate\0"
    "\0removed\0widgetDestroyed(QObject*)\0"
};

void cedar::aux::gui::Configurable::DataDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataDelegate *_t = static_cast<DataDelegate *>(_o);
        switch (_id) {
        case 0: _t->widgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::gui::Configurable::DataDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::gui::Configurable::DataDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate,
      qt_meta_data_cedar__aux__gui__Configurable__DataDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::gui::Configurable::DataDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::gui::Configurable::DataDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::gui::Configurable::DataDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__gui__Configurable__DataDelegate))
        return static_cast<void*>(const_cast< DataDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int cedar::aux::gui::Configurable::DataDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
