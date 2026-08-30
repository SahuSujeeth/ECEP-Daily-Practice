#include <stdio.h>
void sumandaverage(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of array is %d\n",sum);
    float average;
    average = (float)sum / 5;
    printf("avverage is %f\n",average);
}

int main ()
{
    int n=5;
    int arr[5] = {10,20,30,40,50};
    sumandaverage(arr,n);
    return 0;
}