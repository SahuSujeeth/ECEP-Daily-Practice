#include <stdio.h>
int isPrime(int n)
{
    int count = 0;
    for(int i = 1;i<=n;i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
        return 1;
    else
        return 0;
}
void primeFactorisation(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i) == 1)
        {
            int x = i;
            while(n % x == 0)
            {
                printf("%d ",i);
                x = x * i;
                
            }

        }
    }
}
int main ()
{
    int n = 100;
    primeFactorisation(n);
    // int ans = isPrime(n);
    
    return 0;
}