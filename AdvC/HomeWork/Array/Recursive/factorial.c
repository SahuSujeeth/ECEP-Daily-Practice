#include <stdio.h>
int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
        
    }
    
}
int main ()
{
    int n;
    scanf("%d",&n);
    int result = factorial(n);
    printf("factorial of %d is %d\n",n,result);
    
    return 0;
}