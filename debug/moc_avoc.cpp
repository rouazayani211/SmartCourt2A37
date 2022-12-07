/****************************************************************************
** Meta object code from reading C++ file 'avoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../g_empl/avoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_avoc_t {
    QByteArrayData data[14];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_avoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_avoc_t qt_meta_stringdata_avoc = {
    {
QT_MOC_LITERAL(0, 0, 4), // "avoc"
QT_MOC_LITERAL(1, 5, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(4, 52, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(5, 75, 17), // "on_pb_PDF_clicked"
QT_MOC_LITERAL(6, 93, 18), // "on_rb_tri1_clicked"
QT_MOC_LITERAL(7, 112, 18), // "on_rb_tri2_clicked"
QT_MOC_LITERAL(8, 131, 23), // "on_la_recherche_clicked"
QT_MOC_LITERAL(9, 155, 18), // "on_pb_stat_clicked"
QT_MOC_LITERAL(10, 174, 15), // "on_note_clicked"
QT_MOC_LITERAL(11, 190, 14), // "on_cam_clicked"
QT_MOC_LITERAL(12, 205, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(13, 229, 23) // "on_pushButton_8_clicked"

    },
    "avoc\0on_pb_ajouter_clicked\0\0"
    "on_pb_supprimer_clicked\0on_pb_modifier_clicked\0"
    "on_pb_PDF_clicked\0on_rb_tri1_clicked\0"
    "on_rb_tri2_clicked\0on_la_recherche_clicked\0"
    "on_pb_stat_clicked\0on_note_clicked\0"
    "on_cam_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_avoc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void avoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        avoc *_t = static_cast<avoc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_ajouter_clicked(); break;
        case 1: _t->on_pb_supprimer_clicked(); break;
        case 2: _t->on_pb_modifier_clicked(); break;
        case 3: _t->on_pb_PDF_clicked(); break;
        case 4: _t->on_rb_tri1_clicked(); break;
        case 5: _t->on_rb_tri2_clicked(); break;
        case 6: _t->on_la_recherche_clicked(); break;
        case 7: _t->on_pb_stat_clicked(); break;
        case 8: _t->on_note_clicked(); break;
        case 9: _t->on_cam_clicked(); break;
        case 10: _t->on_pushButton_7_clicked(); break;
        case 11: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject avoc::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_avoc.data,
      qt_meta_data_avoc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *avoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *avoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_avoc.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int avoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
