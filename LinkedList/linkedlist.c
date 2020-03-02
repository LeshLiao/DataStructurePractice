#include "linkedlist.h"

void showMyData(struct node **_head)
{
    if(*_head == NULL)
    {
        printf("No data!\n");
    }
    else
    {
        struct node *ptr = *_head;
        printf("DATA: ");
        do
        {
            printf("%d,",ptr->data);
            ptr = ptr->next;
        }
        while(ptr != NULL);
        printf("\n");
    }
}
