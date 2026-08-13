#include <stdio.h>
int factorial(int n)
{
    int factorial = 1;
    for(int i=1;i<=n;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main ()
{
    int n;
    printf("Enter the n value:");
    scanf("%d",&n);
    
    int result = factorial(n);
    printf("%d\n",result);
    
    
    return 0;
}