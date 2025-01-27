/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 01:31:00
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 06:25:49
 * @ Description:
 */

#include "my.h"
#include "my_printf.h"

void init_tab_func(int (*tab_func[127])(va_list))
{
    for (int i = 0; i < 127; i++) {
        tab_func[i] = NULL;
    }
    tab_func['c'] = &f_putchar;
    tab_func['s'] = &f_putstr;
    tab_func['d'] = &f_putnbr;
    tab_func['i'] = &f_putnbr;
    tab_func['b'] = &f_putbinary;
    tab_func['o'] = &f_putoctal;
    tab_func['x'] = &f_puthexa;
    tab_func['X'] = &f_puthexa_maj;
    tab_func['p'] = &f_putpointer;
    tab_func['%'] = &f_putpercent;
}

int my_printf(const char *format, ...)
{
    if (!format) return -1;
    int (*tab_func[127])(va_list);
    int i = 0;
    int count = 0;
    va_list ap;
    va_start(ap, format);
    init_tab_func(tab_func);

    while (format[i]) {
        if (format[i] == '%' && format[i + 1] != '\0' && tab_func[(int)format[i + 1]] != NULL) {
            count += tab_func[(int)format[++i]](ap);
            i++;
        } else {
            my_putchar(format[i]);
            count++;
            i++;
        }
    }
    va_end(ap);
    return count;
}