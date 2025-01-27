/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 23:30:02
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 23:30:28
 * @ Description:
 */

#include "my.h"

double my_atof(const char *str)
{
    double result = 0.0;
    double fraction = 0.0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0 + (str[i] - '0');
        i++;
    }
    if (str[i] == '.') {
        i++;
        double div = 10.0;
        while (str[i] >= '0' && str[i] <= '9') {
            fraction += (str[i] - '0') / div;
            div *= 10.0;
            i++;
        }
    }
    return sign * (result + fraction);
}