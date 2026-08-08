#include <stdio.h>

int main ()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    
    int arr[size];
    for(int  i= 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int palindrome = 1;
    for(int i=0;i<size/2;i++)// here the size / 2 is for its skips the extra comparison becoz we don't need to check the extra comparision for this.
    {
        if(arr[i] != arr[size-i-1])
         {
            palindrome = 0;
            break;
         }
    }
    if(palindrome)
    {
        printf("given array  is palindrome\n");    
    }
    else
    {
        printf("given array  is not  palindrome\n");    

    }
    return 0;
}