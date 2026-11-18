#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void findDisappearedNumbers(int* nums, int numsSize, int* returnSize) 
{
    int *arr = calloc(numsSize , sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        arr[nums[i] - 1]++;
    }
    
    int count = 0;
    for(int i=0;i<numsSize;i++)
    {
        if(arr[i] == 0)
        {
            arr[count] = i+1;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
    


     
}
int main ()
{
    int arr[] = {1,1};
    // int arr[] = {4,3,2,7,8,2,3,1};
    int n = 2;
    int returnSize;
    //int *ans = kthmissingNumber(arr,n);
    findDisappearedNumbers(arr,n,&returnSize);
    
    //printf("%d\n",ans);
    return 0;
}