#ifndef VKFRIENDS_H
#define VKFRIENDS_H

#include <QVariantMap>
#include "vkrequest.h"
class VkFriends
{
public:
    VkFriends();
    VKRequest get(const QVariantMap &args);

    VKRequest getOnline(const QVariantMap &args);

    VKRequest getMutual(const QVariantMap &args);

    VKRequest getRecent(const QVariantMap &args);

    VKRequest getRequests(const QVariantMap &args);

    VKRequest add(const QVariantMap &args);

    VKRequest edit(const QVariantMap &args);

    VKRequest deletefriend(const QVariantMap &args);

    VKRequest getLists(const QVariantMap &args);

    VKRequest addList(const QVariantMap &args);

    VKRequest editList(const QVariantMap &args);

    VKRequest deleteList(const QVariantMap &args);

    VKRequest getAppUsers(const QVariantMap &args);

    VKRequest getByPhones(const QVariantMap &args);

    VKRequest deleteAllRequests(const QVariantMap &args);

    VKRequest getSuggestions(const QVariantMap &args);

    VKRequest areFriends(const QVariantMap &args);
};

#endif // VKFRIENDS_H
