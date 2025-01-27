/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:22:47
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:26:17
 * @ Description:
 */

#include "my.h"

Test(my_strncpy, test_my_strncpy)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, test_my_strncpy_short)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 3);
    cr_assert_str_eq(dest, "Hel");
}

Test(my_strncpy, test_my_strncpy_long)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 8);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, test_my_strncpy_empty)
{
    char dest[6] = {0};
    my_strncpy(dest, "", 5);
    cr_assert_str_empty(dest);
}

Test(my_strncpy, test_my_strncpy_null)
{
    char dest[6] = {0};
    my_strncpy(dest, NULL, 5);
    cr_assert_str_empty(dest);
}

Test(my_strncpy, test_my_strncpy_zero)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 0);
    cr_assert_str_empty(dest);
}

Test(my_strncpy, test_my_strncpy_zero_dest)
{
    char dest[6] = "Hello";
    my_strncpy(dest, "World", 0);
    cr_assert_str_eq(dest, "Hello");
}