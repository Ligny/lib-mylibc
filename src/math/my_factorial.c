/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:43:07
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 04:43:42
 * @ Description:
 */

#include "my.h"

int my_factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return (n * my_factorial(n - 1));
}