/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:28:23
 * @ Modified by: Your name
 * @ Modified time: 2025-01-27 00:13:19
 * @ Description:
 */

#include "my.h"

void my_itoa(int num, char *str, int base)
{
    int i = 0;
    bool is_negative = false;

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    } if (num < 0 && base == 10) {
        is_negative = true;
        num = -num;
    } while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num /= base;
    } if (is_negative)
        str[i++] = '-';
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
}
