#include<stdio.h>
int highestAltitude(int gain[], int gainSize)
{
        int highestAlt = 0;
        int sum = 0;
        for(int i=0;i<gainSize;i++)
        {
            sum = sum + gain[i];
            if(sum > highestAlt)
            {
                highestAlt = sum; 
            }
        }
        return highestAlt;
}
int main()
{
    int gain[7] = {-4,-3,-2,-1,4,3,2};
    int gainSize = 7;
    int res = highestAltitude(gain,gainSize);
    printf("%d\n",res);
    

    return 0;
}