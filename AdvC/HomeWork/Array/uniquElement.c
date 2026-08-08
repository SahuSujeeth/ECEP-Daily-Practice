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
    int unique_index = 0;
    int unique_array[5];
    int flag;
    for(int i=0;i<size;i++)
    {
        flag = 0;
        for(int j=0;j<unique_index;j++)
        {
            if(arr[i] == unique_array[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            unique_array[unique_index] = arr[i];
            unique_index++;
        }
    }
    printf("%d\n",unique_index);

    
    for(int i=0;i<unique_index;i++)
    {
        printf("%d ",unique_array[i]);
        
    }

    return 0;
}