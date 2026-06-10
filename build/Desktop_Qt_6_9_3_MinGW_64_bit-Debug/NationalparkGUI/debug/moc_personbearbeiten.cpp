/****************************************************************************
** Meta object code from reading C++ file 'personbearbeiten.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../NationalparkGUI/personbearbeiten.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personbearbeiten.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
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
struct qt_meta_tag_ZN16personBearbeitenE_t {};
} // unnamed namespace

template <> constexpr inline auto personBearbeiten::qt_create_metaobjectdata<qt_meta_tag_ZN16personBearbeitenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "personBearbeiten",
        "on_actiontier_json_triggered",
        "",
        "on_actionperson_json_triggered",
        "on_actionBeenden_triggered",
        "on_actionFull_screen_triggered",
        "on_actionMinimize_triggered",
        "on_actionNormal_triggered",
        "on_rangerWaehlenPushButton_clicked",
        "on_verwalterWaehlenPushButton_clicked",
        "on_wissenschaftlerWaehlenPushButton_clicked",
        "on_zurueckInRangerBearbeitenPushButton_clicked",
        "on_zurueckInVerwalterPushButoon_clicked",
        "on_zurueckInWissPushButton_clicked",
        "on_hinzufuegenInRangerBearbeitenPushButton_clicked",
        "on_hinzufuegenInVerwalterPushButton_clicked",
        "on_hinzufuegenInWissPushButoon_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_actiontier_json_triggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionperson_json_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionBeenden_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFull_screen_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMinimize_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNormal_triggered'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rangerWaehlenPushButton_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_verwalterWaehlenPushButton_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_wissenschaftlerWaehlenPushButton_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_zurueckInRangerBearbeitenPushButton_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_zurueckInVerwalterPushButoon_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_zurueckInWissPushButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hinzufuegenInRangerBearbeitenPushButton_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hinzufuegenInVerwalterPushButton_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hinzufuegenInWissPushButoon_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<personBearbeiten, qt_meta_tag_ZN16personBearbeitenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject personBearbeiten::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16personBearbeitenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16personBearbeitenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16personBearbeitenE_t>.metaTypes,
    nullptr
} };

void personBearbeiten::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<personBearbeiten *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_actiontier_json_triggered(); break;
        case 1: _t->on_actionperson_json_triggered(); break;
        case 2: _t->on_actionBeenden_triggered(); break;
        case 3: _t->on_actionFull_screen_triggered(); break;
        case 4: _t->on_actionMinimize_triggered(); break;
        case 5: _t->on_actionNormal_triggered(); break;
        case 6: _t->on_rangerWaehlenPushButton_clicked(); break;
        case 7: _t->on_verwalterWaehlenPushButton_clicked(); break;
        case 8: _t->on_wissenschaftlerWaehlenPushButton_clicked(); break;
        case 9: _t->on_zurueckInRangerBearbeitenPushButton_clicked(); break;
        case 10: _t->on_zurueckInVerwalterPushButoon_clicked(); break;
        case 11: _t->on_zurueckInWissPushButton_clicked(); break;
        case 12: _t->on_hinzufuegenInRangerBearbeitenPushButton_clicked(); break;
        case 13: _t->on_hinzufuegenInVerwalterPushButton_clicked(); break;
        case 14: _t->on_hinzufuegenInWissPushButoon_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *personBearbeiten::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personBearbeiten::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16personBearbeitenE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int personBearbeiten::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
