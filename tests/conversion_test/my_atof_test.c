/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:47:19
 * @ Modified by: Your name
 * @ Modified time: 2025-01-27 00:14:11
 * @ Description:
 */

#include "my.h"

Test(my_atof, test_my_atof)
{
    cr_assert_eq(my_atof("0"), 0.0);
}

Test(my_atof, test_my_atof_2)
{
    cr_assert_eq(my_atof("1"), 1.0);
}