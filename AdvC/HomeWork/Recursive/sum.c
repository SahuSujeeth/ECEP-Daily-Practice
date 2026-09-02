#include <stdio.h>
int sumofdigit(int n)
{
    static int sum = 0;
    if(n==0)
    {
        return 0;
    }

    else
    {
        int lastdigit = n % 10;
        return sum * 10 + lastdigit + sumofdigit(n/10);
         
    }  
}
int main ()
{
   int result = sumofdigit(12345);
   printf("%d\n",result);
    
    return 0;
}