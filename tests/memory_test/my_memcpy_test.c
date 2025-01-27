/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:12:01
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:12:24
 * @ Description:
 */

#include "my.h"

Test(my_memcpy, test_0)
{
    char str[6] = "Hello";
    char str2[6] = "World";
    my_memcpy(str, str2, 6);
    cr_assert_str_eq(str, "World");
}

Test(my_memcpy, test_1)
{
    char str[6] = "Hello";
    char str2[6] = "World";
    my_memcpy(str, str2, 3);
    cr_assert_str_eq(str, "Worlo");
}