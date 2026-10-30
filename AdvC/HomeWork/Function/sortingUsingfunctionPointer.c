#include <stdio.h>
int asceding(int n1, int n2)
{
    return n1 > n2;
}
int decending(int n1, int n2)
{
    return n1 < n2;
}
void sorting(int *arr,int n,int (*compare)(int , int))
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(compare(arr[j],arr[j+1]))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main ()
{
    int arr[] = {1,7,2,5,3};
    int n = 5;
    sorting(arr, n, asceding);
    printf("Sorting asceding the array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    sorting(arr, n, decending);
    printf("Sorting decending the array:\n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}