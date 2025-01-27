/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 03:11:44
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 05:50:00
 * @ Description:
 */

#include "my.h"

int f_putbinary(va_list args)
{
    int nb = va_arg(args, int);
    my_putnbr_base(nb, "01");
    return my_nbrlen_base(nb, 2);
}