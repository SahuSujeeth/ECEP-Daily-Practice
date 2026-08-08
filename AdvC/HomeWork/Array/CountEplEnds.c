#include <stdio.h>

int main ()
{
    int size;
    printf("Enter the array of size:");
    scanf("%d",&size);


    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }

    int count = 0;
    for(int i=0;i<size/2;i++)//here also the same thing why happening that's why i used the size by 2..
    {
        if(arr[i] == arr[size-i-1])
        {
            count++;
        }
    }
    printf("%d Matching pairs are their.\n",count);
    
    return 0;
}