/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "paintEvent"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QPaintEvent*"
QT_MOC_LITERAL(4, 36, 5), // "event"
QT_MOC_LITERAL(5, 42, 13), // "keyPressEvent"
QT_MOC_LITERAL(6, 56, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 67, 2), // "ev"
QT_MOC_LITERAL(8, 70, 20), // "on_startgame_clicked"
QT_MOC_LITERAL(9, 91, 23), // "on_actionEasy_triggered"
QT_MOC_LITERAL(10, 115, 25), // "on_actionMedium_triggered"
QT_MOC_LITERAL(11, 141, 23), // "on_actionHard_triggered"
QT_MOC_LITERAL(12, 165, 25), // "on_actionExpert_triggered"
QT_MOC_LITERAL(13, 191, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(14, 216, 30), // "on_actionGame_manual_triggered"
QT_MOC_LITERAL(15, 247, 29), // "on_actionBorderless_triggered"
QT_MOC_LITERAL(16, 277, 30), // "on_actionClassic_Box_triggered"
QT_MOC_LITERAL(17, 308, 32) // "on_actionTrail_Station_triggered"

    },
    "MainWindow\0paintEvent\0\0QPaintEvent*\0"
    "event\0keyPressEvent\0QKeyEvent*\0ev\0"
    "on_startgame_clicked\0on_actionEasy_triggered\0"
    "on_actionMedium_triggered\0"
    "on_actionHard_triggered\0"
    "on_actionExpert_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionGame_manual_triggered\0"
    "on_actionBorderless_triggered\0"
    "on_actionClassic_Box_triggered\0"
    "on_actionTrail_Station_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x09 /* Protected */,
       5,    1,   77,    2, 0x09 /* Protected */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->on_startgame_clicked(); break;
        case 3: _t->on_actionEasy_triggered(); break;
        case 4: _t->on_actionMedium_triggered(); break;
        case 5: _t->on_actionHard_triggered(); break;
        case 6: _t->on_actionExpert_triggered(); break;
        case 7: _t->on_actionAbout_triggered(); break;
        case 8: _t->on_actionGame_manual_triggered(); break;
        case 9: _t->on_actionBorderless_triggered(); break;
        case 10: _t->on_actionClassic_Box_triggered(); break;
        case 11: _t->on_actionTrail_Station_triggered(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
