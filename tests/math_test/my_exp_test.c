/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:07:21
 * @ Modified by: Your name
 * @ Modified time: 2025-01-01 20:58:37
 * @ Description:
 */

#include "my.h"
#include <math.h>

Test(my_exp, exp_of_zero)
{
    double expected = exp(0.0);
    double actual = my_exp(0.0);
    cr_assert_float_eq(actual, expected, 1e-7);
}

Test(my_exp, exp_of_one)
{
    double x = 1.0;
    double expected = exp(x);
    double actual = my_exp(x);
    cr_assert_float_eq(actual, expected, 1e-7);
}

Test(my_exp, exp_of_negative_one)
{
    double x = -1.0;
    double expected = exp(x);
    double actual = my_exp(x);
    cr_assert_float_eq(actual, expected, 1e-7);
}