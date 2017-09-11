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
    VkReply *execute(VKRequest * req);
    static VkQt *instance();
    VkUsers *users();
    VkFriends *friends();
    virtual ~VkQt();
private:
    static VkQt *_self;
    VkManager *manager;
    VkUsers * us;
    VkFriends * fr;
    VkQt();
    VkQt(const VkQt& root);
    VkQt& operator=(const VkQt&);
};

#endif // VKQT_H
