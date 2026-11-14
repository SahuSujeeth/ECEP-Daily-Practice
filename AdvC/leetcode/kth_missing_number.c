#include <stdio.h>
int kthmissingNumber(int arr[], int n,int k)
{

    int missing_numbers = 1;
    int count = 0;
    for(int j = 0;;)
    {
        if(j < n && arr[j] == missing_numbers)
        {
            j++;
        }
        else
        {
            count++;
            if(count == k)
                return missing_numbers;
        }
        missing_numbers++;
    }
    //int j=0;
    // while(1)
    // {
    //     if(j<n && arr[j] == missing_numbers)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         count++;
    //         if(count == k)
    //             return missing_numbers;
    //     }
    //     missing_numbers++;
    // }
}
int main ()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    int k = 2;
    int ans = kthmissingNumber(arr,n,k);
    printf("%d\n",ans);
    return 0;
}