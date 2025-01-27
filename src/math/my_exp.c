/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:42:02
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 04:42:20
 * @ Description:
 */

#include "my.h"

double my_exp(double x)
{
    double result = 1.0, term = 1.0;

    for (int n = 1; n <= 20; ++n) {
        term *= x / n;
        result += term;
    }
    return result;
}