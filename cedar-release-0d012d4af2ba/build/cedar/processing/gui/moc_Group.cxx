/****************************************************************************
** Meta object code from reading C++ file 'Group.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/Group.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__Group[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x05,
     127,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,   24,   24,   24, 0x0a,
     185,  175,   24,   24, 0x0a,
     212,  204,   24,   24, 0x0a,
     264,  259,   24,   24, 0x0a,
     286,   24,   24,   24, 0x2a,
     304,   24,   24,   24, 0x0a,
     312,   24,   24,   24, 0x0a,
     333,   24,   24,   24, 0x08,
     352,   24,   24,   24, 0x08,
     431,  380,   24,   24, 0x08,
     523,   24,   24,   24, 0x08,
     545,   24,   24,   24, 0x08,
     564,   24,   24,   24, 0x08,
     583,   24,   24,   24, 0x08,
     625,  599,   24,   24, 0x08,
     677,   24,   24,   24, 0x08,
     699,   24,   24,   24, 0x08,
     734,  732,   24,   24, 0x08,
     778,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__Group[] = {
    "cedar::proc::gui::Group\0\0,,,,\0"
    "signalDataConnectionChange(QString,QString,QString,QString,cedar::proc"
    "::Group::ConnectionChange)\0"
    "triggerColorsChanged()\0stepRecordStateChanged()\0"
    "collapsed\0setCollapsed(bool)\0from,to\0"
    "handleStepNameChanged(std::string,std::string)\0"
    "lock\0setLockGeometry(bool)\0setLockGeometry()\0"
    "reset()\0openGroupContainer()\0"
    "groupNameChanged()\0toggleSmartConnectionMode()\0"
    "sourceName,sourceSlot,targetName,targetSlot,change\0"
    "dataConnectionChanged(QString,QString,QString,QString,cedar::proc::Gro"
    "up::ConnectionChange)\0"
    "updateCollapsedness()\0updateTextBounds()\0"
    "updateIconBounds()\0loopedChanged()\0"
    "plotGroupname,elementName\0"
    "removeElementFromPlotGroup(std::string,std::string)\0"
    "openParameterEditor()\0"
    "backgroundColorActionTriggered()\0,\0"
    "elementNameChanged(std::string,std::string)\0"
    "geometryLockChanged()\0"
};

void cedar::proc::gui::Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Group *_t = static_cast<Group *>(_o);
        switch (_id) {
        case 0: _t->signalDataConnectionChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< cedar::proc::Group::ConnectionChange(*)>(_a[5]))); break;
        case 1: _t->triggerColorsChanged(); break;
        case 2: _t->stepRecordStateChanged(); break;
        case 3: _t->setCollapsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->handleStepNameChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->setLockGeometry((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setLockGeometry(); break;
        case 7: _t->reset(); break;
        case 8: _t->openGroupContainer(); break;
        case 9: _t->groupNameChanged(); break;
        case 10: _t->toggleSmartConnectionMode(); break;
        case 11: _t->dataConnectionChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< cedar::proc::Group::ConnectionChange(*)>(_a[5]))); break;
        case 12: _t->updateCollapsedness(); break;
        case 13: _t->updateTextBounds(); break;
        case 14: _t->updateIconBounds(); break;
        case 15: _t->loopedChanged(); break;
        case 16: _t->removeElementFromPlotGroup((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 17: _t->openParameterEditor(); break;
        case 18: _t->backgroundColorActionTriggered(); break;
        case 19: _t->elementNameChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 20: _t->geometryLockChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::Group::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::Group::staticMetaObject = {
    { &cedar::proc::gui::Connectable::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__Group,
      qt_meta_data_cedar__proc__gui__Group, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::Group::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::Group::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__Group))
        return static_cast<void*>(const_cast< Group*>(this));
    typedef cedar::proc::gui::Connectable QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::proc::gui::Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::proc::gui::Connectable QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::Group::signalDataConnectionChange(QString _t1, QString _t2, QString _t3, QString _t4, cedar::proc::Group::ConnectionChange _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cedar::proc::gui::Group::triggerColorsChanged()const
{
    QMetaObject::activate(const_cast< cedar::proc::gui::Group *>(this), &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
