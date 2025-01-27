/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:06:36
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:06:51
 * @ Description:
 */

#include "my.h"

Test(my_strlen, test_my_strlen)
{
    cr_assert_eq(my_strlen("Hello, World!"), 13);
}

Test(my_strlen, test_my_strlen_empty)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen, test_my_strlen_null)
{
    cr_assert_eq(my_strlen(NULL), 0);
}