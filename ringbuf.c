#include <stdio.h>
#include "ringbuf.h"



void rb_init(RingBuffer *q)
{
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

bool is_empty(const RingBuffer *q)
{
    return (q->count == 0);
}

bool is_full(const RingBuffer *q)
{
    return (q->count == BUFFER_SIZE);
}

bool writeData(RingBuffer *q, uint8_t value)
{
    if (is_full(q))
    {
        printf("[WRITE :%u] --> FAIL (count= %d)(buffer full..\n)",value,(q->count));
        return false;
    }

    q->data[q->rear] = value;
    q->rear = (q->rear + 1) % BUFFER_SIZE;
    q->count++;
    printf("[WRITE :%u] --> OK (count = %d)\n",value,(q->count));
    return true;
}

bool readData(RingBuffer *q, uint8_t *value)
{
    if (is_empty(q))
    {
       printf("read fail buffer empty\n") ;
       return false;
    }

    *value = q->data[q->front];
    q->front = (q->front + 1) % BUFFER_SIZE;
    q->count--;
    printf("[READ :%hhn] --> OK (count = %u)",value,(q->count));
    return true;
}

void rb_print(const RingBuffer *q)
{
    uint8_t i;
    uint8_t index;

    printf("Queue: ");
    for (i = 0; i < q->count; i++)
    {
        index = (q->front + i) % BUFFER_SIZE;
        printf("%u ", q->data[index]);
    }
    printf("\n");
}


