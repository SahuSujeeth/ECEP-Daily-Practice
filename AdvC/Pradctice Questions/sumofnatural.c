#include <stdio.h>
int sumofNatural(int n)
{
    int sum = 0;
    for(int i=1 ;i<=n;i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main ()
{
    int n;
    scanf("%d",&n);
    printf("sum of N natural numbers is %d\n",sumofNatural(n));
    
    return 0;
}