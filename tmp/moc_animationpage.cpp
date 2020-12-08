/****************************************************************************
** Meta object code from reading C++ file 'animationpage.h'
**
** Created: Mon Jan 9 20:35:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/animationpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AnimationPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      82,   14,   14,   14, 0x08,
     109,   14,   14,   14, 0x08,
     135,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AnimationPage[] = {
    "AnimationPage\0\0on_sliderScrolling_valueChanged()\0"
    "on_sliderRotation_valueChanged()\0"
    "on_stopScrolling_clicked()\0"
    "on_stopRotation_clicked()\0"
    "animationSettingsChanged()\0viewModeChanged()\0"
};

void AnimationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnimationPage *_t = static_cast<AnimationPage *>(_o);
        switch (_id) {
        case 0: _t->on_sliderScrolling_valueChanged(); break;
        case 1: _t->on_sliderRotation_valueChanged(); break;
        case 2: _t->on_stopScrolling_clicked(); break;
        case 3: _t->on_stopRotation_clicked(); break;
        case 4: _t->animationSettingsChanged(); break;
        case 5: _t->viewModeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AnimationPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AnimationPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AnimationPage,
      qt_meta_data_AnimationPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AnimationPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AnimationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AnimationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationPage))
        return static_cast<void*>(const_cast< AnimationPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AnimationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
