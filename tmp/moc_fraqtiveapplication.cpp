/****************************************************************************
** Meta object code from reading C++ file 'fraqtiveapplication.h'
**
** Created: Mon Jan 9 20:35:48 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fraqtiveapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fraqtiveapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FraqtiveApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      29,   20,   20,   20, 0x0a,
      46,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FraqtiveApplication[] = {
    "FraqtiveApplication\0\0about()\0"
    "showQuickGuide()\0openDonations()\0"
};

void FraqtiveApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FraqtiveApplication *_t = static_cast<FraqtiveApplication *>(_o);
        switch (_id) {
        case 0: _t->about(); break;
        case 1: _t->showQuickGuide(); break;
        case 2: _t->openDonations(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FraqtiveApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FraqtiveApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_FraqtiveApplication,
      qt_meta_data_FraqtiveApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FraqtiveApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FraqtiveApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FraqtiveApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FraqtiveApplication))
        return static_cast<void*>(const_cast< FraqtiveApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int FraqtiveApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
