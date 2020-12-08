/****************************************************************************
** Meta object code from reading C++ file 'savepresetdialog.h'
**
** Created: Mon Jan 9 20:35:57 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/savepresetdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savepresetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SavePresetDialog[] = {

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
      18,   17,   17,   17, 0x08,
      51,   46,   17,   17, 0x08,
      84,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SavePresetDialog[] = {
    "SavePresetDialog\0\0on_listView_doubleClicked()\0"
    "text\0on_editName_textChanged(QString)\0"
    "selectionChanged()\0"
};

void SavePresetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SavePresetDialog *_t = static_cast<SavePresetDialog *>(_o);
        switch (_id) {
        case 0: _t->on_listView_doubleClicked(); break;
        case 1: _t->on_editName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SavePresetDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SavePresetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SavePresetDialog,
      qt_meta_data_SavePresetDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SavePresetDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SavePresetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SavePresetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SavePresetDialog))
        return static_cast<void*>(const_cast< SavePresetDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SavePresetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
