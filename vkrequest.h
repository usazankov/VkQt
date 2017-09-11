#ifndef VKREQUEST_H
#define VKREQUEST_H

#include <QObject>
#include <QNetworkRequest>
#include <QUrlQuery>
#include "vkqt_global.h"
#include <QDebug>
class VKQTSHARED_EXPORT VKRequest
{
public:
    explicit VKRequest();
    explicit VKRequest(const QString &method, const QVariantMap &args);
    virtual QNetworkRequest * Request();
    ~VKRequest();
private:
    QNetworkRequest * request;
signals:

public slots:
};

#endif // VKREQUEST_H
