/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 23:21:43
 * @ Modified by: Your name
 * @ Modified time: 2025-01-02 23:22:49
 * @ Description:
 */

#include "my.h"

Test(my_putnbr_base, test_my_putnbr_base)
{
    cr_redirect_stdout();
    my_putnbr_base(10, "0123456789");
    cr_assert_stdout_eq_str("10");
}

Test(my_putnbr_base, test_my_putnbr_base_2)
{
    cr_redirect_stdout();
    my_putnbr_base(10, "01");
    cr_assert_stdout_eq_str("1010");
}

Test(my_putnbr_base, test_my_putnbr_base_3)
{
    cr_redirect_stdout();
    my_putnbr_base(10, "0123456789ABCDEF");
    cr_assert_stdout_eq_str("A");
}
