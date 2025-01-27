/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 06:24:54
 * @ Modified by: Your name
 * @ Modified time: 2025-01-27 00:48:44
 * @ Description:
 */

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

int f_putchar(va_list args);
int f_putstr(va_list args);
int f_putnbr(va_list args);
int f_putpercent(va_list args);
int f_putbinary(va_list args);
int f_putpointer(va_list args);
int f_puthexa(va_list args);
int f_puthexa_maj(va_list args);
int f_putoctal(va_list args);

#endif /* !MY_PRINTF_H_ */