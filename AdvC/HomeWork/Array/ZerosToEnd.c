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
    //int arr[5] = {0,0,1,2,3};
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
}