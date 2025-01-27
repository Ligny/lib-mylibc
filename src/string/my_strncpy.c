/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 20:31:23
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:24:27
 * @ Description:
 */

#include "my.h"

char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    if (!src) {
        dest[0] = '\0';
        return dest;
    }
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}