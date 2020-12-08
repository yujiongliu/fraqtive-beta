/****************************************************************************
** Meta object code from reading C++ file 'fractalmodel.h'
**
** Created: Mon Jan 9 20:35:47 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fractalmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fractalmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FractalModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      35,   13,   13,   13, 0x05,
      53,   13,   13,   13, 0x05,
      71,   13,   13,   13, 0x05,
      89,   13,   13,   13, 0x05,
     109,   13,   13,   13, 0x05,
     127,   13,   13,   13, 0x05,
     152,   13,   13,   13, 0x05,
     174,   13,   13,   13, 0x05,
     201,   13,   13,   13, 0x05,
     223,   13,   13,   13, 0x05,
     241,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     268,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FractalModel[] = {
    "FractalModel\0\0fractalTypeChanged()\0"
    "positionChanged()\0trackingChanged()\0"
    "hoveringChanged()\0navigationChanged()\0"
    "gradientChanged()\0backgroundColorChanged()\0"
    "colorMappingChanged()\0generatorSettingsChanged()\0"
    "viewSettingsChanged()\0viewModeChanged()\0"
    "animationSettingsChanged()\0animate()\0"
};

void FractalModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FractalModel *_t = static_cast<FractalModel *>(_o);
        switch (_id) {
        case 0: _t->fractalTypeChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->trackingChanged(); break;
        case 3: _t->hoveringChanged(); break;
        case 4: _t->navigationChanged(); break;
        case 5: _t->gradientChanged(); break;
        case 6: _t->backgroundColorChanged(); break;
        case 7: _t->colorMappingChanged(); break;
        case 8: _t->generatorSettingsChanged(); break;
        case 9: _t->viewSettingsChanged(); break;
        case 10: _t->viewModeChanged(); break;
        case 11: _t->animationSettingsChanged(); break;
        case 12: _t->animate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FractalModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FractalModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FractalModel,
      qt_meta_data_FractalModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FractalModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FractalModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FractalModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FractalModel))
        return static_cast<void*>(const_cast< FractalModel*>(this));
    return QObject::qt_metacast(_clname);
}

int FractalModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FractalModel::fractalTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FractalModel::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FractalModel::trackingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FractalModel::hoveringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FractalModel::navigationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void FractalModel::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void FractalModel::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void FractalModel::colorMappingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void FractalModel::generatorSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void FractalModel::viewSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void FractalModel::viewModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void FractalModel::animationSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
