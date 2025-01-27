/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:26:49
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:27:10
 * @ Description:
 */

#include "my.h"

Test(my_strstr, test_my_strstr)
{
    char *str = "Hello, World!";
    cr_assert_str_eq(my_strstr(str, "World"), "World!");
}

Test(my_strstr, test_my_strstr_empty)
{
    char *str = "";
    cr_assert_null(my_strstr(str, "World"));
}

Test(my_strstr, test_my_strstr_null)
{
    char *str = NULL;
    cr_assert_null(my_strstr(str, "World"));
}

Test(my_strstr, test_my_strstr_not_found)
{
    char *str = "Hello, World!";
    cr_assert_null(my_strstr(str, "Universe"));
}