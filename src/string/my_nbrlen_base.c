/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 01:01:36
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 01:02:47
 * @ Description:
 */

#include "my.h"

int my_nbrlen_base(long nb, int base_len)
{
    int count = 0;
    long tmp = nb;

    if (tmp == 0)
        return 1;
    if (tmp < 0) {
        tmp = -tmp;
        count++;
    }
    while (tmp > 0) {
        tmp /= base_len;
        count++;
    }
    return count;
}