#include <stdio.h>
int findLargest(int *arr, int n)
{
    int largest = *(arr+0);
    for(int i=1;i<n;i++)
    {
        if(*(arr+i) > largest)
        {
            largest = *(arr+i);
        }
    }
    return largest;
}
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = findLargest(arr,n);
    printf("Largesst element of array %d\n",result);
    
    
    return 0;
}