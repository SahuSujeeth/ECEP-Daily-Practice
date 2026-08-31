#include <stdio.h>
int isprime(int n)
{
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
         count++;
    }
    return count;
}
int main ()
{
    int n;
    scanf("%d",&n);
    if(isprime(n) == 2)
    {
        printf("%d is prime\n",n);  
    }
    else
    {
        printf("%d is not prime\n",n);
        
    }

    
    return 0;
}