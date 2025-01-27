/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:10:18
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:20:14
 * @ Description:
 */

#include "my.h"

Test(my_bzero, test_0)
{
    char str[6] = "Hello";
    my_bzero(str, 6);
    cr_assert_eq(str[0], 0);
    cr_assert_eq(str[1], 0);
    cr_assert_eq(str[2], 0);
    cr_assert_eq(str[3], 0);
    cr_assert_eq(str[4], 0);
    cr_assert_eq(str[5], 0);
}

Test(my_bzero, test_1)
{
    char str[6] = "Hello";
    my_bzero(str, 3);
    cr_assert_eq(str[0], 0);
    cr_assert_eq(str[1], 0);
    cr_assert_eq(str[2], 0);
    cr_assert_eq(str[3], 'l');
    cr_assert_eq(str[4], 'o');
}