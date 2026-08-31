#include <stdio.h>
int decimal(int n)
{
    static int sum = 0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        int lastdigit = n % 10;
        return sum * 10 + lastdigit + decimal(n/10); 
    }

    // printf("%d\n",sum);  
}
int main ()
{
   int result = decimal(12345);
   printf("%d\n",result);
   //decimal(1234);
    
    return 0;
}