/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:58:54
 * @ Modified by: Your name
 * @ Modified time: 2024-12-29 23:59:19
 * @ Description:
 */

#include "my.h"

Test(my_sqrt, test_my_sqrt)
{
    cr_assert_eq(my_sqrt(4), 2);
}

Test(my_sqrt, test_my_sqrt_neg)
{
    cr_assert_eq(my_sqrt(-4), -1);
}

Test(my_sqrt, test_my_sqrt_zero)
{
    cr_assert_eq(my_sqrt(0), 0);
}

Test(my_sqrt, test_my_sqrt_one)
{
    cr_assert_eq(my_sqrt(1), 1);
}

Test(my_sqrt, test_my_sqrt_max)
{
    cr_assert_eq(my_sqrt(2147483647), 46340);
}

Test(my_sqrt, test_my_sqrt_min)
{
    cr_assert_eq(my_sqrt(-2147483648), -1);
}