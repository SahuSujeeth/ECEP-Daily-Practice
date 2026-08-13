#include <stdio.h>
int reverse(int n)
{
    int remainder;
    int reverse = 0;
    while(n>0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    return reverse;
}

int main ()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    int result = reverse(number);
    printf("Reverse of the number is the : %d\n",result);
    
    
    
    return 0;
}