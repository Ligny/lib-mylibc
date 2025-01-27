/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:49:42
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:54:00
 * @ Description:
 */

#include "my.h"

Test(my_strcpy, test_my_strcpy)
{
    char dest[14];
    my_strcpy(dest, "Hello, World!");
    cr_assert_str_eq(dest, "Hello, World!");
}

Test(my_strcpy, test_my_strcpy_empty)
{
    char dest[1];
    my_strcpy(dest, "");
    cr_assert_str_empty(dest);
}

Test(my_strcpy, test_my_strcpy_null)
{
    char dest[14];
    my_strcpy(dest, NULL);
    cr_assert_str_empty(dest);
}