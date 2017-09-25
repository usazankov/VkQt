#ifndef VKAUTH_H
#define VKAUTH_H

#include <QObject>
#include <vkrequest.h>
#include <QNetworkAccessManager>
namespace vkqt {
const static char *scopeNames[] = { "notify", "friends", "photos", "audio",
                                    "video", "docs", "notes", "pages", "status", "offers", "questions", "wall",
                                    "groups", "messages", "notifications", "stats", "ads", "offline" };
}
class VkAuth : public QObject
{
    Q_OBJECT
    Q_FLAGS(Scopes)
public:
    explicit VkAuth(int appId, QNetworkAccessManager *manager, QObject *parent = nullptr);
    VKRequest requestToken()const;
    enum Scope {
        Notify        = 0x1,
        Friends       = 0x2,
        Photos        = 0x4,
        Audio         = 0x8,
        Video         = 0x10,
        Docs          = 0x20,
        Notes         = 0x40,
        Pages         = 0x80,
        Status        = 0x100,
        Offers        = 0x200,
        Questions     = 0x400,
        Wall          = 0x800,
        Groups        = 0x1000,
        Messages      = 0x2000,
        Notifications = 0x4000,
        Stats         = 0x8000,
        Ads           = 0x10000,
        Offline       = 0x20000
    };
    Q_DECLARE_FLAGS(Scopes, Scope)
private:
    int clientId;
    QString redirectUri;
    QString responseType;
    Scopes scopes; //settings
    QString login;
    QString password;
    QNetworkAccessManager *manager;
    //response
    QString accessToken;
    int uid;
    time_t expiresIn;
signals:

public slots:
};
Q_DECLARE_OPERATORS_FOR_FLAGS(VkAuth::Scopes)
#endif // VKAUTH_H
