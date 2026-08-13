#include <stdio.h>
int checkPrime(int n)
{
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
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
    printf("Enter the nubmer:");
    scanf("%d",&number);

    if(checkPrime(number))
    {
        printf("It is prime\n");
    }
    else{
        printf("Not a prime\n");
        
    }

    
    
    return 0;
}