/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "StartCapImage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "OpenCom"
QT_MOC_LITERAL(4, 34, 9), // "ShowImage"
QT_MOC_LITERAL(5, 44, 12), // "ThreshChange"
QT_MOC_LITERAL(6, 57, 1), // "s"
QT_MOC_LITERAL(7, 59, 13), // "Thresh1Change"
QT_MOC_LITERAL(8, 73, 16), // "DetectSizeChange"
QT_MOC_LITERAL(9, 90, 15), // "SleepTimeChange"
QT_MOC_LITERAL(10, 106, 9), // "StartWork"
QT_MOC_LITERAL(11, 116, 8), // "StopWork"
QT_MOC_LITERAL(12, 125, 9), // "find_rect"
QT_MOC_LITERAL(13, 135, 4), // "Mat&"
QT_MOC_LITERAL(14, 140, 3), // "src"
QT_MOC_LITERAL(15, 144, 5), // "fsize"
QT_MOC_LITERAL(16, 150, 5), // "thre2"
QT_MOC_LITERAL(17, 156, 9), // "find_flaw"
QT_MOC_LITERAL(18, 166, 5), // "bool&"
QT_MOC_LITERAL(19, 172, 4) // "flag"

    },
    "MainWindow\0StartCapImage\0\0OpenCom\0"
    "ShowImage\0ThreshChange\0s\0Thresh1Change\0"
    "DetectSizeChange\0SleepTimeChange\0"
    "StartWork\0StopWork\0find_rect\0Mat&\0src\0"
    "fsize\0thre2\0find_flaw\0bool&\0flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
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
       5,    1,   72,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       8,    1,   78,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    3,   86,    2, 0x08 /* Private */,
      17,    4,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int, 0x80000000 | 18,   14,   15,   16,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->StartCapImage(); break;
        case 1: _t->OpenCom(); break;
        case 2: _t->ShowImage(); break;
        case 3: _t->ThreshChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->Thresh1Change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->DetectSizeChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->SleepTimeChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->StartWork(); break;
        case 8: _t->StopWork(); break;
        case 9: { int _r = _t->find_rect((*reinterpret_cast< Mat(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->find_flaw((*reinterpret_cast< Mat(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
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
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
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
QT_END_MOC_NAMESPACE
