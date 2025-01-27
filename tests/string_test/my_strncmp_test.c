/**
 * @ Author: Your name
 * @ Create Time: 2024-12-17 21:20:14
 * @ Modified by: Your name
 * @ Modified time: 2024-12-17 21:22:16
 * @ Description:
 */

#include "my.h"

Test(my_strncmp, test_my_strncmp)
{
    cr_assert_eq(my_strncmp("Hello, World!", "Hello, World!", 13), 0);
}

Test(my_strncmp, test_my_strncmp_diff)
{
    cr_assert_eq(my_strncmp("Hello, World!", "Hello, World!", 5), 0);
}