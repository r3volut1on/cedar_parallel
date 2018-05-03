/****************************************************************************
** Meta object code from reading C++ file 'LocalCoordinateFrame.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/auxiliaries/LocalCoordinateFrame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalCoordinateFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__LocalCoordinateFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      49,   43,   33,   33, 0x0a,
     137,  125,   33,   33, 0x0a,
     179,  125,   33,   33, 0x0a,
     228,   43,   33,   33, 0x0a,
     299,  125,   33,   33, 0x0a,
     336,  125,   33,   33, 0x0a,
     389,  380,   33,   33, 0x0a,
     410,  380,   33,   33, 0x0a,
     454,  443,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__LocalCoordinateFrame[] = {
    "cedar::aux::LocalCoordinateFrame\0\0"
    "update()\0x,y,z\0"
    "setTranslation(cedar::unit::Length,cedar::unit::Length,cedar::unit::Le"
    "ngth)\0"
    "translation\0setTranslation(cedar::unit::LengthMatrix)\0"
    "setTranslation(std::vector<cedar::unit::Length>)\0"
    "translate(cedar::unit::Length,cedar::unit::Length,cedar::unit::Length)\0"
    "translate(cedar::unit::LengthMatrix)\0"
    "translate(std::vector<cedar::unit::Length>)\0"
    "rotation\0setRotation(cv::Mat)\0"
    "setRotation(std::vector<double>)\0"
    "axis,angle\0rotate(uint,cedar::unit::PlaneAngle)\0"
};

void cedar::aux::LocalCoordinateFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LocalCoordinateFrame *_t = static_cast<LocalCoordinateFrame *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->setTranslation((*reinterpret_cast< const cedar::unit::Length(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[2])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[3]))); break;
        case 2: _t->setTranslation((*reinterpret_cast< const cedar::unit::LengthMatrix(*)>(_a[1]))); break;
        case 3: _t->setTranslation((*reinterpret_cast< const std::vector<cedar::unit::Length>(*)>(_a[1]))); break;
        case 4: _t->translate((*reinterpret_cast< const cedar::unit::Length(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[2])),(*reinterpret_cast< const cedar::unit::Length(*)>(_a[3]))); break;
        case 5: _t->translate((*reinterpret_cast< const cedar::unit::LengthMatrix(*)>(_a[1]))); break;
        case 6: _t->translate((*reinterpret_cast< const std::vector<cedar::unit::Length>(*)>(_a[1]))); break;
        case 7: _t->setRotation((*reinterpret_cast< const cv::Mat(*)>(_a[1]))); break;
        case 8: _t->setRotation((*reinterpret_cast< const std::vector<double>(*)>(_a[1]))); break;
        case 9: _t->rotate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const cedar::unit::PlaneAngle(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::aux::LocalCoordinateFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::LocalCoordinateFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__aux__LocalCoordinateFrame,
      qt_meta_data_cedar__aux__LocalCoordinateFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::LocalCoordinateFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::LocalCoordinateFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::LocalCoordinateFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__LocalCoordinateFrame))
        return static_cast<void*>(const_cast< LocalCoordinateFrame*>(this));
    if (!strcmp(_clname, "cedar::aux::NamedConfigurable"))
        return static_cast< cedar::aux::NamedConfigurable*>(const_cast< LocalCoordinateFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::aux::LocalCoordinateFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
