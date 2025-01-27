/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 13:59:38
 * @ Modified by: Your name
 * @ Modified time: 2025-01-02 00:27:52
 * @ Description:
 */

#include "my.h"
#include <math.h>
#include <stdio.h>

Test(my_log, negative_value)
{
    double x = -1.0;
    double actual = my_log(x);
    cr_assert_eq(actual, -1.0);
}

// 2) Vérifier x = 0
Test(my_log, zero_value)
{
    double x = 0.0;
    double actual = my_log(x);
    cr_assert_eq(actual, -1.0);
}

Test(my_log, one_value)
{
    double x = 1.0;
    double actual = my_log(x);
    double expected = 0.0;
    cr_assert_float_eq(actual, expected, 1e-14);
}

Test(my_log, two_value)
{
    double x = 2.0;
    double actual = my_log(x);
    double expected = log(x);
    cr_assert_float_eq(actual, expected, 1e-14);
}

Test(my_log, half_value)
{
    double x = 0.5;
    double actual = my_log(x);
    double expected = log(x);
    cr_assert_float_eq(actual, expected, 1e-14);
}

Test(my_log, ten_value)
{
    double x = 10.0;
    double actual = my_log(x);
    double expected = log(x);
    cr_assert_float_eq(actual, expected, 1e-14);
}