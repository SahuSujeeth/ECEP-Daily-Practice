#include <stdio.h>
// int* countBits(int n, int* returnSize)
// {

// }
int numberofOnes(int number,int arr[])
{
    
    int countOne = 0;
    int i;
    for(i=0;i<=number;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(i & (1 << j))
            {
                countOne++;
            }
        }
        arr[i] = countOne;
        countOne = 0;
        
    }
    
}
    
int main ()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int arr[number + 1];
    numberofOnes(number,arr);
   // printf("Number of One's is %d\n",ans);
    for(int i=0;i<=number;i++)
    {
        printf("%d ",arr[i]);
        
    }
    

    // int returnSize;
    // int answer = countBits(number,returnSize);
    
    
    return 0;
}