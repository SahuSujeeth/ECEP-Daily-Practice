#include <stdio.h>
void threedigitarmstrong(int n, int x)
{
    int sum = 0;
    while(n>0)
    {
      int remainder = n % 10;
      sum = sum + (remainder * remainder * remainder);
      n = n / 10;
    }
    if(sum == x)
    {
        printf("%d is armstrong number\n",x); 
    }
    else
    {
        printf("%d is not armstrong number\n",x);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    int x = n;
    threedigitarmstrong(n,x);
    
    return 0;
}