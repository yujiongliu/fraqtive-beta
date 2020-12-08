/****************************************************************************
** Meta object code from reading C++ file 'fractaltypewidget.h'
**
** Created: Mon Jan 9 20:35:48 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fractaltypewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fractaltypewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FractalTypeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   18,   18,   18, 0x08,
      69,   18,   18,   18, 0x08,
      93,   18,   18,   18, 0x08,
     122,   18,   18,   18, 0x08,
     151,   18,   18,   18, 0x08,
     176,   18,   18,   18, 0x08,
     204,   18,   18,   18, 0x08,
     231,   18,   18,   18, 0x08,
     260,   18,   18,   18, 0x08,
     287,   18,   18,   18, 0x08,
     310,   18,   18,   18, 0x08,
     341,   18,   18,   18, 0x08,
     368,   18,   18,   18, 0x08,
     401,  393,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FractalTypeWidget[] = {
    "FractalTypeWidget\0\0fractalTypeChanged()\0"
    "on_radioMandelbrot_clicked()\0"
    "on_radioJulia_clicked()\0"
    "on_editJuliaX_valueChanged()\0"
    "on_editJuliaY_valueChanged()\0"
    "on_radioNormal_clicked()\0"
    "on_radioConjugate_clicked()\0"
    "on_radioAbsolute_clicked()\0"
    "on_radioAbsoluteIm_clicked()\0"
    "on_radioIntegral_clicked()\0"
    "on_radioReal_clicked()\0"
    "on_spinIntegral_valueChanged()\0"
    "on_spinReal_valueChanged()\0"
    "on_spinB1_valueChanged()\0checked\0"
    "on_radioReal_toggled(bool)\0"
};

void FractalTypeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FractalTypeWidget *_t = static_cast<FractalTypeWidget *>(_o);
        switch (_id) {
        case 0: _t->fractalTypeChanged(); break;
        case 1: _t->on_radioMandelbrot_clicked(); break;
        case 2: _t->on_radioJulia_clicked(); break;
        case 3: _t->on_editJuliaX_valueChanged(); break;
        case 4: _t->on_editJuliaY_valueChanged(); break;
        case 5: _t->on_radioNormal_clicked(); break;
        case 6: _t->on_radioConjugate_clicked(); break;
        case 7: _t->on_radioAbsolute_clicked(); break;
        case 8: _t->on_radioAbsoluteIm_clicked(); break;
        case 9: _t->on_radioIntegral_clicked(); break;
        case 10: _t->on_radioReal_clicked(); break;
        case 11: _t->on_spinIntegral_valueChanged(); break;
        case 12: _t->on_spinReal_valueChanged(); break;
        case 13: _t->on_spinB1_valueChanged(); break;
        case 14: _t->on_radioReal_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FractalTypeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FractalTypeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FractalTypeWidget,
      qt_meta_data_FractalTypeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FractalTypeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FractalTypeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FractalTypeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FractalTypeWidget))
        return static_cast<void*>(const_cast< FractalTypeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FractalTypeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FractalTypeWidget::fractalTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
