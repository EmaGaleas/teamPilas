/****************************************************************************
** Meta object code from reading C++ file 'cframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TDA/cframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cframe_t {
    QByteArrayData data[13];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cframe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cframe_t qt_meta_stringdata_cframe = {
    {
QT_MOC_LITERAL(0, 0, 6), // "cframe"
QT_MOC_LITERAL(1, 7, 23), // "on_btn_ingresar_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_pb_doble_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_RB_Lista_clicked"
QT_MOC_LITERAL(5, 72, 18), // "on_RB_Pila_clicked"
QT_MOC_LITERAL(6, 91, 18), // "on_RB_Cola_clicked"
QT_MOC_LITERAL(7, 110, 19), // "on_RB_Arbol_clicked"
QT_MOC_LITERAL(8, 130, 20), // "on_RB_Simple_clicked"
QT_MOC_LITERAL(9, 151, 19), // "on_RB_Doble_clicked"
QT_MOC_LITERAL(10, 171, 22), // "on_Btn_Aceptar_clicked"
QT_MOC_LITERAL(11, 194, 23), // "on_TB_Letra_textChanged"
QT_MOC_LITERAL(12, 218, 4) // "arg1"

    },
    "cframe\0on_btn_ingresar_clicked\0\0"
    "on_pb_doble_clicked\0on_RB_Lista_clicked\0"
    "on_RB_Pila_clicked\0on_RB_Cola_clicked\0"
    "on_RB_Arbol_clicked\0on_RB_Simple_clicked\0"
    "on_RB_Doble_clicked\0on_Btn_Aceptar_clicked\0"
    "on_TB_Letra_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cframe[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void cframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cframe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_ingresar_clicked(); break;
        case 1: _t->on_pb_doble_clicked(); break;
        case 2: _t->on_RB_Lista_clicked(); break;
        case 3: _t->on_RB_Pila_clicked(); break;
        case 4: _t->on_RB_Cola_clicked(); break;
        case 5: _t->on_RB_Arbol_clicked(); break;
        case 6: _t->on_RB_Simple_clicked(); break;
        case 7: _t->on_RB_Doble_clicked(); break;
        case 8: _t->on_Btn_Aceptar_clicked(); break;
        case 9: _t->on_TB_Letra_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cframe::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_cframe.data,
    qt_meta_data_cframe,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cframe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cframe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
