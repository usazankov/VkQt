#ifndef VKUSERS_H
#define VKUSERS_H
#include "vkrequest.h"
#include "vkqt_global.h"
class VkUsers
{
public:
    VkUsers();
    VKRequest get(const QVariantMap &args);
    VKRequest search(const QVariantMap &args);
    VKRequest isAppUser();
};

#endif // VKUSERS_H
