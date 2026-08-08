#include <stdio.h>

int main ()
{
    int N;
    printf("Enter the N value:");
    scanf("%d",&N);
    
    
    int size;
    printf("Enter the array of size:");
    scanf("%d",&size);

    int arr[size];
    for(int  i= 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(N == arr[i] + arr[j])
            {
                printf("(%d,%d)\n",arr[i],arr[j]);
                
            }
        }
    }
    return 0;
}