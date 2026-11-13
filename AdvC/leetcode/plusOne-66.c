#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize)
{

    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int *result = malloc(sizeof(int) * (digitsSize+1));
    result[0] = 1;
    for(int i=1;i<=digitsSize;i++)
    {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;


 
}
int main()
{
    int digits[] = {1,4,2,4};
    int digitSize = 4;
    int returnSize;
    int *ans = plusOne(digits,digitSize,&returnSize);
    for(int i=0;i<returnSize;i++)
    {
        printf("%d ",ans[i]);
        
    }

}