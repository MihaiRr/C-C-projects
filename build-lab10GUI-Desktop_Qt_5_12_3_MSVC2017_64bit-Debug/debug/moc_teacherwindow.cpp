/****************************************************************************
** Meta object code from reading C++ file 'teacherwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lab10GUI/teacherwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_teacherWindow_t {
    QByteArrayData data[12];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teacherWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teacherWindow_t qt_meta_stringdata_teacherWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "teacherWindow"
QT_MOC_LITERAL(1, 14, 20), // "onAddQuestionPressed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "onDeleteQuestionPressed"
QT_MOC_LITERAL(4, 60, 23), // "onUpdateQuestionPressed"
QT_MOC_LITERAL(5, 84, 12), // "repoPopulate"
QT_MOC_LITERAL(6, 97, 16), // "onLoadCSVPressed"
QT_MOC_LITERAL(7, 114, 17), // "onLoadJSONPressed"
QT_MOC_LITERAL(8, 132, 16), // "onSaveCSVPressed"
QT_MOC_LITERAL(9, 149, 17), // "onSaveJSONPressed"
QT_MOC_LITERAL(10, 167, 13), // "onUndoPressed"
QT_MOC_LITERAL(11, 181, 13) // "onRedoPressed"

    },
    "teacherWindow\0onAddQuestionPressed\0\0"
    "onDeleteQuestionPressed\0onUpdateQuestionPressed\0"
    "repoPopulate\0onLoadCSVPressed\0"
    "onLoadJSONPressed\0onSaveCSVPressed\0"
    "onSaveJSONPressed\0onUndoPressed\0"
    "onRedoPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teacherWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void teacherWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<teacherWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAddQuestionPressed(); break;
        case 1: _t->onDeleteQuestionPressed(); break;
        case 2: _t->onUpdateQuestionPressed(); break;
        case 3: _t->repoPopulate(); break;
        case 4: _t->onLoadCSVPressed(); break;
        case 5: _t->onLoadJSONPressed(); break;
        case 6: _t->onSaveCSVPressed(); break;
        case 7: _t->onSaveJSONPressed(); break;
        case 8: _t->onUndoPressed(); break;
        case 9: _t->onRedoPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject teacherWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_teacherWindow.data,
    qt_meta_data_teacherWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *teacherWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teacherWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_teacherWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int teacherWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
