/****************************************************************************
** Meta object code from reading C++ file 'calendrier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../g_empl/calendrier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendrier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calendrier_t {
    QByteArrayData data[8];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calendrier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calendrier_t qt_meta_stringdata_Calendrier = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Calendrier"
QT_MOC_LITERAL(1, 11, 11), // "setFontSize"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "size"
QT_MOC_LITERAL(4, 29, 8), // "setMonth"
QT_MOC_LITERAL(5, 38, 5), // "month"
QT_MOC_LITERAL(6, 44, 7), // "setYear"
QT_MOC_LITERAL(7, 52, 4) // "date"

    },
    "Calendrier\0setFontSize\0\0size\0setMonth\0"
    "month\0setYear\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calendrier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QDate,    7,

       0        // eod
};

void Calendrier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calendrier *_t = static_cast<Calendrier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setYear((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Calendrier::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Calendrier.data,
      qt_meta_data_Calendrier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Calendrier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calendrier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calendrier.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calendrier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
