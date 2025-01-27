/**
 * @ Author: Your name
 * @ Create Time: 2024-12-10 11:37:25
 * @ Modified by: Your name
 * @ Modified time: 2025-01-27 00:14:39
 * @ Description:
 */

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif /* !READ_SIZE  */

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>

// Conversion functions
int my_atoi(const char *str);
void my_itoa(int num, char *str, int base);
int my_htoi(const char *hex);
double my_atof(const char *str);

// I/O functions
void my_putchar(char c);
void my_putstr(const char *str);
void my_putnbr(int n);
char *my_get_next_line(int fd);
void my_putnbr_base(int nbr, const char *base);
// Printf functions
int my_printf(const char *format, ...);

// Math functions
int my_max(int a, int b);
int my_min(int a, int b);
int my_abs(int x);
int my_isprime(int n);
double my_pow(double base, int exp);
double my_sqrt(double x);
double my_log(double x);
double my_cos(double x);
double my_sin(double x);
double my_exp(double x);
int my_factorial(int n);

// Memory functions
void *my_malloc(size_t size);
void *my_memset(void *s, int c, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void my_bzero(void *s, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_realloc(void *ptr, size_t size);
void my_free(void *ptr);

// String functions
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, size_t n);
char *my_strdup(const char *str);
char *my_strstr(char *haystack, char *needle);
int my_strncmp(const char *s1, const char *s2, size_t n);
size_t my_strlen(const char *str);
char *my_strcat(char *restrict to, const char *restrict from);
int my_nbrlen(int n);
int my_nbrlen_base(long nb, int base_len);

#endif // MY_H