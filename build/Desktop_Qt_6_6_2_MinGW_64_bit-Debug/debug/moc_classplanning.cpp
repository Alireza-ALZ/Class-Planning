/****************************************************************************
** Meta object code from reading C++ file 'classplanning.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../classplanning.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'classplanning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSClassPlanningENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClassPlanningENDCLASS = QtMocHelpers::stringData(
    "ClassPlanning",
    "on_teachers_currentTextChanged",
    "",
    "currentOption",
    "on_recordButton_clicked",
    "on_finalSubmitButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClassPlanningENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[24];
    char stringdata5[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClassPlanningENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClassPlanningENDCLASS_t qt_meta_stringdata_CLASSClassPlanningENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ClassPlanning"
        QT_MOC_LITERAL(14, 30),  // "on_teachers_currentTextChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 13),  // "currentOption"
        QT_MOC_LITERAL(60, 23),  // "on_recordButton_clicked"
        QT_MOC_LITERAL(84, 28)   // "on_finalSubmitButton_clicked"
    },
    "ClassPlanning",
    "on_teachers_currentTextChanged",
    "",
    "currentOption",
    "on_recordButton_clicked",
    "on_finalSubmitButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClassPlanningENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    0,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClassPlanning::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSClassPlanningENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClassPlanningENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClassPlanningENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClassPlanning, std::true_type>,
        // method 'on_teachers_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_recordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_finalSubmitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClassPlanning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClassPlanning *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_teachers_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_recordButton_clicked(); break;
        case 2: _t->on_finalSubmitButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ClassPlanning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassPlanning::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClassPlanningENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ClassPlanning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
