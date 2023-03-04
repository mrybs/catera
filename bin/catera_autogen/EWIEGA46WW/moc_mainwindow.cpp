/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "on_addAccountButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "_on_addAccount"
QT_MOC_LITERAL(4, 55, 19), // "on_loginBtn_clicked"
QT_MOC_LITERAL(5, 75, 27), // "on_changeAccountBtn_clicked"
QT_MOC_LITERAL(6, 103, 20), // "on_login1Btn_clicked"
QT_MOC_LITERAL(7, 124, 26), // "on_loginBrowser_urlChanged"
QT_MOC_LITERAL(8, 151, 4), // "arg1"
QT_MOC_LITERAL(9, 156, 21), // "on_newPostBtn_clicked"
QT_MOC_LITERAL(10, 178, 29), // "on_mainStacked_currentChanged"
QT_MOC_LITERAL(11, 208, 9), // "pageIndex"
QT_MOC_LITERAL(12, 218, 33), // "on_mainMainStacked_currentCha..."
QT_MOC_LITERAL(13, 252, 20), // "on_logoutBtn_clicked"
QT_MOC_LITERAL(14, 273, 10) // "loadImages"

    },
    "MainWindow\0on_addAccountButton_clicked\0"
    "\0_on_addAccount\0on_loginBtn_clicked\0"
    "on_changeAccountBtn_clicked\0"
    "on_login1Btn_clicked\0on_loginBrowser_urlChanged\0"
    "arg1\0on_newPostBtn_clicked\0"
    "on_mainStacked_currentChanged\0pageIndex\0"
    "on_mainMainStacked_currentChanged\0"
    "on_logoutBtn_clicked\0loadImages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addAccountButton_clicked(); break;
        case 1: _t->_on_addAccount(); break;
        case 2: _t->on_loginBtn_clicked(); break;
        case 3: _t->on_changeAccountBtn_clicked(); break;
        case 4: _t->on_login1Btn_clicked(); break;
        case 5: _t->on_loginBrowser_urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->on_newPostBtn_clicked(); break;
        case 7: _t->on_mainStacked_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_mainMainStacked_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_logoutBtn_clicked(); break;
        case 10: _t->loadImages(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
