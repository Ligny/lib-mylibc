/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 11:31:35
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:19:37
 * @ Description:
 */

#include "my.h"

size_t my_strlen(const char *str)
{
    size_t len = 0;
    if (!str) {
        return 0;
    }
    while (str[len] != '\0') {
        len++;
    }
    return len;
}