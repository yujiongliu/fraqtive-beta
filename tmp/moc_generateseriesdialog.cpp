/****************************************************************************
** Meta object code from reading C++ file 'generateseriesdialog.h'
**
** Created: Mon Jan 9 20:35:50 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/generateseriesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generateseriesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GenerateSeriesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      52,   21,   21,   21, 0x08,
      83,   21,   21,   21, 0x08,
     108,   21,   21,   21, 0x08,
     132,   21,   21,   21, 0x08,
     159,   21,   21,   21, 0x08,
     184,   21,   21,   21, 0x08,
     209,   21,   21,   21, 0x08,
     233,   21,   21,   21, 0x08,
     257,   21,   21,   21, 0x08,
     281,   21,   21,   21, 0x08,
     308,   21,   21,   21, 0x08,
     336,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GenerateSeriesDialog[] = {
    "GenerateSeriesDialog\0\0"
    "on_sliderDepth_valueChanged()\0"
    "on_sliderDetail_valueChanged()\0"
    "on_radioAANone_clicked()\0"
    "on_radioAALow_clicked()\0"
    "on_radioAAMedium_clicked()\0"
    "on_radioAAHigh_clicked()\0"
    "on_radioMSNone_clicked()\0"
    "on_radioMS2x2_clicked()\0on_radioMS4x4_clicked()\0"
    "on_radioMS8x8_clicked()\0"
    "on_spinZoom_valueChanged()\0"
    "on_spinAngle_valueChanged()\0"
    "on_animSlider_valueChanged()\0"
};

void GenerateSeriesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GenerateSeriesDialog *_t = static_cast<GenerateSeriesDialog *>(_o);
        switch (_id) {
        case 0: _t->on_sliderDepth_valueChanged(); break;
        case 1: _t->on_sliderDetail_valueChanged(); break;
        case 2: _t->on_radioAANone_clicked(); break;
        case 3: _t->on_radioAALow_clicked(); break;
        case 4: _t->on_radioAAMedium_clicked(); break;
        case 5: _t->on_radioAAHigh_clicked(); break;
        case 6: _t->on_radioMSNone_clicked(); break;
        case 7: _t->on_radioMS2x2_clicked(); break;
        case 8: _t->on_radioMS4x4_clicked(); break;
        case 9: _t->on_radioMS8x8_clicked(); break;
        case 10: _t->on_spinZoom_valueChanged(); break;
        case 11: _t->on_spinAngle_valueChanged(); break;
        case 12: _t->on_animSlider_valueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GenerateSeriesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GenerateSeriesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GenerateSeriesDialog,
      qt_meta_data_GenerateSeriesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenerateSeriesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenerateSeriesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenerateSeriesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenerateSeriesDialog))
        return static_cast<void*>(const_cast< GenerateSeriesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GenerateSeriesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
