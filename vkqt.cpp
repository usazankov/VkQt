#include "vkqt.h"

VkQt* VkQt::_self = nullptr;

VkQt::VkQt()
{
    manager = new VkManager();
    us = nullptr;
    fr = nullptr;
}

VkReply *VkQt::execute(VKRequest *req)
{
    if(req)
    {
        return manager->execute(req);
    }

    return nullptr;
}

VkQt *VkQt::instance()
{
    if(!_self)
    {
        _self = new VkQt();
    }
    return _self;
}

VkUsers *VkQt::users()
{
    if(us == nullptr)
    {
        us = new VkUsers();
    }
    return us;
}

VkFriends *VkQt::friends()
{
    if(fr == nullptr)
    {
        fr = new VkFriends();
    }
    return fr;
}

VkQt::~VkQt()
{

}
