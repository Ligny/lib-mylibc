/**
 * @ Author: Your name
 * @ Create Time: 2025-01-02 22:46:14
 * @ Modified by: Your name
 * @ Modified time: 2025-01-02 22:47:45
 * @ Description:
 */

#include "my.h"

Test(my_nbrlen, test_my_nbrlen)
{
    cr_assert_eq(my_nbrlen(0), 1);
}


Test(my_nbrlen, test_my_nbrlen_2)
{
    cr_assert_eq(my_nbrlen(10), 2);
}

Test(my_nbrlen, test_max_int)
{
    cr_assert_eq(my_nbrlen(INT_MAX), 10);
}

Test(my_nbrlen, test_min_int)
{
    cr_assert_eq(my_nbrlen(INT_MIN), 11);
}

Test(my_nbrlen, test_negative)
{
    cr_assert_eq(my_nbrlen(-10), 3);
}

