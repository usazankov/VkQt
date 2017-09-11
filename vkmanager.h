#ifndef VKMANAGER_H
#define VKMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkReply>
#include "vkrequest.h"
#include "vkreply.h"
class VkManager : public QObject
{
    Q_OBJECT
public:
    explicit VkManager(QObject *parent = nullptr);
    VkReply * execute(VKRequest * request);
    ~VkManager();
private:
    QNetworkAccessManager* m_pnam;
signals:

};

#endif // VKMANAGER_H
