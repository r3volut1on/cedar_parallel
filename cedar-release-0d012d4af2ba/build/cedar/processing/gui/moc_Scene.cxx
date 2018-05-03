/****************************************************************************
** Meta object code from reading C++ file 'Scene.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/Scene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__Scene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      40,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   24,   24,   24, 0x08,
      87,   24,   24,   24, 0x08,
     107,  102,   24,   24, 0x08,
     125,   24,   24,   24, 0x08,
     138,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__Scene[] = {
    "cedar::proc::gui::Scene\0\0modeFinished()\0"
    "sceneChanged()\0promoteElementToExistingGroup()\0"
    "itemSelected()\0link\0importGroup(bool)\0"
    "importStep()\0assignSelectedToTrigger()\0"
};

void cedar::proc::gui::Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Scene *_t = static_cast<Scene *>(_o);
        switch (_id) {
        case 0: _t->modeFinished(); break;
        case 1: _t->sceneChanged(); break;
        case 2: _t->promoteElementToExistingGroup(); break;
        case 3: _t->itemSelected(); break;
        case 4: _t->importGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->importStep(); break;
        case 6: _t->assignSelectedToTrigger(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::Scene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::Scene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__Scene,
      qt_meta_data_cedar__proc__gui__Scene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::Scene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__Scene))
        return static_cast<void*>(const_cast< Scene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int cedar::proc::gui::Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::Scene::modeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cedar::proc::gui::Scene::sceneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
