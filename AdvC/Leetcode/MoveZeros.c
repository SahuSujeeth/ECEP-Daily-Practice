/*Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 */
 #include <stdio.h>
 void moveZeros(int arr[], int size )
 {
    int zerosindex = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[zerosindex];
            arr[zerosindex] = temp;
            zerosindex++;
        }
    }
 }
 int main ()
 {
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    moveZeros(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
 }