/**
 * @ Author: Your name
 * @ Create Time: 2024-12-25 01:06:40
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:38:37
 * @ Description:
 */

#include "my.h"
#include "my_malloc.h"

void *my_realloc(void *ptr, size_t size)
{
    chunk_t *block;
    void *new_ptr;

    if (ptr == NULL)
        return NULL;

    if (size == 0) {
        my_free(ptr);
        return NULL;
    }
    block = (chunk_t *)ptr - 1;
    if (block->size >= size)
        return ptr;

    new_ptr = my_malloc(size);
    if (!new_ptr)
        return NULL;
    my_memcpy(new_ptr, ptr, block->size);
    my_free(ptr);

    return new_ptr;
}