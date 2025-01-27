/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:38:08
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:55:40
 * @ Description:
 */

#include "my.h"


#include <limits.h>
#include <float.h>

#define MY_NAN   (0.0 / 0.0)

int my_isnan(double x)
{
    return x != x;
}

static unsigned int get_abs_exponent(int exp)
{
    if (exp == INT_MIN)
        return (unsigned int)INT_MAX + 1;
    return (unsigned int)(exp < 0 ? -exp : exp);
}

static double handle_special_cases(double base, int exp)
{
    if (base == 0.0) {
        if (exp > 0) return 0.0;
        if (exp < 0) return DBL_MAX;
        return 1.0;
    }
    if (exp == 0) return 1.0;
    if (base == 1.0) return 1.0;
    if (base == -1.0) return (exp % 2 == 0) ? 1.0 : -1.0;
    return MY_NAN;
}

static double compute_power(double base, unsigned int abs_exp)
{
    double result = 1.0;
    double current_product = base;

    while (abs_exp > 0) {
        if (abs_exp % 2 == 1)
            result *= current_product;
        current_product *= current_product;
        abs_exp /= 2;
    }
    return result;
}

double my_pow(double base, int exp)
{
    double special_case = handle_special_cases(base, exp);
    if (!my_isnan(special_case))
        return special_case;

    unsigned int abs_exp = get_abs_exponent(exp);
    double result = compute_power(base, abs_exp);

    return (exp < 0) ? 1.0 / result : result;
}