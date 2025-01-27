/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 23:19:55
 * @ Modified by: Your name
 * @ Modified time: 2025-01-02 23:20:35
 * @ Description:
 */

#include "my.h"

void my_putnbr_base(int nbr, const char *base)
{
    int len = my_strlen(base);
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= len) {
        my_putnbr_base(nbr / len, base);
        my_putchar(base[nbr % len]);
    } else {
        my_putchar(base[nbr]);
    }
}