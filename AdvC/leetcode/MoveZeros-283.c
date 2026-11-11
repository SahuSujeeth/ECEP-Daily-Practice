#include <stdio.h>
void  moveZeors(int arr[], int size)
{
    int zerosIndex = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[zerosIndex];
            arr[zerosIndex] = temp;
            zerosIndex++;
        }
    }
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
    moveZeors(arr,size);
    
    for(int i=0; i< size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    
    return 0;
}