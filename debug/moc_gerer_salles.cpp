/****************************************************************************
** Meta object code from reading C++ file 'gerer_salles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../g_empl/gerer_salles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gerer_salles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gerer_salles_t {
    QByteArrayData data[17];
    char stringdata0[433];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gerer_salles_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gerer_salles_t qt_meta_stringdata_gerer_salles = {
    {
QT_MOC_LITERAL(0, 0, 12), // "gerer_salles"
QT_MOC_LITERAL(1, 13, 35), // "on_pushButton_ajoute_ghatas_c..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 37), // "on_pushButton_modifier_ghatas..."
QT_MOC_LITERAL(4, 88, 38), // "on_pushButton_supprimer_ghata..."
QT_MOC_LITERAL(5, 127, 32), // "on_pushButton_pdf_ghatas_clicked"
QT_MOC_LITERAL(6, 160, 40), // "on_lineEdit_recherche_ghatas_..."
QT_MOC_LITERAL(7, 201, 4), // "arg1"
QT_MOC_LITERAL(8, 206, 34), // "on_pushButton_trier_ghatas_cl..."
QT_MOC_LITERAL(9, 241, 33), // "on_pushButton_stat_ghatas_cli..."
QT_MOC_LITERAL(10, 275, 5), // "write"
QT_MOC_LITERAL(11, 281, 4), // "read"
QT_MOC_LITERAL(12, 286, 35), // "on_pushButton_entree_ghatas_c..."
QT_MOC_LITERAL(13, 322, 35), // "on_pushButton_sortie_ghatas_c..."
QT_MOC_LITERAL(14, 358, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(15, 383, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(16, 408, 24) // "on_pushButton_12_clicked"

    },
    "gerer_salles\0on_pushButton_ajoute_ghatas_clicked\0"
    "\0on_pushButton_modifier_ghatas_clicked\0"
    "on_pushButton_supprimer_ghatas_clicked\0"
    "on_pushButton_pdf_ghatas_clicked\0"
    "on_lineEdit_recherche_ghatas_textChanged\0"
    "arg1\0on_pushButton_trier_ghatas_clicked\0"
    "on_pushButton_stat_ghatas_clicked\0"
    "write\0read\0on_pushButton_entree_ghatas_clicked\0"
    "on_pushButton_sortie_ghatas_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_12_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gerer_salles[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gerer_salles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gerer_salles *_t = static_cast<gerer_salles *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ajoute_ghatas_clicked(); break;
        case 1: _t->on_pushButton_modifier_ghatas_clicked(); break;
        case 2: _t->on_pushButton_supprimer_ghatas_clicked(); break;
        case 3: _t->on_pushButton_pdf_ghatas_clicked(); break;
        case 4: _t->on_lineEdit_recherche_ghatas_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_trier_ghatas_clicked(); break;
        case 6: _t->on_pushButton_stat_ghatas_clicked(); break;
        case 7: _t->write((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->read(); break;
        case 9: _t->on_pushButton_entree_ghatas_clicked(); break;
        case 10: _t->on_pushButton_sortie_ghatas_clicked(); break;
        case 11: _t->on_pushButton_10_clicked(); break;
        case 12: _t->on_pushButton_11_clicked(); break;
        case 13: _t->on_pushButton_12_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject gerer_salles::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gerer_salles.data,
      qt_meta_data_gerer_salles,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gerer_salles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gerer_salles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gerer_salles.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gerer_salles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
