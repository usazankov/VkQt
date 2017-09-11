#ifndef VKPARSER_H
#define VKPARSER_H

#include <QVariantMap>
#include "vkqt_global.h"
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QDebug>
namespace vkqt{
    VKQTSHARED_EXPORT QJsonObject parse(const QByteArray &data);
    VKQTSHARED_EXPORT QByteArray generate(const QVariant &data, int indent = 0);
}
#endif // VKPARSER_H
