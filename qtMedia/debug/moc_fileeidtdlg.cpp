/****************************************************************************
** Meta object code from reading C++ file 'fileeidtdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fileeidtdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileeidtdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileEidtDlg_t {
    QByteArrayData data[13];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileEidtDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileEidtDlg_t qt_meta_stringdata_FileEidtDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileEidtDlg"
QT_MOC_LITERAL(1, 12, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "onFileOpen"
QT_MOC_LITERAL(4, 43, 9), // "onFileNew"
QT_MOC_LITERAL(5, 53, 10), // "onFileSave"
QT_MOC_LITERAL(6, 64, 13), // "onTextChanged"
QT_MOC_LITERAL(7, 78, 12), // "onFileSaveAs"
QT_MOC_LITERAL(8, 91, 15), // "saveCurrentData"
QT_MOC_LITERAL(9, 107, 4), // "path"
QT_MOC_LITERAL(10, 112, 19), // "on_btnPrint_clicked"
QT_MOC_LITERAL(11, 132, 13), // "show_findText"
QT_MOC_LITERAL(12, 146, 12) // "showFindText"

    },
    "FileEidtDlg\0on_btnBack_clicked\0\0"
    "onFileOpen\0onFileNew\0onFileSave\0"
    "onTextChanged\0onFileSaveAs\0saveCurrentData\0"
    "path\0on_btnPrint_clicked\0show_findText\0"
    "showFindText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileEidtDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileEidtDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileEidtDlg *_t = static_cast<FileEidtDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnBack_clicked(); break;
        case 1: _t->onFileOpen(); break;
        case 2: _t->onFileNew(); break;
        case 3: _t->onFileSave(); break;
        case 4: _t->onTextChanged(); break;
        case 5: _t->onFileSaveAs(); break;
        case 6: { QString _r = _t->saveCurrentData((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->on_btnPrint_clicked(); break;
        case 8: _t->show_findText(); break;
        case 9: _t->showFindText(); break;
        default: ;
        }
    }
}

const QMetaObject FileEidtDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileEidtDlg.data,
      qt_meta_data_FileEidtDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileEidtDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileEidtDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileEidtDlg.stringdata0))
        return static_cast<void*>(const_cast< FileEidtDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int FileEidtDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
