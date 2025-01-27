/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:19:27
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:07:00
 * @ Description:
 */

#include "my.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    for (i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}