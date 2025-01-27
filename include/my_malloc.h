/**
 * @ Author: Your name
 * @ Create Time: 2025-01-03 06:24:02
 * @ Modified by: Your name
 * @ Modified time: 2025-01-26 15:39:42
 * @ Description:
 */

#ifndef MY_MALLOC_H_
#define MY_MALLOC_H_

#include <unistd.h>
#include <stdbool.h>
#include <math.h>

#define ALIGN4(x) (((x) + 3) & ~3)
#define CHUNK_SIZE sizeof(chunk_t)

typedef struct chunk_s {
    size_t size;
    bool is_free;
    struct chunk_s *next;
    struct chunk_s *prev;
    void *data;
} chunk_t;


#endif /* !MY_MALLOC_H_ */