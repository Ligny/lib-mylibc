/**
 * @ Author: Your name
 * @ Create Time: 2024-12-26 19:05:00
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:26:56
 * @ Description:
 */

#include "my.h"

#include <fcntl.h>

Test(my_get_next_line, test_my_get_next_line)
{
    int fd = open("tests/test.txt", O_RDONLY);
    char *line = my_get_next_line(fd);
    cr_assert_str_eq(line, "Hello World");
    my_free(line);
    close(fd);
}

Test(my_get_next_line, test_my_get_next_line_multiple)
{
    int fd = open("tests/test.txt", O_RDONLY);
    char *line = my_get_next_line(fd);
    cr_assert_str_eq(line, "Hello World");
    my_free(line);
    line = my_get_next_line(fd);
    cr_assert_str_eq(line, "How are you?");
    my_free(line);
    close(fd);
}