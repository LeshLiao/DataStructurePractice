#include "delete.h"


void beginDelete(struct node **head)
{
    if(*head == NULL)
    {
        printf("List is empty!");
    }
    else
    {
        struct node *ptr = *head;
        *head = (*head)->next;
        free(ptr);
        printf("Delete a head node.");
    }
}
void endDelete(struct node **head)
{
    if(*head == NULL)
    {
        printf("List is empty!");
    }
    else if((*head)->next == NULL)
    {
        struct node *ptr = *head;
        *head = NULL;
        free(ptr);
        printf("Delete a head node.");
    }
    else
    {
        struct node *ptr = *head;
        struct node *previous_ptr;
        while(ptr->next != NULL)
        {
            previous_ptr = ptr; //key point
            ptr = ptr->next;
        }
        previous_ptr->next = NULL;
        free(ptr);
        printf("Delete a node.");
    }
}
void positionDelete(struct node **head,int pos)
{
    if(*head == NULL)
    {
        printf("List is empty!");
    }
    else if(pos == 1)
    {
        beginDelete(head);
    }
    else
    {
        struct node *ptr = *head;
        struct node *previous_ptr;
        for(int i = 1;i<pos;i++)
        {
            previous_ptr = ptr;
            ptr = ptr->next;
        }
        previous_ptr->next = ptr->next;
        free(ptr);
        printf("Delete a node.");
    }

}



