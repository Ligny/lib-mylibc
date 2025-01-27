/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:36:47
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 23:46:02
 * @ Description:
 */

#include "my.h"

int my_htoi(const char *str)
{
    int result = 0;
    int i = 0;

    if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
        i = 2;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 16 + (str[i] - '0');
        else if (str[i] >= 'a' && str[i] <= 'f')
            result = result * 16 + (str[i] - 'a' + 10);
        else if (str[i] >= 'A' && str[i] <= 'F')
            result = result * 16 + (str[i] - 'A' + 10);
        else
            return 0;
        i++;
    }
    return result;
}