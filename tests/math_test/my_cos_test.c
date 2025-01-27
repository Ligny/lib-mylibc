/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:05:39
 * @ Modified by: Your name
 * @ Modified time: 2024-12-31 04:49:38
 * @ Description:
 */

#include "my.h"
#include <math.h>

Test(my_cos, cos_of_zero)
{
    double expected = cos(0.0);
    cr_assert_float_eq(my_cos(0.0), expected, 1e-7);
}

Test(my_cos, cos_of_one)
{
    double expected = cos(1.0);
    cr_assert_float_eq(my_cos(1.0), expected, 1e-7);
}

Test(my_cos, cos_of_two)
{
    double expected = cos(2.0);
    cr_assert_float_eq(my_cos(2.0), expected, 1e-7);
}