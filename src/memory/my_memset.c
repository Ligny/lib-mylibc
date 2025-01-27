/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 15:50:54
 * @ Modified by: Your name
 * @ Modified time: 2024-12-13 05:39:11
 * @ Description:
 */

#include "my.h"

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    while (n--) {
        *ptr++ = (unsigned char)c;
    }
    return s;
}