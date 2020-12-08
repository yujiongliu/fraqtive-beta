/****************************************************************************
** Meta object code from reading C++ file 'colorsettingspage.h'
**
** Created: Mon Jan 9 20:35:45 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/colorsettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorsettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      49,   18,   18,   18, 0x08,
      77,   18,   18,   18, 0x08,
     107,   18,   18,   18, 0x08,
     138,   18,   18,   18, 0x08,
     165,   18,   18,   18, 0x08,
     192,   18,   18,   18, 0x08,
     219,   18,   18,   18, 0x08,
     244,   18,   18,   18, 0x08,
     268,   18,   18,   18, 0x08,
     292,   18,   18,   18, 0x08,
     310,   18,   18,   18, 0x08,
     335,   18,   18,   18, 0x08,
     366,  357,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorSettingsPage[] = {
    "ColorSettingsPage\0\0on_buttonBackground_clicked()\0"
    "on_buttonGradient_clicked()\0"
    "on_sliderScale_valueChanged()\0"
    "on_sliderOffset_valueChanged()\0"
    "on_checkMirrored_toggled()\0"
    "on_checkReversed_toggled()\0"
    "on_buttonRestore_clicked()\0"
    "on_buttonStore_clicked()\0"
    "on_buttonLoad_clicked()\0on_buttonSave_clicked()\0"
    "gradientChanged()\0backgroundColorChanged()\0"
    "colorMappingChanged()\0gradient\0"
    "applyGradient(Gradient)\0"
};

void ColorSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorSettingsPage *_t = static_cast<ColorSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->on_buttonBackground_clicked(); break;
        case 1: _t->on_buttonGradient_clicked(); break;
        case 2: _t->on_sliderScale_valueChanged(); break;
        case 3: _t->on_sliderOffset_valueChanged(); break;
        case 4: _t->on_checkMirrored_toggled(); break;
        case 5: _t->on_checkReversed_toggled(); break;
        case 6: _t->on_buttonRestore_clicked(); break;
        case 7: _t->on_buttonStore_clicked(); break;
        case 8: _t->on_buttonLoad_clicked(); break;
        case 9: _t->on_buttonSave_clicked(); break;
        case 10: _t->gradientChanged(); break;
        case 11: _t->backgroundColorChanged(); break;
        case 12: _t->colorMappingChanged(); break;
        case 13: _t->applyGradient((*reinterpret_cast< const Gradient(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorSettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorSettingsPage,
      qt_meta_data_ColorSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorSettingsPage))
        return static_cast<void*>(const_cast< ColorSettingsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColorSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
