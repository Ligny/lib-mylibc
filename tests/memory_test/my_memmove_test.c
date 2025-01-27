/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:12:55
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:13:05
 * @ Description:
 */

#include "my.h"

Test(my_memmove, test_0)
{
    char str[6] = "Hello";
    my_memmove(str, str + 1, 4);
    cr_assert_str_eq(str, "elloo");
}

Test(my_memmove, test_1)
{
    char str[6] = "Hello";
    my_memmove(str, str + 1, 3);
    cr_assert_str_eq(str, "elllo");
}