#include<stdio.h>
int mySqrt(int x) 
{
    // int i=0;
    // while((long long)i * i <= x)
    // {
    //     i++;
    // }  
    int low = 0;
    int high = x;
    int ans = 0;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if((long long)mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    } 
    return ans;
}
int main()
{
    int x = 4;
    int ans = mySqrt(x);
    printf("%d\n",ans);
    
}