/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 15:56:46
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:38:32
 * @ Description:
 */

#include "my.h"

char *my_strstr(char *haystack, char *needle)
{
    size_t len = my_strlen(needle);
    if (len == 0) {
        return haystack;
    }
    if (!haystack) {
        return NULL;
    }
    while (*haystack) {
        if (my_strncmp(haystack, needle, len) == 0) {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}