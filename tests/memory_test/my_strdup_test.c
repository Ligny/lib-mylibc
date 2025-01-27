/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 01:42:01
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:27:23
 * @ Description:
 */

#include "my.h"

Test(my_strdup, test_my_strdup)
{
    char *str = my_strdup("Hello, World!");
    cr_assert_str_eq(str, "Hello, World!");
    my_free(str);
}

Test(my_strdup, test_my_strdup_empty)
{
    char *str = my_strdup("");
    cr_assert_str_empty(str);
    my_free(str);
}

Test(my_strdup, test_my_strdup_null)
{
    char *str = my_strdup(NULL);
    cr_assert_null(str);
    my_free(str);
}