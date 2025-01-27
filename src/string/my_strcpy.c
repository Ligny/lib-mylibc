/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:44:21
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:52:06
 * @ Description:
 */

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    if (!src) {
        dest[0] = '\0';
        return dest;
    }
    size_t len = my_strlen(src);
    my_strncpy(dest, src, len);
    return dest;
}