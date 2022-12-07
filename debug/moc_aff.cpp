/****************************************************************************
** Meta object code from reading C++ file 'aff.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../g_empl/aff.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aff.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_aff_t {
    QByteArrayData data[17];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_aff_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_aff_t qt_meta_stringdata_aff = {
    {
QT_MOC_LITERAL(0, 0, 3), // "aff"
QT_MOC_LITERAL(1, 4, 29), // "on_ajouter_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 30), // "on_suprimer_pushButton_clicked"
QT_MOC_LITERAL(4, 66, 30), // "on_afficher_pushButton_clicked"
QT_MOC_LITERAL(5, 97, 31), // "on_modiffier_pushButton_clicked"
QT_MOC_LITERAL(6, 129, 30), // "on_chercher_pushButton_clicked"
QT_MOC_LITERAL(7, 160, 25), // "on_pdf_pushButton_clicked"
QT_MOC_LITERAL(8, 186, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(9, 212, 4), // "date"
QT_MOC_LITERAL(10, 217, 33), // "on_pushButton_add_clicked_cli..."
QT_MOC_LITERAL(11, 251, 26), // "on_stat_pushButton_clicked"
QT_MOC_LITERAL(12, 278, 8), // "readfile"
QT_MOC_LITERAL(13, 287, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(14, 315, 5), // "index"
QT_MOC_LITERAL(15, 321, 17), // "on_update_clicked"
QT_MOC_LITERAL(16, 339, 23) // "on_pushButton_7_clicked"

    },
    "aff\0on_ajouter_pushButton_clicked\0\0"
    "on_suprimer_pushButton_clicked\0"
    "on_afficher_pushButton_clicked\0"
    "on_modiffier_pushButton_clicked\0"
    "on_chercher_pushButton_clicked\0"
    "on_pdf_pushButton_clicked\0"
    "on_calendarWidget_clicked\0date\0"
    "on_pushButton_add_clicked_clicked\0"
    "on_stat_pushButton_clicked\0readfile\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_update_clicked\0on_pushButton_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_aff[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void aff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        aff *_t = static_cast<aff *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_pushButton_clicked(); break;
        case 1: _t->on_suprimer_pushButton_clicked(); break;
        case 2: _t->on_afficher_pushButton_clicked(); break;
        case 3: _t->on_modiffier_pushButton_clicked(); break;
        case 4: _t->on_chercher_pushButton_clicked(); break;
        case 5: _t->on_pdf_pushButton_clicked(); break;
        case 6: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_add_clicked_clicked(); break;
        case 8: _t->on_stat_pushButton_clicked(); break;
        case 9: _t->readfile(); break;
        case 10: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_update_clicked(); break;
        case 12: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject aff::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_aff.data,
      qt_meta_data_aff,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *aff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_aff.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int aff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
