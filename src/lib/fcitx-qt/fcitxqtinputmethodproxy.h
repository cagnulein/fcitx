/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p fcitxqtinputmethodproxy -c FcitxQtInputMethodProxy interfaces/org.fcitx.Fcitx.InputMethod.xml -i fcitxqtinputmethoditem.h -i fcitxqt_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITXQTINPUTMETHODPROXY_H_1354825761
#define FCITXQTINPUTMETHODPROXY_H_1354825761

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxqtinputmethoditem.h"
#include "fcitxqt_export.h"

/*
 * Proxy class for interface org.fcitx.Fcitx.InputMethod
 */
class FCITX_QT_EXPORT_API FcitxQtInputMethodProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.InputMethod"; }

public:
    FcitxQtInputMethodProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~FcitxQtInputMethodProxy();

    Q_PROPERTY(FcitxQtInputMethodItemList IMList READ iMList WRITE setIMList)
    inline FcitxQtInputMethodItemList iMList() const
    { return qvariant_cast< FcitxQtInputMethodItemList >(property("IMList")); }
    inline void setIMList(FcitxQtInputMethodItemList value)
    { setProperty("IMList", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ActivateIM()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ActivateIM"), argumentList);
    }

    inline QDBusPendingReply<> Configure()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Configure"), argumentList);
    }

    inline QDBusPendingReply<> ConfigureAddon(const QString &addon)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(addon);
        return asyncCallWithArgumentList(QLatin1String("ConfigureAddon"), argumentList);
    }

    inline QDBusPendingReply<QString> GetCurrentIM()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCurrentIM"), argumentList);
    }

    inline QDBusPendingReply<int> GetCurrentState()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCurrentState"), argumentList);
    }

    inline QDBusPendingReply<QString> GetCurrentUI()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCurrentUI"), argumentList);
    }

    inline QDBusPendingReply<QString> GetIMAddon(const QString &im)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(im);
        return asyncCallWithArgumentList(QLatin1String("GetIMAddon"), argumentList);
    }

    inline QDBusPendingReply<> InactivateIM()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("InactivateIM"), argumentList);
    }

    inline QDBusPendingReply<> ReloadConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ReloadConfig"), argumentList);
    }

    inline QDBusPendingReply<> Restart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Restart"), argumentList);
    }

    inline QDBusPendingReply<> SetCurrentIM(const QString &im)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(im);
        return asyncCallWithArgumentList(QLatin1String("SetCurrentIM"), argumentList);
    }

    inline QDBusPendingReply<> ToggleIM()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ToggleIM"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif