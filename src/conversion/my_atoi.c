/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:39:01
 * @ Modified by: Your name
 * @ Modified time: 2024-12-29 23:39:16
 * @ Description:
 */

#include "my.h"

int my_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    for (; str[i]; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        res = res * 10 + str[i] - '0';
    }
    return res * sign;
}