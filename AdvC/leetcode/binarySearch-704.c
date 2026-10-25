#include<stdio.h>
int binarySearch (int *nums, int numsSize, int target)
{
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    // for(int i=0;i<numsSize;i++)
    // {
    //     printf("%d ",nums[i]);
        
    // }
    int low = 0;
    int high = numsSize-1;
    while(low <= high)
    {
        int mid =( low + high) / 2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if( nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return -1;
}
int main()
{
    int size = 6;
    int arr[] = { -1,0,3,5,9,12};
    int ans = binarySearch(arr,size,2);
    printf("%d\n",ans);

}