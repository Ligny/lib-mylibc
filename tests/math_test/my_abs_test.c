/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:57:21
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:14:50
 * @ Description:
 */

#include "my.h"

Test(my_abs, test_my_abs)
{
    cr_assert_eq(my_abs(42), 42);
}

Test(my_abs, test_my_abs_neg)
{
    cr_assert_eq(my_abs(-42), 42);
}

Test(my_abs, test_my_abs_zero)
{
    cr_assert_eq(my_abs(0), 0);
}