#include <stdio.h>
void sumofArray(int arr[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
    
}
int main ()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sumofArray(arr,size);

    return 0;
}