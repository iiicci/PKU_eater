/****************************************************************************
** Meta object code from reading C++ file 'cuisinedetails.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cuisinedetails.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cuisinedetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCuisineDetailsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCuisineDetailsENDCLASS = QtMocHelpers::stringData(
    "CuisineDetails",
    "on_backToMain_clicked",
    "",
    "on_upvote_clicked",
    "on_enterComment_clicked",
    "on_downvote_clicked",
    "on_changeSelectedComments_clicked",
    "on_showAllComment_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCuisineDetailsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CuisineDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSCuisineDetailsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCuisineDetailsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCuisineDetailsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CuisineDetails, std::true_type>,
        // method 'on_backToMain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_upvote_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_enterComment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_downvote_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeSelectedComments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_showAllComment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CuisineDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CuisineDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_backToMain_clicked(); break;
        case 1: _t->on_upvote_clicked(); break;
        case 2: _t->on_enterComment_clicked(); break;
        case 3: _t->on_downvote_clicked(); break;
        case 4: _t->on_changeSelectedComments_clicked(); break;
        case 5: _t->on_showAllComment_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CuisineDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CuisineDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCuisineDetailsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CuisineDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
