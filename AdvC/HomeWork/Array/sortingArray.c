#include <stdio.h>

int main ()
{
    //int arr[5] = {3,2,1,4,5};
    char arr[] = "thing";
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
        
    }
    for(int i=0 ; i<5; i++)
    {
        printf("%c ",arr[i]);
        
    }
    return 0;
}