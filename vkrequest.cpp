#include "vkrequest.h"

VKRequest::VKRequest()
{

}

VKRequest::VKRequest(const QString &method, const QVariantMap &args)
{
    QUrl url = vkqt::apiUrl;
    /*url.setPath(url.path() + QStringLiteral("/") + method);
    {
        QUrlQuery query;
        QVariantMap::const_iterator it = args.cbegin();
        for (; it != args.cend(); it++)
            query.addQueryItem(QUrl::toPercentEncoding(it.key()),
                               QUrl::toPercentEncoding(it.value().toString()));
        url.setQuery(query);
    }*/
    request = new QNetworkRequest(url);
    qDebug()<<url.toString();
}

QNetworkRequest *VKRequest::Request()
{
    return request;
}

VKRequest::~VKRequest()
{
    delete request;
}
