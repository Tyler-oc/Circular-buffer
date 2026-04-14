#include "allocator.h"

static uint8_t heap[HEAP_SIZE];

// does not have to be thread safe
void heap_init(header *head)
{
    head->size = sizeof(heap) - sizeof(header);
    head->free = true;
}

void *my_malloc(void *head, uint8_t *out)
{
    header *curr = (header *)head;
    uint8_t count = 0;
    if (curr->free)
    {
        curr->free = false;
        *out = curr
    }
    return NULL;
}