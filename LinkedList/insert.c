#include "insert.h"

void endInsert(struct node **_head)
{
    int value;
    printf("Data:");
    scanf("%d",&value);
    struct node *newNode = createNewNode(value);
    if(*_head == NULL)
    {
        *_head = newNode;
    }
    else
    {
        struct node *ptr = *_head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}
void beginInsert(struct node **_head)
{
    int value;
    printf("Data:");
    scanf("%d",&value);
    struct node *newNode = createNewNode(value);
    newNode->next = *_head;
    *_head = newNode;
}
void positionInsert(struct node **head,int pos)
{

}

struct node *createNewNode(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Memory is full!\n");
    }
    else
    {
        newNode->data = value;
        newNode->next = NULL;
    }
    return newNode;
}

