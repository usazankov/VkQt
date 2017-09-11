#ifndef VKQT_H
#define VKQT_H

#include "vkqt_global.h"
#include "vkmanager.h"
#include "methods/vkusers.h"
#include "methods/vkfriends.h"
#include <iostream>
class VKQTSHARED_EXPORT VkQt
{
public:
    static VkReply *execute(VKRequest * req);
    static VkUsers users;
    static VkFriends friends;
    virtual ~VkQt();
private:
    static VkManager manager;
    VkQt();
    VkQt(const VkQt& root);
    VkQt& operator=(const VkQt&);
};

#endif // VKQT_H
