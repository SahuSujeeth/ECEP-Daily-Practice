 #include <stdio.h>
 #include<stdlib.h>
 int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
   int *result = malloc(sizeof(int)*2);
   *returnSize = 2;
   for(int i = 0; i < numsSize-1; i++)
   {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
   }
*returnSize = 0;
free(result);
return NULL;
}
 
 int main ()
 {
    int returnSize;
    int numsSize;
    printf("Enter the Size of the array: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&nums[i]);
        
    }
    int target;
    printf("Enter the target: ");
    scanf("%d",&target);
    int *ans = twoSum(nums, numsSize,target,&returnSize);
    if(ans != NULL)
    {
        printf("[%d, %d]\n",ans[0],ans[1]);
        
    }
    return 0;
 }