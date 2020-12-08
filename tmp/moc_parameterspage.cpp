/****************************************************************************
** Meta object code from reading C++ file 'parameterspage.h'
**
** Created: Mon Jan 9 20:35:54 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/parameterspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameterspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParametersPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      40,   15,   15,   15, 0x08,
      67,   15,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,
     115,   15,   15,   15, 0x08,
     144,   15,   15,   15, 0x08,
     173,   15,   15,   15, 0x08,
     205,   15,   15,   15, 0x08,
     237,   15,   15,   15, 0x08,
     264,   15,   15,   15, 0x08,
     292,   15,   15,   15, 0x08,
     313,   15,   15,   15, 0x08,
     331,   15,   15,   15, 0x08,
     349,   15,   15,   15, 0x08,
     376,  367,   15,   15, 0x08,
     413,  407,   15,   15, 0x08,
     442,  407,   15,   15, 0x08,
     479,  474,   15,   15, 0x08,
     512,  474,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParametersPage[] = {
    "ParametersPage\0\0on_buttonType_clicked()\0"
    "on_buttonRestore_clicked()\0"
    "on_buttonLoad_clicked()\0on_buttonSave_clicked()\0"
    "on_editJuliaX_valueChanged()\0"
    "on_editJuliaY_valueChanged()\0"
    "on_editPositionX_valueChanged()\0"
    "on_editPositionY_valueChanged()\0"
    "on_spinZoom_valueChanged()\0"
    "on_spinAngle_valueChanged()\0"
    "fractalTypeChanged()\0positionChanged()\0"
    "trackingChanged()\0hoveringChanged()\0"
    "position\0on_SliderBeta_sliderMoved(int)\0"
    "value\0on_SliderT_valueChanged(int)\0"
    "on_SliderBeta_valueChanged(int)\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
    "on_lineEdit_2_textChanged(QString)\0"
};

void ParametersPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParametersPage *_t = static_cast<ParametersPage *>(_o);
        switch (_id) {
        case 0: _t->on_buttonType_clicked(); break;
        case 1: _t->on_buttonRestore_clicked(); break;
        case 2: _t->on_buttonLoad_clicked(); break;
        case 3: _t->on_buttonSave_clicked(); break;
        case 4: _t->on_editJuliaX_valueChanged(); break;
        case 5: _t->on_editJuliaY_valueChanged(); break;
        case 6: _t->on_editPositionX_valueChanged(); break;
        case 7: _t->on_editPositionY_valueChanged(); break;
        case 8: _t->on_spinZoom_valueChanged(); break;
        case 9: _t->on_spinAngle_valueChanged(); break;
        case 10: _t->fractalTypeChanged(); break;
        case 11: _t->positionChanged(); break;
        case 12: _t->trackingChanged(); break;
        case 13: _t->hoveringChanged(); break;
        case 14: _t->on_SliderBeta_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_SliderT_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_SliderBeta_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParametersPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParametersPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParametersPage,
      qt_meta_data_ParametersPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParametersPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParametersPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParametersPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParametersPage))
        return static_cast<void*>(const_cast< ParametersPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ParametersPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
