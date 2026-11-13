#include <stdio.h>
int missingNumber(int arr[], int n)
{
    //int missNumber = 1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    int missing_number = 1;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == missing_number)
        {
            missing_number++;
        }
    }
    if(missing_number > 0)
        return missing_number;
    

}
int main ()
{
    int arr[] = {-1,0,1,1,2,2,4};
    int n = 7;
    int ans = missingNumber(arr,n);
    printf("%d\n",ans);
    return 0;
}