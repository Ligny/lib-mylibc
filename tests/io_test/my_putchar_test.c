/**
 * @ Author: Your name
 * @ Create Time: 2024-12-16 22:16:06
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:16:42
 * @ Description:
 */

#include "my.h"

Test(my_putchar, test_my_putchar)
{
    cr_redirect_stdout();
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}