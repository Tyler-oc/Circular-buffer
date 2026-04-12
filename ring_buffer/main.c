#include <stdio.h>
#include "buffer.h"

int main()
{
    rb_buf_t *rb = malloc(sizeof(rb_buf_t));
    if (rb == NULL)
    {
        return 1;
    }

    ring_init(rb);

    ring_push(rb, 5);
    ring_push(rb, 10);

    printf("%u\n", ring_pop(rb));
    printf("%u\n", ring_pop(rb));

    free(rb);
    return 0;
}