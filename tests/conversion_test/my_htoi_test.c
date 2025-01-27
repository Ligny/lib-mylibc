/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:56:51
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 23:57:12
 * @ Description:
 */

#include "my.h"

Test(my_htoi, test_my_htoi)
{
    cr_assert_eq(my_htoi("0"), 0);
}

Test(my_htoi, test_my_htoi_2)
{
    cr_assert_eq(my_htoi("1"), 1);
}

Test(my_htoi, test_my_htoi_3)
{
    cr_assert_eq(my_htoi("a"), 10);
}

Test(my_htoi, test_my_htoi_4)
{
    cr_assert_eq(my_htoi("A"), 10);
}

Test(my_htoi, test_my_htoi_5)
{
    cr_assert_eq(my_htoi("f"), 15);
}