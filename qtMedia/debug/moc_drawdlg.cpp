/****************************************************************************
** Meta object code from reading C++ file 'drawdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../drawdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawDlg_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawDlg_t qt_meta_stringdata_DrawDlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DrawDlg"
QT_MOC_LITERAL(1, 8, 9), // "SlotStyle"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "SlotColor"
QT_MOC_LITERAL(4, 29, 9), // "SlotShape"
QT_MOC_LITERAL(5, 39, 28) // "on_commandLinkButton_clicked"

    },
    "DrawDlg\0SlotStyle\0\0SlotColor\0SlotShape\0"
    "on_commandLinkButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void DrawDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawDlg *_t = static_cast<DrawDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotStyle(); break;
        case 1: _t->SlotColor(); break;
        case 2: _t->SlotShape((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DrawDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DrawDlg.data,
      qt_meta_data_DrawDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DrawDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DrawDlg.stringdata0))
        return static_cast<void*>(const_cast< DrawDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int DrawDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
