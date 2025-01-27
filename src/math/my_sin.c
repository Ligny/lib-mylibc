/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:41:06
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 04:41:41
 * @ Description:
 */

#include "my.h"

double my_sin(double x)
{
    double result = 0.0, term = x;
    int sign = 1;

    for (int n = 1; n <= 20; n += 2) {
        result += sign * term;
        term *= x * x / ((n + 1) * (n + 2));
        sign = -sign;
    }
    return result;
}
