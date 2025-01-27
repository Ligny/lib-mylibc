/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 15:54:38
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:23:55
 * @ Description:
 */

#include "my.h"

void my_putnbr(int n)
{
    if (n == INT_MIN) {
        my_putchar('-');
        my_putchar('2');
        n = 147483648;
    } else if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_putnbr(n / 10);
        my_putchar(n % 10 + '0');
    } else {
        my_putchar(n + '0');
    }
}