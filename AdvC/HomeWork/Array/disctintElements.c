#include <stdio.h>
int disctintElement(int arr[], int n)
{
    int count = 0;
    int isdisctinct = 1;
    for(int i=0; i < n;i++)
    {
        isdisctinct = 1;
        for(int j=i;j<n-1;j++)
        {
            if(arr[i] == arr[j+1])
            {
                isdisctinct = 0;
                break;
            }
        }
        if(isdisctinct == 1)
            count++;
    }
    return count;
}
int main ()
{
    int arr[] = {1,2,2,3,4,5,5};
    int n = 7;
    int ans = disctintElement(arr,n);
    printf("%d\n",ans);
    
    return 0;
}