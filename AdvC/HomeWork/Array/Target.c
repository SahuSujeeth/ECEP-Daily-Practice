#include <stdio.h>

int main ()
{
    int arr[6] = {1,2,3,4,5,6};
    int target = 7;
    for(int i=0;i<6;i++)
    {
        if(arr[i]+arr[i+1] == target)
        {
            printf("%d %d\n",i,i+1);
            break;
            
        }
    }
    return 0;
}