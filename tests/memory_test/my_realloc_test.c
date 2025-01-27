/**
 * @ Author: Your name
 * @ Create Time: 2024-12-25 01:07:38
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:35:36
 * @ Description:
 */

#include "my.h"

Test(my_realloc, test_my_realloc)
{
    char *str = my_strdup("Hello");
    char *new_str = my_realloc(str, 10);
    cr_assert_str_eq(new_str, "Hello");
    my_free(new_str);
}

Test(my_realloc, test_my_realloc_null)
{
    char *str = NULL;
    char *new_str = my_realloc(str, 10);
    cr_assert_null(new_str);
    my_free(new_str);
}