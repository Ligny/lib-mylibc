/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 00:00:22
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:50:07
 * @ Description:
 */

#include "my.h"

Test(my_pow, positive_exponent) {
    cr_assert_float_eq(my_pow(2.0, 3), 8.0, 1e-6);
}

Test(my_pow, negative_exponent) {
    cr_assert_float_eq(my_pow(2.0, -3), 0.125, 1e-6);
}

Test(my_pow, large_exponent) {
    cr_assert_float_eq(my_pow(2.0, 31), 2147483648.0, 1e-6);
}

Test(my_pow, large_negative_exponent) {
    cr_assert_float_eq(my_pow(2.0, -31), 1.0 / 2147483648.0, 1e-6, );
}