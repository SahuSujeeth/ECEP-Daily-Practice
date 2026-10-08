#include <stdio.h>
void largestandsmallest(int arr[], int n)
{
    int largest = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > largest)
         largest = arr[i];
    }
    int smallest = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] < smallest)
         smallest = arr[i];
    }
    printf("laregest of array is %d\n",largest);
    printf("smallest of the array is %d\n",smallest);
}

int main ()
{
    int n=5;
    int arr[5] = {10,20,30,40,50};
    largestandsmallest(arr,n);
    return 0;
}