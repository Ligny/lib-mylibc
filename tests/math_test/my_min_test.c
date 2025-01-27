/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 13:58:49
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 13:59:09
 * @ Description:
 */

#include "my.h"

Test(my_min, test_0)
{
    cr_assert_eq(my_min(0, 0), 0);
}

Test(my_min, test_1)
{
    cr_assert_eq(my_min(4, 2), 2);
}