/****************************************************************************
** Meta object code from reading C++ file 'savebookmarkdialog.h'
**
** Created: Mon Jan 9 20:35:56 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/savebookmarkdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savebookmarkdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SaveBookmarkDialog[] = {

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
      20,   19,   19,   19, 0x08,
      53,   48,   19,   19, 0x08,
      86,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SaveBookmarkDialog[] = {
    "SaveBookmarkDialog\0\0on_listView_doubleClicked()\0"
    "text\0on_editName_textChanged(QString)\0"
    "selectionChanged()\0"
};

void SaveBookmarkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SaveBookmarkDialog *_t = static_cast<SaveBookmarkDialog *>(_o);
        switch (_id) {
        case 0: _t->on_listView_doubleClicked(); break;
        case 1: _t->on_editName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SaveBookmarkDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveBookmarkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SaveBookmarkDialog,
      qt_meta_data_SaveBookmarkDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveBookmarkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveBookmarkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveBookmarkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveBookmarkDialog))
        return static_cast<void*>(const_cast< SaveBookmarkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SaveBookmarkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
