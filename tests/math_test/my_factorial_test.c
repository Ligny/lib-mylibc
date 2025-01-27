/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 13:53:49
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 13:54:39
 * @ Description:
 */

#include "my.h"

Test(my_factorial, test_0)
{
    cr_assert_eq(my_factorial(0), 1);
}


Test(my_factorial, test_1)
{
    cr_assert_eq(my_factorial(4), 24);
}

Test(my_factorial, test_2)
{
    cr_assert_eq(my_factorial(5), 120);
}