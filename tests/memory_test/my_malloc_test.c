/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 18:02:00
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 18:39:44
 * @ Description:
 */

#include "my.h"

Test(my_malloc, allocation_success)
{
    void *ptr = my_malloc(16);
    cr_assert_not_null(ptr);
}

Test(my_malloc, zero_allocation)
{
    void *ptr = my_malloc(0);
    cr_assert_null(ptr);
}

Test(my_malloc, multiple_allocations)
{
    void *ptr1 = my_malloc(32);
    void *ptr2 = my_malloc(64);
    cr_assert_not_null(ptr1);
    cr_assert_not_null(ptr2);
    cr_assert_neq(ptr1, ptr2);
}

Test(my_malloc, alignment)
{
    void *ptr = my_malloc(10);
    cr_assert_eq((size_t)ptr % 4, 0);
}

Test(my_malloc, large_allocation)
{
    void *ptr = my_malloc(1024 * 1024);
    cr_assert_not_null(ptr);
}
