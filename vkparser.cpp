#include "vkparser.h"
#include <QFile>
QJsonObject vkqt::parse(const QByteArray &data)
{
    QJsonParseError error;
    auto document = QJsonDocument::fromJson(data, &error);
    qDebug()<<"error:"<<error.errorString();
    qDebug()<<document.toJson();
    return document.object();
}

QByteArray vkqt::generate(const QVariant &data, int indent)
{
    Q_UNUSED(indent);
    auto document = QJsonDocument::fromVariant(data);
    return document.toJson(QJsonDocument::Indented);
}
