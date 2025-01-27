/**
 * @ Author: Your name
 * @ Create Time: 2024-12-30 13:58:09
 * @ Modified by: Your name
 * @ Modified time: 2024-12-30 13:58:33
 * @ Description:
 */

#include "my.h"

Test(my_max, test_0)
{
    cr_assert_eq(my_max(0, 0), 0);
}

Test(my_max, test_1)
{
    cr_assert_eq(my_max(4, 2), 4);
}