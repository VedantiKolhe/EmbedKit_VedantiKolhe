#include <stdint.h>
#include <stdbool.h>


#define BUFFER_SIZE 8


typedef struct
{
    uint8_t data[BUFFER_SIZE];
    uint8_t front;
    uint8_t rear;
    uint8_t count;
} RingBuffer;

void rb_init(RingBuffer *q);
bool is_empty(const RingBuffer *q);
bool is_full(const RingBuffer *q);
bool writeData(RingBuffer *q, uint8_t value);
bool readData(RingBuffer *q, uint8_t *value);
void rb_print(const RingBuffer *q);
