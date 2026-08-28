#include <stdio.h>

void print_sort(int arr[], int size)
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
    printf("After sorting: ");
    for(int i=0;i<size;i++)
    {
        int second = largest;
        for(int j=0;j<size;j++)
        {
            if(arr[j] > smallest && arr[j] < second)
            {
                second = arr[j];
            }
        }
        printf("%d ",smallest);
        smallest = second;
    }
    printf("\n");
}
int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    print_sort(arr, size);
    printf("Original array values ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}