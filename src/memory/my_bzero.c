/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:30:09
 * @ Modified by: Your name
 * @ Modified time: 2024-12-29 23:31:37
 * @ Description:
 */

#include "my.h"

void my_bzero(void *s, size_t n)
{
    char *ptr = s;

    for (size_t i = 0; i < n; i++)
        ptr[i] = 0;
}