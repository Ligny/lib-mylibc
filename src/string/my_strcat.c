/**
 * @ Author: Your name
 * @ Create Time: 2024-12-27 16:28:28
 * @ Modified by: Your name
 * @ Modified time: 2024-12-27 16:31:23
 * @ Description:
 */

#include "my.h"

char *my_strcat(char *restrict to, const char *restrict from)
{
    int i = 0;
    int j = 0;

    while (to[i])
        i++;
    while (from[j]) {
        to[i] = from[j];
        i++;
        j++;
    }
    to[i] = '\0';
    return to;
}