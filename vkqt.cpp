#include "vkqt.h"


VkQt::VkQt()
{

}

VkManager VkQt::manager;
VkUsers VkQt::users;

VkReply *VkQt::execute(VKRequest *req)
{
    if(req)
    {
        return manager.execute(req);
    }

    return nullptr;
}

VkQt::~VkQt()
{

}
