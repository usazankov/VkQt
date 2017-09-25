#ifndef VKQT_GLOBAL_H
#define VKQT_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QUrl>
#include "utils.h"
#if defined(VKQT_LIBRARY)
#  define VKQTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VKQTSHARED_EXPORT Q_DECL_IMPORT
#endif

namespace vkqt
{
const static QUrl apiUrl("https://api.vk.com/method/");
const static QUrl authUrl("http://api.vk.com/oauth/authorize");
//Commons
const static QString USER_ID = "user_id";
const static QString USER_IDS = "user_ids";
const static QString FIELDS = "fields";
const static QString SORT = "sort";
const static QString OFFSET = "offset";
const static QString COUNT = "count";
const static QString OWNER_ID = "owner_id";

//auth
const static QString VERSION = "v";
const static QString HTTPS = "https";
const static QString LANG = "lang";
const static QString ACCESS_TOKEN = "access_token";
const static QString SIG = "sig";

//get users
const static QString NAME_CASE = "name_case";

//Messages
const static QString OUT = "out";
const static QString TIME_OFFSET = "time_offset";
const static QString FILTERS = "filters";
const static QString LAST_MESSAGE_ID = "last_message_id";
const static QString START_MESSAGE_ID = "start_message_id";
const static QString PREVIEW_LENGTH = "preview_length";
const static QString UNREAD = "unread";

//Get subscriptions
const static QString EXTENDED = "extended";

//Search
const static QString Q = "q";
const static QString CITY = "city";
const static QString COUNTRY = "country";
const static QString HOMETOWN = "hometown";
const static QString UNIVERSITY_COUNTRY = "university_country";
const static QString UNIVERSITY = "university";
const static QString UNIVERSITY_YEAR = "university_year";
const static QString SEX = "sex";
const static QString STATUS = "status";
const static QString AGE_FROM = "age_from";
const static QString AGE_TO = "age_to";
const static QString BIRTH_DAY = "birth_day";
const static QString BIRTH_MONTH = "birth_month";
const static QString BIRTH_YEAR = "birth_year";
const static QString ONLINE = "online";
const static QString HAS_PHOTO = "has_photo";
const static QString SCHOOL_COUNTRY = "school_country";
const static QString SCHOOL_CITY = "school_city";
const static QString SCHOOL = "school";
const static QString SCHOOL_YEAR = "school_year";
const static QString RELIGION = "religion";
const static QString INTERESTS = "interests";
const static QString COMPANY = "company";
const static QString POSITION = "position";
const static QString GROUP_ID = "group_id";

const static QString FRIENDS_ONLY = "friends_only";
const static QString FROM_GROUP = "from_group";
const static QString MESSAGE = "message";
const static QString ATTACHMENTS = "attachments";
const static QString SERVICES = "services";
const static QString SIGNED = "signed";
const static QString PUBLISH_DATE = "publish_date";
const static QString LAT = "lat";
const static QString LONG = "long";
const static QString PLACE_ID = "place_id";
const static QString POST_ID = "post_id";
const static QString POSTS = "posts";

//Errors
const static QString ERROR_CODE = "error_code";
const static QString ERROR_MSG = "error_msg";
const static QString REQUEST_PARAMS = "request_params";

//Captcha
const static QString CAPTCHA_IMG = "captcha_img";
const static QString CAPTCHA_SID = "captcha_sid";
const static QString CAPTCHA_KEY = "captcha_key";
const static QString REDIRECT_URI = "redirect_uri";

//Photos
const static QString PHOTO = "photo";
const static QString PHOTOS = "photos";
const static QString ALBUM_ID = "album_id";
const static QString PHOTO_IDS = "photo_ids";
const static QString PHOTO_SIZES = "photo_sizes";
const static QString REV = "rev";
const static QString FEED_TYPE = "feed_type";
const static QString FEED = "feed";
}
#endif // VKQT_GLOBAL_H
