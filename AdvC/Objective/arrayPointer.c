#include <stdio.h>

// Here the function always recives the function parameter of array recives as a pointer not like array.
 void fun(int arr[])
 {
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        
    }
 }
int main ()
{
    int arr[] = {10, 20, 30, 40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    fun(arr);
    
    return 0;
}