/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 15:57:38
 * @ Modified by: Your name
 * @ Modified time: 2024-12-10 15:58:03
 * @ Description:
 */

#include "my.h"

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n--) {
        if (*s1 != *s2) {
            return *s1 - *s2;
        } if (*s1 == '\0'){
            return 0;
        }
        s1++;
        s2++;
    }
    return 0;
}