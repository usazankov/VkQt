#include "vkreply.h"

VkReply::VkReply(QNetworkReply *pnr):QObject(pnr)
{
    reply = pnr;
}

VkReply::~VkReply()
{
    qDebug()<<"DELETED!";
}

void VkReply::receivedReply(QNetworkReply * r)
{
    if (r->error() != QNetworkReply::NoError)
    {
        qDebug()<<"ERROR!";
    }
    else
    {
        QJsonObject obj = vkqt::parse(r->readAll());
        qDebug()<<"obj="<<obj.value(obj.keys().at(0)).toString();
        emit resultReady(obj);
    }
    r->deleteLater();
}
