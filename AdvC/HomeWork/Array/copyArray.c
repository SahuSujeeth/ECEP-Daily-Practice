#include<stdio.h>
int main()
{
    int size;
   // printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        arr2[i] = arr[i];
    }
    printf("Array1 elements: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Array2 elements: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}