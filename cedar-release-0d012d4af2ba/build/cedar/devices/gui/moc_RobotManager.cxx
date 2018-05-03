/****************************************************************************
** Meta object code from reading C++ file 'RobotManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/devices/gui/RobotManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobotManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__gui__RobotManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   31,   30,   30, 0x05,
      70,   31,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   30,   30,   30, 0x08,
     133,   30,   30,   30, 0x08,
     174,   30,   30,   30, 0x08,
     192,   31,   30,   30, 0x08,
     214,   31,   30,   30, 0x08,
     258,  248,   30,   30, 0x08,
     300,  281,   30,   30, 0x08,
     348,   30,   30,   30, 0x08,
     371,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__gui__RobotManager[] = {
    "cedar::dev::gui::RobotManager\0\0"
    "addedRobotName\0robotNameAdded(QString)\0"
    "robotConfigurationLoaded(QString)\0"
    "loadConfigurationTriggered()\0"
    "loadConfigurationFromResourceTriggered()\0"
    "addRobotClicked()\0addRobotName(QString)\0"
    "updateRobotConfiguration(QString)\0"
    "nameIndex\0robotNameSelected(int)\0"
    "pCurrent,pPrevious\0"
    "partSelected(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "simpleModeAddClicked()\0removeClicked()\0"
};

void cedar::dev::gui::RobotManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotManager *_t = static_cast<RobotManager *>(_o);
        switch (_id) {
        case 0: _t->robotNameAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->robotConfigurationLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadConfigurationTriggered(); break;
        case 3: _t->loadConfigurationFromResourceTriggered(); break;
        case 4: _t->addRobotClicked(); break;
        case 5: _t->addRobotName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->updateRobotConfiguration((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->robotNameSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->partSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 9: _t->simpleModeAddClicked(); break;
        case 10: _t->removeClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::dev::gui::RobotManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::gui::RobotManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cedar__dev__gui__RobotManager,
      qt_meta_data_cedar__dev__gui__RobotManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::gui::RobotManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::gui::RobotManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::gui::RobotManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__gui__RobotManager))
        return static_cast<void*>(const_cast< RobotManager*>(this));
    if (!strcmp(_clname, "Ui_RobotManager"))
        return static_cast< Ui_RobotManager*>(const_cast< RobotManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int cedar::dev::gui::RobotManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cedar::dev::gui::RobotManager::robotNameAdded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::dev::gui::RobotManager::robotConfigurationLoaded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
