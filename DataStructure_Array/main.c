#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
int main()
{
    int a[MAX_SIZE],size,temp,position;

    printf("Enter a number of array:");
    scanf("%d",&size);

    for(int i=0;i<size;i++)
    {
        printf("Enter %d th value:",i);
        scanf("%d",&a[i]);
    }

    //Sort array elements
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Show sorted array:");
    for(int i=0;i<size;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\n");

    printf("Enter a index to delete a element(1~%d):",size);
    scanf("%d",&position);

    if(position > 0 && position <= size)
    {
        for(int i=position-1;i<size-1;i++)
        {
            a[i] = a[i+1];
        }
        size--;
        printf("Show result after delete a element:");
        for(int i=0;i<size;i++)
        {
            printf("%d, ",a[i]);
        }
    }
    else
    {
        printf("Invalid position value!");
    }

    return 0;
}

