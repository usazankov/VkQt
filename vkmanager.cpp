#include "vkmanager.h"

VkManager::VkManager(QObject *parent) : QObject(parent)
{
    m_pnam = new QNetworkAccessManager(parent);
}

VkReply *VkManager::execute(VKRequest *request)
{
    QNetworkReply* pnr = m_pnam->get(*request->Request());
    VkReply * reply = new VkReply(pnr);
    connect(m_pnam, SIGNAL(finished(QNetworkReply*)), reply, SLOT(receivedReply(QNetworkReply*)));
    return reply;
}

VkManager::~VkManager()
{
    delete m_pnam;
}
