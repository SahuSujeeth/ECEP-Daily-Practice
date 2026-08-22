//WAP to check if a number is prime or not.
#include <stdio.h>

int main ()
{
    int number;
    printf("Enter the nubmer:");
    scanf("%d",&number);
    int count;
    for(int i=1; i<= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("%d is a prime number\n",number);
    }
    else
    {
        printf("%d is not prime number\n",number);   
    }
    return 0;
}