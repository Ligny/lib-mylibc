/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 22:39:31
 * @ Modified by: Your name
 * @ Modified time: 2025-01-02 22:45:23
 * @ Description:
 */

#include "my.h"

int my_nbrlen(int nb)
{
    int count = 0;
    int tmp = nb;

    if (nb == INT_MAX)
        return 10;
    if (nb == INT_MIN)
        return 11;
    if (tmp == 0)
        return 1;
    if (tmp < 0) {
        count++;
        tmp = -tmp;
    }
    while (tmp > 0) {
        tmp /= 10;
        count++;
    }
    return count;
}