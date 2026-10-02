# VkQt

Qt-обёртка над VK API: динамическая библиотека на C++, выполняющая запросы к методам VK API через `QNetworkAccessManager` и возвращающая ответы в виде `QJsonObject`. Разработка велась в сентябре 2017 года.

## Возможности

- Произвольный запрос: `VKRequest(method, args)` — имя метода и параметры (`QVariantMap`) превращаются в GET-запрос на `https://api.vk.com/method/<метод>`.
- Разбор ответов JSON, результат выдаётся сигналом `VkReply::resultReady(const QJsonObject&)`.
- Авторизация OAuth 2.0 (implicit flow): `VkAuth` строит URL `oauth/authorize` с `response_type=token` и `redirect_uri=http://oauth.vk.com/blank.html`; права задаются флагами `VkAuth::Scopes` — 18 флагов (notify, friends, photos, audio, video, docs, notes, pages, status, wall, groups, messages, offline и др.). Реализация `VkAuth::requestToken()` не завершена: URL собирается, запрос не возвращается.
- Обёрнутые методы API (каталог `methods/`):
  - `VkUsers` — реализованы `users.get`, `users.search`, `isAppUser`;
  - `VkFriends` — 17 методов только объявлены, тела пустые: `get`, `getOnline`, `getMutual`, `getRecent`, `getRequests`, `add`, `edit`, `deletefriend`, `getLists`, `addList`, `editList`, `deleteList`, `getAppUsers`, `getByPhones`, `deleteAllRequests`, `getSuggestions`, `areFriends`.

## Архитектура

- `VkQt` (`vkqt.h`) — синглтон (`VkQt::instance()`), публичный фасад: `execute(VKRequest*)`, `users()`, `friends()`.
- `VkManager` (`vkmanager.h`) — владеет `QNetworkAccessManager`, отправляет запрос и возвращает `VkReply`.
- `VkAuth` (`vkauth.h`) — URL авторизации OAuth 2.0 и флаги прав доступа.
- `VKRequest` (`vkrequest.h`) — описание запроса: метод + параметры → `QNetworkRequest`.
- `VkReply` (`vkreply.h`) — обёртка `QNetworkReply`; сигналы `resultReady(const QJsonObject&)`, `error(int)`.
- `vkqt::parse` / `vkqt::generate` (`vkparser.h`) — разбор/генерация JSON через `QJsonDocument`.
- `vkqt_global.h` — экспорт библиотеки и константы имён параметров VK API; `utils.h` — преобразование битовых флагов scope в список строк.

## Технологии

- C++, Qt 5; модуль `network` (`QNetworkAccessManager`, `QNetworkRequest`, `QNetworkReply`), GUI отключён (`QT -= gui`).
- QtCore: `QJsonDocument`, `QJsonObject`, `QVariantMap`, `QUrl`, `QUrlQuery`.

## Использование

Пример по сигнатурам из кода:

```cpp
VkQt *vk = VkQt::instance();

VKRequest req = vk->users()->get(QVariantMap{
    { "user_ids", "1" },
    { "fields", "nickname" }
});

VkReply *reply = vk->execute(&req);
QObject::connect(reply, &VkReply::resultReady,
                 [](const QJsonObject &obj) { /* обработка ответа */ });
```

## Сборка

qmake (`TEMPLATE = lib`, цель `VkQt`):

```
qmake VkQt.pro
make
```

На Unix `make install` устанавливает библиотеку в `/usr/lib` (задано в `VkQt.pro`).

## Связанные проекты

- [VkApp](https://github.com/usazankov/VkApp) — пример приложения, использующего VkQt.

## Статус

Личный проект 2017 года: 6 коммитов с 11.09.2017 по 25.09.2017, затем разработка прекращена. Не поддерживается.
