#include <stdio.h>

int sec_largest(int arr[], int size)
{
   int largest = arr[0];
   for(int i=1;i<size;i++)
   {
       if(arr[i] > largest)
       {
           largest = arr[i];
       }
   }
   int smallest = arr[0];
   for(int i=1;i<size;i++)
   {
       if(arr[i] < smallest)
       {
           smallest = arr[i];
       }
   }
   int second_largest = smallest;
   for(int i=0;i<size;i++)
   {
       if(arr[i] < largest && arr[i] > second_largest)
       {
           second_largest = arr[i];
       }
   }
   return second_largest;
}



int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}