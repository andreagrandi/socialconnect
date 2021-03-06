/**
 * Copyright (c) 2012 Nokia Corporation.
 */

#include <QtDeclarative/QtDeclarative>
#include <QtCore/QtPlugin>

#include "socialconnectplugin.h"
#include "webinterface.h"

#ifdef ENABLE_SMOKE_CONNECTION
#include "smoke/smokeconnection.h"
#endif

#include "facebook/facebookconnection.h"
#include "twitter/twitterconnection.h"
#include "instagram/instagramconnection.h"

void SocialConnectPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<WebInterface>(uri, 1, 0, "WebInterface");
    qmlRegisterType<TwitterConnection>(uri, 1, 0, "TwitterConnection");
    qmlRegisterType<FacebookConnection>(uri, 1, 0, "FacebookConnection");
    qmlRegisterType<InstagramConnection>(uri, 1, 0, "InstagramConnection");

#ifdef ENABLE_SMOKE_CONNECTION
    qmlRegisterType<SmokeConnection>(uri, 1, 0, "SmokeConnection");
#endif
}

Q_EXPORT_PLUGIN2(socialconnect, SocialConnectPlugin)
