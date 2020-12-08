/****************************************************************************
** Meta object code from reading C++ file 'fractaltypedialog.h'
**
** Created: Mon Jan 9 20:35:47 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fractaltypedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fractaltypedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FractalTypeDialog[] = {

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
      19,   18,   18,   18, 0x08,
      61,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FractalTypeDialog[] = {
    "FractalTypeDialog\0\0"
    "on_fractalTypeWidget_fractalTypeChanged()\0"
    "on_buttonBox_accepted()\0"
};

void FractalTypeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FractalTypeDialog *_t = static_cast<FractalTypeDialog *>(_o);
        switch (_id) {
        case 0: _t->on_fractalTypeWidget_fractalTypeChanged(); break;
        case 1: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FractalTypeDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FractalTypeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FractalTypeDialog,
      qt_meta_data_FractalTypeDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FractalTypeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FractalTypeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FractalTypeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FractalTypeDialog))
        return static_cast<void*>(const_cast< FractalTypeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FractalTypeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
