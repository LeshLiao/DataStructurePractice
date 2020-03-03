#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "linkedlist.h"

int main()
{
    struct node *head = NULL;
    bool loopOpreation = true;

    while(loopOpreation)
    {
        printf("1. show data \n");
        printf("2. insert begin \n");
        printf("3. insert end \n");
        printf("5. delete begin \n");
        printf("6. delete end \n");
        printf("0. exit \n");
        printf("Enter your choice: ");
        int option,pos;
        scanf("%d",&option);
        switch (option)
        {
            case 1:
                showMyData(&head);
            break;
            case 2:
                beginInsert(&head);
            break;
            case 3:
                endInsert(&head);
            break;
            case 4:
                printf("position: ");
                scanf("%d",&pos);
                positionInsert(&head,pos);
            break;
            case 5:
                beginDelete(&head);
            break;
            case 6:
                endDelete(&head);
            break;
            case 7:
                printf("position: ");
                scanf("%d",&pos);
                positionDelete(&head,pos);
            break;
            case 0:
                loopOpreation = false;
            break;
            default:
                printf("Invalid option!");
            break;
        }
    }
    printf("See you!\n");
    return 0;
}
