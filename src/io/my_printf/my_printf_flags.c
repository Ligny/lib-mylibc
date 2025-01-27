/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 03:07:21
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 05:50:25
 * @ Description:
 */

#include "my.h"

int f_putchar(va_list args)
{
    my_putchar(va_arg(args, int));
    return 1;
}

int f_putstr(va_list args)
{
    char *str = va_arg(args, char *);
    if (!str) {
        my_putstr("(null)");
        return 6;
    }
    my_putstr(str);
    return my_strlen(str);
}

int f_putnbr(va_list args)
{
    int nb = va_arg(args, int);
    my_putnbr(nb);
    return my_nbrlen(nb);
}

int f_putpercent(va_list args)
{
    (void)args;
    my_putchar('%');
    return 1;
}