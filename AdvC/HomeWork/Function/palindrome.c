#include <stdio.h>
int palindrome(int n)
{
    int x = n;
    int remainder;
    int reverse = 0;
    while(n>0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    if(reverse == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

    if(palindrome(number))
    {
        printf("%d is palindrome\n",number);
        
    }
    else
    {
        printf("%d is not palindrome\n",number);

    }
    
    
    
    return 0;
}