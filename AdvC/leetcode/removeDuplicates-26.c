#include <stdio.h>
int removeDuplicates(int arr[], int size)
{
    int i = 0;
    for(int j = 1; j < size; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    
    }
    return i+1;
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
    int returnIndex =  removeDuplicates(arr,size);
    printf("%d\n",returnIndex);
    
    for(int i=0; i< returnIndex;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
}