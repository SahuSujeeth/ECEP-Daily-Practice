#include <stdio.h>
int strongNumber(int n)
{
    int remainder, sum = 0;
    int x = n;
    while(n>0)
    {
      int factorial = 1;
      remainder = n % 10;
      for(int i=remainder;i>=1;i--)
      {
        factorial = factorial * i;
      }
      sum = sum + factorial;
      n = n / 10;
    }
    if(sum == x)
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
    int result = strongNumber(145);
    if(result)
    {
        printf("Strong nUmber\n");
        
    }
    else
    {
        printf("Not a Strong nUmber\n");

    }
    return 0;
}