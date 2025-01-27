/**
 * @ Author: Your name
 * @ Create Time: 2024-12-20 18:17:50
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 18:25:42
 * @ Description:
 */

#include "my.h"

int check_newline(char *str) {
    int i = 0;

    while (str[i]) {
        if (str[i] == '\n')
            return 84;
        i++;
    }
    return 0;
}

char *concat_buffers(char *res, char *buffer, int size) {
    int i = 0;
    int cpt = 0;
    char *ret;

    for (i = 0; res[i]; i++);
    ret = my_malloc(sizeof(char) * (i + size + 1));
    if (!ret)
        return NULL;
    for (i = 0; res[i]; i++)
        ret[i] = res[i];
    while (size != 0 && cpt < size) {
        ret[i + cpt] = buffer[cpt];
        cpt++;
    }
    ret[i + size] = '\0';
    return ret;
}

char *extract_remainder(char *str) {
    int i = 0;
    char *res = NULL;
    int j = 0;

    while (str[i] && str[i] != '\n') {
        i++;
    }
    str[i] == '\n' ? i++ : i;
    for (j = 0; str[j]; j++);
    res = my_malloc(sizeof(char) * ((j - i) + 1));
    if (res == NULL)
        return NULL;
    for (j = 0; str[i]; j++) {
        res[j] = str[i];
        i++;
    }
    res[j] = '\0';
    return res;
}

char *my_get_next_line(int fd) {
    static int size = 1;
    static char buff[READ_SIZE] = {0};
    static char *tmp = "\0";
    char *res = "\0";
    static int start = 0;

    if (READ_SIZE <= 0 || fd == -1)
        return NULL;
    if (start++ != 0 && strlen(tmp) != 0)
        if ((res = concat_buffers(tmp, NULL, 0)) == NULL)
            return NULL;
    while (size != 0 && (size = read(fd, buff, READ_SIZE)) > 0) {
        if (((res = concat_buffers(res, buff, size)) && check_newline(res) == 84) || !res)
            break;
    }
    if (res == NULL || (tmp = extract_remainder(res)) == NULL ||
        size == -1 || (size == 0 && my_strlen(res) == 0))
        return NULL;
    for (int j = 0; res[j]; j++)
        res[j] == '\n' ? res[j] = '\0' : 0;
    return res;
}
