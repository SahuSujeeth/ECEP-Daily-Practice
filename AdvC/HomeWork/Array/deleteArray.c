#include <stdio.h>

int main ()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);


    int arr[size];
    printf("Enter the elements:");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int value;
    printf("Enter the value:");
    scanf("%d",&value);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    for(int i=0;i<size-1;i++)
    {
        if(arr[i] == value)
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j] = arr[j+1];
            }
        }
      //  break;
    }
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
        
    }
    
    
    return 0;
}