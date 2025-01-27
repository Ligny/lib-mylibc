/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:21:21
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:26:22
 * @ Description:
 */

#include "my.h"

void *my_memmove(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;
    char *tmp = my_malloc(n);

    if (tmp == NULL)
        return NULL;
    for (size_t i = 0; i < n; i++)
        tmp[i] = s[i];
    for (size_t i = 0; i < n; i++)
        d[i] = tmp[i];
    my_free(tmp);
    return dest;
}