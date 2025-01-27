/**
 * @ Author: Your name
 * @ Create Time: 2024-12-16 22:18:26
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:18:48
 * @ Description:
 */

#include "my.h"

Test(my_putnbr, test_my_putnbr)
{
    cr_redirect_stdout();
    my_putnbr(42);
    cr_assert_stdout_eq_str("42");
}

Test(my_putnbr, test_my_putnbr_neg)
{
    cr_redirect_stdout();
    my_putnbr(-42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_putnbr, test_my_putnbr_zero)
{
    cr_redirect_stdout();
    my_putnbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_putnbr, test_my_putnbr_max)
{
    cr_redirect_stdout();
    my_putnbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_putnbr, test_my_putnbr_min)
{
    cr_redirect_stdout();
    my_putnbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}