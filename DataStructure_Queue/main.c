#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 3

struct circularQueue
{
    int a[MAX_QUEUE_SIZE];
};

struct circularQueue my_queue;
int front=-1,rear=0,option;
void insert();
void del();
void showQueue();

int main()
{
    while(1)
    {
        printf("Option: 1.Insert, 2.delete, 3.show, 4.exit \n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                showQueue();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Option!");
                break;
        }

    }
    return 0;
}

void insert()
{
    int value;
    printf("Insert a value:");
    scanf("%d",&value);

    if(front == (rear+1)%MAX_QUEUE_SIZE)
    {
        printf("Queue is full!\n");
    }
    else
    {
        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1)%MAX_QUEUE_SIZE;
        }
        my_queue.a[rear] = value;
        printf("Successfully insert!\n");
    }
}

void del()
{
    if(front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        if(front == rear)
        {
            front = -1;
        }
        else
        {
            printf("delete value:%d",my_queue.a[front]);
            front = (front+1)%MAX_QUEUE_SIZE;
        }
    }
}

void showQueue()
{
    if(front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        for(int i=0;i<MAX_QUEUE_SIZE;i++)
        {
            printf("%d,",my_queue.a[i]);
        }
        printf("\n");

//        /*Show circular Queue data order by front to rear*/
//        if(front>rear)
//        {
//            for(int i=front;i<MAX_QUEUE_SIZE;i++)
//            {
//                printf("%d,",my_queue.a[i]);
//            }
//            for(int i=0;i<rear;i++)
//            {
//                printf("%d,",my_queue.a[i]);
//            }
//        }
//        else
//        {
//            for(int i=front;i<=rear;i++)
//            {
//                printf("%d,",my_queue.a[i]);
//            }
//        }
//        printf("\n");
    }
}

