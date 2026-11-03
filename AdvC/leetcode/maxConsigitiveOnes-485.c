#include <stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int cOnes = 0;
    int countOnes = 0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] != 0)
        {
            cOnes++;
            if(cOnes >= countOnes)
            {
                countOnes = cOnes;
            }
        }
        else
        {
            cOnes = 0;
        }
    }
    return countOnes;
}
int main ()
{
    int arr[] = {1,0,1,1,0,1};
    int size = 6;
    int ans = findMaxConsecutiveOnes(arr,size);
    printf("%d\n",ans);
    
    return 0;
}
