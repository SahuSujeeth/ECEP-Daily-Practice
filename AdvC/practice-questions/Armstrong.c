#include <stdio.h>
int armstrong(int n)
{
    int x = n;
    int temp = n;
    int count  = 0;
    while(temp > 0)
    {
      count++;
      temp = temp / 10;
    }

    //temp = x;
    int sum = 0;
    while(n>0)
    {
      int power = 1;
      int remainder = n % 10;
      for(int i=1;i<=count;i++)
      {
        power = power * remainder;
      }
      sum = sum + power;
      n = n / 10;
    }
    return sum;
}
int main ()
{
    int n;
    scanf("%d",&n);
    int result = armstrong(n);
    if(result == n)
    {
        printf("%d is armstrong number\n",n); 
    }
    else
    {
        printf("%d is not armstrong number\n",n);
    }
    return 0;
}