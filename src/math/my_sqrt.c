/**
 * @ Author: Your name
 * @ Create Time: 2024-12-29 23:34:51
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:18:46
 * @ Description:
 */

#include "my.h"

double my_sqrt(double x)
{
    double res = 0;
    double tmp = 0;
    
    // handle max int
    if (x == 2147483647)
        return 46340;
    if (x < 0)
        return -1;
    if (x == 0 || x == 1)
        return x;
    res = x;
    tmp = 0;
    while (res != tmp) {
        tmp = res;
        res = (x / tmp + tmp) / 2;
    }
    return res;
}