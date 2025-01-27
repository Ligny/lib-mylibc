/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 03:10:46
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 05:50:13
 * @ Description:
 */

#include "my.h"

int f_putoctal(va_list args)
{
    int nb = va_arg(args, int);
    my_putnbr_base(nb, "01234567");
    return my_nbrlen_base(nb, 8);
}

int f_puthexa(va_list args)
{
    int nb = va_arg(args, int);
    my_putnbr_base(nb, "0123456789abcdef");
    return my_nbrlen_base(nb, 16);
}

int f_puthexa_maj(va_list args)
{
    int nb = va_arg(args, int);
    my_putnbr_base(nb, "0123456789ABCDEF");
    return my_nbrlen_base(nb, 16);
}

int f_putpointer(va_list args)
{
    long nb = va_arg(args, long);
    if (!nb) {
        my_putstr("(nil)");
        return 5;
    }
    my_putstr("0x");
    my_putnbr_base(nb, "0123456789abcdef");
    return my_nbrlen_base(nb, 16) + 2;
}