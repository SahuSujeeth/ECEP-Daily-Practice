#include <stdio.h>
int  moveZeors(int arr[], int size)
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
    return zerosIndex;
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
    int returnIndex =  moveZeors(arr,size);
    printf("%d\n",returnIndex);
    
    for(int i=0; i< returnIndex;i++)
    {
        printf("%d ",arr[i]);
        
    }
    
    
    return 0;
}