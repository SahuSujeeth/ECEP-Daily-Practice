#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    int reverseNumber = 0;
    while(n>0)
    {
        int lastdigit = n % 10;
        reverseNumber = (reverseNumber * 10) + lastdigit;
        n = n / 10;
    }
    printf("reverse is %d\n",reverseNumber);
    
    
    return 0;
}