/**
 * @ Author: Your name
 * @ Create Time: 2024-12-16 22:34:24
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:38:50
 * @ Description:
 */

#include "my.h"

Test(my_putstr, test_my_putstr)
{
    cr_redirect_stdout();
    my_putstr("Hello, World!\n");
    cr_assert_stdout_eq_str("Hello, World!\n");
}

Test(my_putstr, test_my_putstr_empty)
{
    cr_redirect_stdout();
    my_putstr("");
    cr_assert_stdout_eq_str("");
}

Test(my_putstr, test_my_putstr_null)
{
    cr_redirect_stdout();
    my_putstr(NULL);
    cr_assert_stdout_eq_str("");
}