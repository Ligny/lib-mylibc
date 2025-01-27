/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 04:31:01
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 04:32:05
 * @ Description:
 */

#include "my.h"

int my_isprime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
