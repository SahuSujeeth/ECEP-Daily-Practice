#include <stdio.h>

int main ()
{
    int size;
    printf("Enter the array of size:");
    scanf("%d",&size);


    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int sorting = 1;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorting = 0;
            break;
        }
    }
    if(sorting)
    {
        printf("sorting\n");
    }
    else
    {
        printf("not sorting\n");
    }
    return 0;
}