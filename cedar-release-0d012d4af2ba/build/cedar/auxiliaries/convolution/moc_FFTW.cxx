/****************************************************************************
** Meta object code from reading C++ file 'FFTW.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/auxiliaries/convolution/FFTW.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FFTW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__aux__conv__FFTW[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      40,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__aux__conv__FFTW[] = {
    "cedar::aux::conv::FFTW\0\0kernelChanged()\0"
    "kernelListChanged()\0"
};

void cedar::aux::conv::FFTW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FFTW *_t = static_cast<FFTW *>(_o);
        switch (_id) {
        case 0: _t->kernelChanged(); break;
        case 1: _t->kernelListChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::aux::conv::FFTW::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::aux::conv::FFTW::staticMetaObject = {
    { &cedar::aux::conv::Engine::staticMetaObject, qt_meta_stringdata_cedar__aux__conv__FFTW,
      qt_meta_data_cedar__aux__conv__FFTW, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::aux::conv::FFTW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::aux::conv::FFTW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::aux::conv::FFTW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__aux__conv__FFTW))
        return static_cast<void*>(const_cast< FFTW*>(this));
    typedef cedar::aux::conv::Engine QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int cedar::aux::conv::FFTW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cedar::aux::conv::Engine QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
