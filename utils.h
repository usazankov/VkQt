#ifndef UTILS_H
#define UTILS_H
#include <QStringList>
namespace vkqt {

template<int N>
Q_INLINE_TEMPLATE QStringList flagsToStrList(int i, const char *(&strings)[N])
{
    QStringList list;
    for (int pos = 0; pos < N; pos++) {
        int flag = 1 << pos;
        if ((flag) & i)
            list.append(strings[pos]);
    }
    return list;
}
}
#endif // UTILS_H
