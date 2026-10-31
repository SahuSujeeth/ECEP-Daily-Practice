#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize-1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
        {
            high = mid - 1;
        }   
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int size = 6;
    int arr[] = { -1,0,3,5,9,12};
    int ans = searchInsert(arr,size,2);
    printf("%d\n",ans);

}