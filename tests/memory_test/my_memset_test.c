/**
 * @ Author: Your name
 * @ Create Time: 2024-12-16 15:02:59
 * @ Modified by: Your name
 * @ Modified time: 2024-12-16 22:16:55
 * @ Description:
 */

#include "my.h"

void *my_memset(void *s, int c, size_t n);

Test(my_memset, test_my_memset)
{
    char str[6] = "Hello";
    my_memset(str, 'a', 5);
    cr_assert_str_eq(str, "aaaaa");
}