/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 21:46:53
 * @ Modified by: Your name
 * @ Modified time: 2025-01-03 06:10:44
 * @ Description:
 */

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h> 

Test(my_printf, test_my_printf)
{
    cr_redirect_stdout();
    my_printf("Hello, world!\n");
    cr_assert_stdout_eq_str("Hello, world!\n");
}

Test(my_printf, test_my_printf_with_args)
{
    cr_redirect_stdout();
    my_printf("Hello, %c!\n", 'w');
    cr_assert_stdout_eq_str("Hello, w!\n");
}

Test(my_printf, test_my_printf_with_args_2)
{
    cr_redirect_stdout();
    my_printf("Hello, %s!\n", "world");
    cr_assert_stdout_eq_str("Hello, world!\n");
}

Test(my_printf, test_my_printf_with_args_3)
{
    cr_redirect_stdout();
    my_printf("Hello, %d!\n", 42);
    cr_assert_stdout_eq_str("Hello, 42!\n");
}

Test(my_printf, test_my_printf_with_args_4)
{
    cr_redirect_stdout();
    my_printf("Hello, %d!\n", -42);
    cr_assert_stdout_eq_str("Hello, -42!\n");
}

Test(my_printf, test_my_printf_with_args_5)
{
    cr_redirect_stdout();
    my_printf("Hello, %%!\n", 0);
    cr_assert_stdout_eq_str("Hello, %!\n");
}

Test(my_printf, test_my_printf_with_args_6)
{
    cr_redirect_stdout();
    my_printf("Hello, %o!\n", 42);
    cr_assert_stdout_eq_str("Hello, 52!\n");
}

Test(my_printf, test_my_printf_with_args_7)
{
    cr_redirect_stdout();
    my_printf("Hello, %x!\n", 42);
    cr_assert_stdout_eq_str("Hello, 2a!\n");
}

Test(my_printf, test_my_printf_with_args_8)
{
    cr_redirect_stdout();
    my_printf("Hello, %X!\n", 42);
    cr_assert_stdout_eq_str("Hello, 2A!\n");
}

Test(my_printf, test_my_printf_with_args_9)
{
    cr_redirect_stdout();
    my_printf("Hello, %p!\n", 42);
    cr_assert_stdout_eq_str("Hello, 0x2a!\n");
}

Test(my_printf, test_my_printf_with_args_10)
{
    cr_redirect_stdout();
    my_printf("Hello, %b!\n", 42);
    cr_assert_stdout_eq_str("Hello, 101010!\n");
}

Test(my_printf, test_my_printf_with_args_11)
{
    cr_redirect_stdout();
    my_printf("Hello, %i!\n", 42);
    cr_assert_stdout_eq_str("Hello, 42!\n");
}