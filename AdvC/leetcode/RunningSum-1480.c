#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize)
{
    int *result = malloc(sizeof(int) * numsSize);
    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
       sum = sum + nums[i];
       result[i] = sum;
    }
    return result;
    
}
int main ()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int *ans = runningSum(arr,size);
    for(int i=0; i<size;i++)
    {
        printf("%d ",ans[i]);
        
    }
    
    
    
    return 0;
}