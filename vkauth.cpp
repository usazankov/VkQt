#include "vkauth.h"

VkAuth::VkAuth(int appId, QNetworkAccessManager *manager, QObject *parent) : QObject(parent),
    clientId(appId),
    manager(manager),
    scopes(VkAuth::Notify|
                 VkAuth::Friends|
                 VkAuth::Photos|
                 VkAuth::Audio|
                 VkAuth::Video|
                 VkAuth::Docs|
                 VkAuth::Notes|
                 VkAuth::Pages|
                 VkAuth::Status|
                 VkAuth::Offers|
                 VkAuth::Questions|
                 VkAuth::Wall|
                 VkAuth::Groups|
                 VkAuth::Messages|
                 VkAuth::Notifications|
                 VkAuth::Stats|
                 VkAuth::Ads|
                 VkAuth::Offline),
    redirectUri(QLatin1String("http://oauth.vk.com/blank.html")),
    responseType(QLatin1String("token")),
    uid(0),
    expiresIn(0)
{

}

VKRequest VkAuth::requestToken() const
{
    QUrl url = vkqt::authUrl;
    QUrlQuery query;
    query.addQueryItem(QLatin1String("client_id"), QByteArray::number(clientId));
    query.addQueryItem(QLatin1String("scope"), vkqt::flagsToStrList(scopes, vkqt::scopeNames).join(","));
    query.addQueryItem(QLatin1String("redirect_uri"), redirectUri);
    const char *type[] = {
        "page",
        "popup",
        "touch",
        "wap"
    };
    query.addQueryItem(QLatin1String("response_type"), responseType);
    url.setQuery(query);
}
