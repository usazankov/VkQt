#include "vkusers.h"

VkUsers::VkUsers()
{

}

VKRequest VkUsers::get(const QVariantMap &args)
{
    VKRequest req("users.get", args);
    return req;
}

VKRequest VkUsers::search(const QVariantMap &args)
{
    VKRequest req("users.search", args);
    return req;
}

VKRequest VkUsers::isAppUser()
{
    VKRequest req("isAppUser");
    return req;
}
