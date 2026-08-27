#include <stdio.h>
void fun(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        arr[i] = arr[i]+1;
    }
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}
int main ()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}