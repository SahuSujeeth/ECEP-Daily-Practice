//WAP to check if a 3-digit number is armstrong or not.
#include <stdio.h>

int main ()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int new = number;
    int sum = 0;
    while(number > 0)
    {
        int remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }
    if(sum == new)
    {
        printf("%d is armstrong\n",new);
    }
    else
    {
        printf("%d is not a armstrong\n",new);
    }
    return 0;
}