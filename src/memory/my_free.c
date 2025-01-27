/**
 * @ Author: Your name
 * @ Create Time: 2025-01-26 19:24:51
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:25:53
 * @ Description:
 */

#include "my.h"
#include "my_malloc.h"

void my_free(void *ptr)
{
    if (!ptr)
        return;

    chunk_t *block = (chunk_t *)ptr - 1;

    if (block->is_free) {
        write(2, "Double free detected!\n", 22);
        return;
    }
    block->is_free = true;
}