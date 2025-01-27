/**
 * @ Author: Your name
 * @ Create Time: 2024-12-27 16:32:17
 * @ Modified by: Your name
 * @ Modified time: 2024-12-27 16:32:33
 * @ Description:
 */

#include "my.h"

Test(my_strcat, test_my_strcat)
{
    char dest[12] = "Hello";
    char *res = my_strcat(dest, " World!");
    cr_assert_str_eq(res, "Hello World!");
}

Test(my_strcat, test_my_strcat_empty)
{
    char dest[12] = "";
    char *res = my_strcat(dest, "Hello");
    cr_assert_str_eq(res, "Hello");
}