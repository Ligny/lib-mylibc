/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:54:30
 * @ Modified by: Your name
 * @ Modified time: 2025-01-27 01:06:28
 * @ Description:
 */

#include "my.h"

Test(my_itoa, test_my_itoa)
{
    char str[12] = {0};

    my_itoa(42, str, 10);
    cr_assert_str_eq(str, "42");
}

Test(my_itoa, test_my_itoa_neg)
{
    char str[12] = {0};

    my_itoa(-42, str, 10);
    cr_assert_str_eq(str, "-42");
}