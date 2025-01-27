/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:33:09
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 04:33:38
 * @ Description:
 */

#include "my.h"

double my_cos(double x)
{
    double result = 1.0, term = 1.0;
    int sign = -1;
    for (int n = 2; n <= 20; n += 2) {
        term *= x * x / ((n - 1) * n);
        result += sign * term;
        sign = -sign;
    }
    return result;
}
