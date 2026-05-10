#include <stdio.h>
#include "ringbuf.h"

int main(void)
{
    RingBuffer buff;
    uint8_t value;
    uint8_t choice;
    rb_init(&buff);

    while(true)
    {
        printf(" 1->write data  \n 2->read data \n 3-> print elements\n");
        printf(" enter the choice: ");
        scanf("%hhu",&choice);
        switch(choice)
        {
            case 1 :
                    printf("enter the data : ");
                    scanf("%hhu",&value);
                    writeData(&buff, value);
                    break;
            case 2 :
                    readData(&buff, &value);
                     break;
            case 3 : rb_print(&buff);
                        break;
            default : printf("invalid choice\n");
        }
    }
      return 0;
}

