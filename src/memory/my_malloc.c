/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 06:22:49
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 19:23:16
 * @ Description:
 */
 
#include "my.h"
#include "my_malloc.h"

#define ALIGN4(x) (((x) + 3) & ~3)
#define CHUNK_SIZE sizeof(chunk_t)

static chunk_t *start = NULL;

static chunk_t *find_free_block(size_t size)
{
    chunk_t *block = start;
    while (block) {
        if (block->is_free && block->size >= size)
            return block;
        block = block->next;
    }
    return NULL;
}

static chunk_t *extend_heap(size_t size)
{
    size_t s;
    chunk_t *block;
    s = (size + CHUNK_SIZE + getpagesize() - 1) / getpagesize();
    block = sbrk(s * getpagesize());

    if (block == (void *)-1)
        return NULL;

    block->size = s * getpagesize() - CHUNK_SIZE;
    block->is_free = false;
    block->next = NULL;
    block->prev = NULL;
    block->data = (void *)(block + 1);
    return block;
}

static void add_block_to_list(chunk_t *block)
{
    if (!start) {
        start = block;
        return;
    }
    chunk_t *temp = start;
    while (temp->next)
        temp = temp->next;
    temp->next = block;
    block->prev = temp;
}

void *my_malloc(size_t size)
{
    chunk_t *block;

    if (size == 0)
        return NULL;
    
    size = ALIGN4(size);

    if ((block = find_free_block(size))) {
        block->is_free = false;
    } else {
        if (!(block = extend_heap(size)))
            return NULL;
        add_block_to_list(block);
    }
    return block->data;
}