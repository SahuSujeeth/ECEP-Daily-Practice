#include <stdio.h>

int main ()
{
    int size;
    printf("Enter the array of size:");
    scanf("%d",&size);

    int k;
    printf("Enter the kth value:");
    scanf("%d",&k);
    
    int arr[size];
    printf("enter the elements of array:");
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d ",arr[i]); 
    // }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum = sum + arr[i];
    }
    int max = sum;
    for(int i=1;i<=size-k;i++)
    {
        sum = sum - arr[i-1];
        sum = sum + arr[i+k-1];
        if(max < sum)
        {
            max = sum;
        }
    }
    printf("%d\n",max);
    
    
    
    return 0;
}