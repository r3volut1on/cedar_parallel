/****************************************************************************
** Meta object code from reading C++ file 'ElementList.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cedar/processing/gui/ElementList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElementList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cedar__proc__gui__elementList__SearchBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   42,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   84,   41,   41, 0x08,
     110,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar[] = {
    "cedar::proc::gui::elementList::SearchBar\0"
    "\0searchString\0searchStringChanged(QString)\0"
    "text\0textChanged(QString)\0clearClicked()\0"
};

void cedar::proc::gui::elementList::SearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchBar *_t = static_cast<SearchBar *>(_o);
        switch (_id) {
        case 0: _t->searchStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::elementList::SearchBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::elementList::SearchBar::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar,
      qt_meta_data_cedar__proc__gui__elementList__SearchBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::elementList::SearchBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::elementList::SearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::elementList::SearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__elementList__SearchBar))
        return static_cast<void*>(const_cast< SearchBar*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int cedar::proc::gui::elementList::SearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cedar::proc::gui::elementList::SearchBar::searchStringChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_cedar__proc__gui__ElementList[] = {

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
      31,   30,   30,   30, 0x0a,
      50,   39,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cedar__proc__gui__ElementList[] = {
    "cedar::proc::gui::ElementList\0\0reset()\0"
    "searchText\0updateSearchResults(QString)\0"
};

void cedar::proc::gui::ElementList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementList *_t = static_cast<ElementList *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->updateSearchResults((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cedar::proc::gui::ElementList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cedar::proc::gui::ElementList::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_cedar__proc__gui__ElementList,
      qt_meta_data_cedar__proc__gui__ElementList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cedar::proc::gui::ElementList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cedar::proc::gui::ElementList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cedar::proc::gui::ElementList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cedar__proc__gui__ElementList))
        return static_cast<void*>(const_cast< ElementList*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int cedar::proc::gui::ElementList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
