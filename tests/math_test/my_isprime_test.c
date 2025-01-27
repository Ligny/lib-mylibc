/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 14:02:01
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 14:03:34
 * @ Description:
 */

#include "my.h"

Test(my_isprime, test_0)
{
    cr_assert_eq(my_isprime(0), 0);
}

Test(my_isprime, test_1)
{
    cr_assert_eq(my_isprime(2), 1);
}

Test(my_isprime, test_2)
{
    cr_assert_eq(my_isprime(4), 0);
}