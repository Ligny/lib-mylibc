/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:29:01
 * @ Modified by: Your name
 * @ Modified time: 2025-01-01 22:09:33
 * @ Description:
 */

#include "my.h"
#include <stddef.h>

#define MY_LN2 0.69314718055994530942

static double my_fabs(double v)
{
    return (v < 0.0) ? -v : v;
}


static double my_log_hyperbolic(double x)
{
    double y = (x - 1.0) / (x + 1.0);
    double y2 = y * y;
    double term = y;
    double sum = 0.0;
    int k = 1;

    while (my_fabs(term) > 1e-15) {
        sum += term / (2.0 * k - 1.0);
        term *= y2;
        k++;
    }
    return 2.0 * sum;
}

double my_log(double x)
{
    int count = 0;
    double ln_reduced;
    double result;
  
    if (x <= 0.0)
        return -1.0;
    while (x > 2.0) {
        x /= 2.0;
        count++;
    }
    while (x < 0.5) {
        x *= 2.0;
        count--;
    }
    ln_reduced = my_log_hyperbolic(x);
    result = ln_reduced + count * MY_LN2;
    return result;
}
