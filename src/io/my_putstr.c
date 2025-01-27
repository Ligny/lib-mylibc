/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 12:08:20
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:39:20
 * @ Description:
 */

#include "my.h"

void my_putstr(const char *str)
{
    if (!str) {
        return;
    }
    size_t len = my_strlen(str);
    write(1, str, len);
}