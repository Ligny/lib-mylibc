/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 00:02:11
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 00:07:06
 * @ Description:
 */

#include "my.h"

Test(my_atoi, test_my_atoi)
{
    cr_assert_eq(my_atoi("42"), 42);
}

Test(my_atoi, test_my_atoi_neg)
{
    cr_assert_eq(my_atoi("-42"), -42);
}

Test(my_atoi, test_my_atoi_zero)
{
    cr_assert_eq(my_atoi("0"), 0);
}