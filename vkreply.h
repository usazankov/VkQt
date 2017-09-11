#ifndef VKREPLY_H
#define VKREPLY_H

#include <QNetworkReply>
#include <QObject>
#include <QDebug>
#include "vkqt_global.h"
class VKQTSHARED_EXPORT VkReply : public QObject
{
    Q_OBJECT
public:
    VkReply(QNetworkReply* pnr = 0);
    virtual ~VkReply();
signals:
    void resultReady(const QVariantMap &variables);
    void error(int code);
public slots:
    void receivedReply(QNetworkReply * r);
private:
    QNetworkReply * reply;
};

#endif // VKREPLY_H
