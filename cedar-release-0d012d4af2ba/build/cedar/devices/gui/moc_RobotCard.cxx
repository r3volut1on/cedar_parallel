/****************************************************************************
** Meta object code from reading C++ file 'RobotCard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/RobotCard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobotCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__gui__RobotCardIconHolder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   38,   37,   37, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__gui__RobotCardIconHolder[] = {
    "cedar::dev::gui::RobotCardIconHolder\0"
    "\0robotName\0robotDropped(QString)\0"
};

void cedar::dev::gui::RobotCardIconHolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotCardIconHolder *_t = static_cast<RobotCardIconHolder *>(_o);
        switch (_id) {
        case 0: _t->robotDropped((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::dev::gui::RobotCardIconHolder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::gui::RobotCardIconHolder::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__RobotCardIconHolder,
      qt_meta_data_cedar__dev__gui__RobotCardIconHolder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::gui::RobotCardIconHolder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::gui::RobotCardIconHolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::gui::RobotCardIconHolder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__RobotCardIconHolder))
        return static_cast<void*>(const_cast< RobotCardIconHolder*>(this));
    return QLabel::qt_metacast(_clname);
}

int cedar::dev::gui::RobotCardIconHolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void cedar::dev::gui::RobotCardIconHolder::robotDropped(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_cedar__dev__gui__RobotCard[] = {

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
      38,   28,   27,   27, 0x0a,
      66,   60,   27,   27, 0x08,
     100,   27,   27,   27, 0x08,
     116,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__gui__RobotCard[] = {
    "cedar::dev::gui::RobotCard\0\0robotName\0"
    "robotDropped(QString)\0index\0"
    "selectedConfigurationChanged(int)\0"
    "deleteClicked()\0connectClicked()\0"
};

void cedar::dev::gui::RobotCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotCard *_t = static_cast<RobotCard *>(_o);
        switch (_id) {
        case 0: _t->robotDropped((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectedConfigurationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deleteClicked(); break;
        case 3: _t->connectClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::dev::gui::RobotCard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::gui::RobotCard::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__RobotCard,
      qt_meta_data_cedar__dev__gui__RobotCard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::gui::RobotCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::gui::RobotCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::gui::RobotCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__RobotCard))
        return static_cast<void*>(const_cast< RobotCard*>(this));
    return QFrame::qt_metacast(_clname);
}

int cedar::dev::gui::RobotCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
