 #include <stdio.h>
 
 int main ()
 {
    int arr[5] = {2,3,1,4,5};
    int smallest=arr[0];
    int i;
    for(i=1;i<5;i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("%d\n",smallest);
    int largest =  arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("%d\n",largest);
    int second_smallest = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i] < smallest && arr[i] < largest)
        {
            second_smallest = arr[i];
        }
    }
    printf("%d\n",second_smallest);


    return 0;
 }