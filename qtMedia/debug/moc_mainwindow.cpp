/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[481];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_btnFile_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "on_btnRemove_clicked"
QT_MOC_LITERAL(4, 52, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(5, 70, 26), // "on_listWidgetFiles_clicked"
QT_MOC_LITERAL(6, 97, 5), // "index"
QT_MOC_LITERAL(7, 103, 14), // "onstateChanged"
QT_MOC_LITERAL(8, 118, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(9, 138, 5), // "state"
QT_MOC_LITERAL(10, 144, 17), // "onDurationChanged"
QT_MOC_LITERAL(11, 162, 8), // "duration"
QT_MOC_LITERAL(12, 171, 17), // "onPositionChanged"
QT_MOC_LITERAL(13, 189, 8), // "position"
QT_MOC_LITERAL(14, 198, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(15, 217, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(16, 236, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(17, 256, 19), // "on_btnSound_clicked"
QT_MOC_LITERAL(18, 276, 28), // "on_sliderVolumn_valueChanged"
QT_MOC_LITERAL(19, 305, 5), // "value"
QT_MOC_LITERAL(20, 311, 30), // "on_sliderPosition_valueChanged"
QT_MOC_LITERAL(21, 342, 32), // "on_listWidgetFiles_doubleClicked"
QT_MOC_LITERAL(22, 375, 18), // "on_btnPush_clicked"
QT_MOC_LITERAL(23, 394, 17), // "on_btnPre_clicked"
QT_MOC_LITERAL(24, 412, 17), // "on_btnSuf_clicked"
QT_MOC_LITERAL(25, 430, 21), // "comboxFileChangeIndex"
QT_MOC_LITERAL(26, 452, 28) // "on_commandLinkButton_clicked"

    },
    "MainWindow\0on_btnFile_clicked\0\0"
    "on_btnRemove_clicked\0on_btnAdd_clicked\0"
    "on_listWidgetFiles_clicked\0index\0"
    "onstateChanged\0QMediaPlayer::State\0"
    "state\0onDurationChanged\0duration\0"
    "onPositionChanged\0position\0"
    "on_btnPlay_clicked\0on_btnStop_clicked\0"
    "on_btnPause_clicked\0on_btnSound_clicked\0"
    "on_sliderVolumn_valueChanged\0value\0"
    "on_sliderPosition_valueChanged\0"
    "on_listWidgetFiles_doubleClicked\0"
    "on_btnPush_clicked\0on_btnPre_clicked\0"
    "on_btnSuf_clicked\0comboxFileChangeIndex\0"
    "on_commandLinkButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    1,  112,    2, 0x08 /* Private */,
       7,    1,  115,    2, 0x08 /* Private */,
      10,    1,  118,    2, 0x08 /* Private */,
      12,    1,  121,    2, 0x08 /* Private */,
      14,    0,  124,    2, 0x08 /* Private */,
      15,    0,  125,    2, 0x08 /* Private */,
      16,    0,  126,    2, 0x08 /* Private */,
      17,    0,  127,    2, 0x08 /* Private */,
      18,    1,  128,    2, 0x08 /* Private */,
      20,    1,  131,    2, 0x08 /* Private */,
      21,    1,  134,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,
      23,    0,  138,    2, 0x08 /* Private */,
      24,    0,  139,    2, 0x08 /* Private */,
      25,    0,  140,    2, 0x08 /* Private */,
      26,    0,  141,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QModelIndex,    6,
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
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnFile_clicked(); break;
        case 1: _t->on_btnRemove_clicked(); break;
        case 2: _t->on_btnAdd_clicked(); break;
        case 3: _t->on_listWidgetFiles_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onstateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 5: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->on_btnPlay_clicked(); break;
        case 8: _t->on_btnStop_clicked(); break;
        case 9: _t->on_btnPause_clicked(); break;
        case 10: _t->on_btnSound_clicked(); break;
        case 11: _t->on_sliderVolumn_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_sliderPosition_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_listWidgetFiles_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->on_btnPush_clicked(); break;
        case 15: _t->on_btnPre_clicked(); break;
        case 16: _t->on_btnSuf_clicked(); break;
        case 17: _t->comboxFileChangeIndex(); break;
        case 18: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
