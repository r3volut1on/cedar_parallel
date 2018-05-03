/****************************************************************************
** Meta object code from reading C++ file 'SerialChannel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cedar/devices/SerialChannel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialChannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__dev__SerialChannel[] = {

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
      27,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__dev__SerialChannel[] = {
    "cedar::dev::SerialChannel\0\0"
    "updateCommandDelimiter()\0"
};

void cedar::dev::SerialChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialChannel *_t = static_cast<SerialChannel *>(_o);
        switch (_id) {
        case 0: _t->updateCommandDelimiter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cedar::dev::SerialChannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::dev::SerialChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cedar__dev__SerialChannel,
      qt_meta_data_cedar__dev__SerialChannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::dev::SerialChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::dev::SerialChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::dev::SerialChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__dev__SerialChannel))
        return static_cast<void*>(const_cast< SerialChannel*>(this));
    if (!strcmp(_clname, "Channel"))
        return static_cast< Channel*>(const_cast< SerialChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int cedar::dev::SerialChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
