/****************************************************************************
** Meta object code from reading C++ file 'fraqtivemainwindow.h'
**
** Created: Mon Jan 9 20:35:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fraqtivemainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fraqtivemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FraqtiveMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      34,   19,   19,   19, 0x08,
      49,   19,   19,   19, 0x08,
      62,   19,   19,   19, 0x08,
      77,   19,   19,   19, 0x08,
      95,   19,   19,   19, 0x08,
     113,   19,   19,   19, 0x08,
     126,   19,   19,   19, 0x08,
     139,   19,   19,   19, 0x08,
     154,   19,   19,   19, 0x08,
     169,   19,   19,   19, 0x08,
     181,   19,   19,   19, 0x08,
     193,   19,   19,   19, 0x08,
     209,   19,   19,   19, 0x08,
     226,   19,   19,   19, 0x08,
     235,   19,   19,   19, 0x08,
     248,  244,   19,   19, 0x08,
     283,   19,   19,   19, 0x08,
     301,   19,   19,   19, 0x08,
     330,  321,   19,   19, 0x08,
     354,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FraqtiveMainWindow[] = {
    "FraqtiveMainWindow\0\0fractalType()\0"
    "editGradient()\0fullScreen()\0navigateBack()\0"
    "navigateForward()\0defaultPosition()\0"
    "loadPreset()\0savePreset()\0loadBookmark()\0"
    "saveBookmark()\0saveImage()\0copyImage()\0"
    "generateImage()\0generateSeries()\0"
    "view2d()\0view3d()\0pos\0"
    "customContextMenuRequested(QPoint)\0"
    "positionChanged()\0navigationChanged()\0"
    "gradient\0applyGradient(Gradient)\0"
    "on_mainContainer_destroyed()\0"
};

void FraqtiveMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FraqtiveMainWindow *_t = static_cast<FraqtiveMainWindow *>(_o);
        switch (_id) {
        case 0: _t->fractalType(); break;
        case 1: _t->editGradient(); break;
        case 2: _t->fullScreen(); break;
        case 3: _t->navigateBack(); break;
        case 4: _t->navigateForward(); break;
        case 5: _t->defaultPosition(); break;
        case 6: _t->loadPreset(); break;
        case 7: _t->savePreset(); break;
        case 8: _t->loadBookmark(); break;
        case 9: _t->saveBookmark(); break;
        case 10: _t->saveImage(); break;
        case 11: _t->copyImage(); break;
        case 12: _t->generateImage(); break;
        case 13: _t->generateSeries(); break;
        case 14: _t->view2d(); break;
        case 15: _t->view3d(); break;
        case 16: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: _t->positionChanged(); break;
        case 18: _t->navigationChanged(); break;
        case 19: _t->applyGradient((*reinterpret_cast< const Gradient(*)>(_a[1]))); break;
        case 20: _t->on_mainContainer_destroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FraqtiveMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FraqtiveMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FraqtiveMainWindow,
      qt_meta_data_FraqtiveMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FraqtiveMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FraqtiveMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FraqtiveMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FraqtiveMainWindow))
        return static_cast<void*>(const_cast< FraqtiveMainWindow*>(this));
    if (!strcmp(_clname, "XmlUi::Client"))
        return static_cast< XmlUi::Client*>(const_cast< FraqtiveMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FraqtiveMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
