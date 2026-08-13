#include <stdio.h>
int numofDigit(int n)
{
    int count = 0;
    int remainder;
    
    while(n>0)
    {
        remainder = n % 10;
        //sum = sum + remainder;
        count++;
        n = n / 10;
    }
    return count;
}
int main ()
{
    int result =numofDigit(124354);
    printf("sum of digit is :%d\n",result);
    
    return 0;
}