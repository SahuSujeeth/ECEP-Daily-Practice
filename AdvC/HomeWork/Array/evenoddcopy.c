#include<stdio.h>
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int evenArray[size];
    int evenCount=0;
    int oddArray[size];
    int oddCount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenArray[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            oddArray[oddCount] = arr[i];
            oddCount++;
        }
    }
    printf("Odd array elements: ");
    
    for(int i=0 ;i<oddCount;i++)
    {
        printf(" %d ",oddArray[i]);
    }
    printf("\n");
    printf("Even array elements: ");

    for(int i=0; i<evenCount;i++)
    {
        printf("%d ",evenArray[i]);
    }
    return 0;
}