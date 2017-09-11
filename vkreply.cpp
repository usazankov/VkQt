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
    if (r->error() != QNetworkReply::NoError) {
        qDebug()<<"ERROR!";
    }
    else {
        qDebug()<<"buf_size="<<r->readAll();
    }
    r->deleteLater();
}
