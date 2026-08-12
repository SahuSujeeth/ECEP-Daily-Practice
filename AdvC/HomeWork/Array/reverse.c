 #include <stdio.h>
 
 int main ()
 {
    int arr[5] = {1,2,3,4,5};
    //int size = 5;
    int left = 0;
    int right = 5 - 1;
    int temp;
    while(left < right)
    {
       temp = arr[left];
       arr[left] = arr[right];
       arr[right] = temp;
       left++;
       right--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        
    }

    return 0;
 }