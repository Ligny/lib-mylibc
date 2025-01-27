/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:06:44
 * @ Modified by: Your name
 * @ Modified time: 2025-01-01 20:55:49
 * @ Description:
 */

#include "my.h"
#include <math.h>


Test(my_sin, sin_of_zero)
{
    double expected = sin(0.0);
    double actual = my_sin(0.0);
    cr_assert_float_eq(actual, expected, 1e-7);
}

Test(my_sin, sin_of_one)
{
    double x = 1.0;
    double expected = sin(x);
    double actual = my_sin(x);
    cr_assert_float_eq(actual, expected, 1e-7);
}

Test(my_sin, sin_of_negative_one)
{
    double x = -1.0;
    double expected = sin(x);
    double actual = my_sin(x);
    cr_assert_float_eq(actual, expected, 1e-7);
}

Test(my_sin, sin_of_two)
{
    double x = 2.0;
    double expected = sin(x);
    double actual = my_sin(x);
    cr_assert_float_eq(actual, expected, 1e-7);
}