/****************************************************************************
** Meta object code from reading C++ file 'advancedsettingspage.h'
**
** Created: Mon Jan 9 20:35:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/advancedsettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancedsettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdvancedSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
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
     237,   21,   21,   21, 0x08,
     263,   21,   21,   21, 0x08,
     290,   21,   21,   21, 0x08,
     321,   21,   21,   21, 0x08,
     350,   21,   21,   21, 0x08,
     377,   21,   21,   21, 0x08,
     402,   21,   21,   21, 0x08,
     429,   21,   21,   21, 0x08,
     451,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvancedSettingsPage[] = {
    "AdvancedSettingsPage\0\0"
    "on_sliderDepth_valueChanged()\0"
    "on_sliderDetail_valueChanged()\0"
    "on_radioAANone_clicked()\0"
    "on_radioAALow_clicked()\0"
    "on_radioAAMedium_clicked()\0"
    "on_radioAAHigh_clicked()\0"
    "on_radioResLow_clicked()\0"
    "on_radioResMedium_clicked()\0"
    "on_radioResHigh_clicked()\0"
    "on_radioResVHigh_clicked()\0"
    "on_sliderHeight_valueChanged()\0"
    "on_sliderZoom_valueChanged()\0"
    "on_buttonRestore_clicked()\0"
    "on_buttonStore_clicked()\0"
    "generatorSettingsChanged()\0"
    "viewSettingsChanged()\0viewModeChanged()\0"
};

void AdvancedSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedSettingsPage *_t = static_cast<AdvancedSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->on_sliderDepth_valueChanged(); break;
        case 1: _t->on_sliderDetail_valueChanged(); break;
        case 2: _t->on_radioAANone_clicked(); break;
        case 3: _t->on_radioAALow_clicked(); break;
        case 4: _t->on_radioAAMedium_clicked(); break;
        case 5: _t->on_radioAAHigh_clicked(); break;
        case 6: _t->on_radioResLow_clicked(); break;
        case 7: _t->on_radioResMedium_clicked(); break;
        case 8: _t->on_radioResHigh_clicked(); break;
        case 9: _t->on_radioResVHigh_clicked(); break;
        case 10: _t->on_sliderHeight_valueChanged(); break;
        case 11: _t->on_sliderZoom_valueChanged(); break;
        case 12: _t->on_buttonRestore_clicked(); break;
        case 13: _t->on_buttonStore_clicked(); break;
        case 14: _t->generatorSettingsChanged(); break;
        case 15: _t->viewSettingsChanged(); break;
        case 16: _t->viewModeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AdvancedSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AdvancedSettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdvancedSettingsPage,
      qt_meta_data_AdvancedSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvancedSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvancedSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvancedSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedSettingsPage))
        return static_cast<void*>(const_cast< AdvancedSettingsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdvancedSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
