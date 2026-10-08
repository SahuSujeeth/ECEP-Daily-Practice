#include <stdio.h>
int factorial(int n)
{
    int factorial = 1;
    for(int i=n ;i>=1;i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main ()
{
    int n;
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,factorial(n));
    
    return 0;
}