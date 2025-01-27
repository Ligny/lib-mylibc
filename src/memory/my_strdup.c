/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 16:00:51
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 18:37:51
 * @ Description:
 */

#include "my.h"

char *my_strdup(const char *str)
{
    if (!str) {
        return NULL;
    }
    size_t len = my_strlen(str);
    char *dup = my_malloc(len + 1);
    if (!dup) {
        return NULL;
    }
    my_memset(dup, 0, len + 1);
    my_strncpy(dup, str, len);
    return dup;
}