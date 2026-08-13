#include <stdio.h>
int sumofDigit(int n)
{
    int sum = 0;
    int remainder;
    
    while(n>0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}
int main ()
{
    int result =sumofDigit(1234);
    printf("sum of digit is :%d\n",result);
    
    return 0;
}