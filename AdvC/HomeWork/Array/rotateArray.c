#include <stdio.h>

int main ()
{
    int arr[5] = {2,3,1,7,8};
    int temp = arr[5-1];
    for(int i=5-1;i>=1;i--)
    {
        arr[i] = arr[i-1];
    }
   //
    arr[0] = temp;
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
}