#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for(int i=0;i<numsSize;i++)
    {
        result = nums[i] ^ result;
    }
    return result;
}

int main ()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int ans = singleNumber(arr,size);
    printf("Results is %d\n",ans);

    return 0;
}