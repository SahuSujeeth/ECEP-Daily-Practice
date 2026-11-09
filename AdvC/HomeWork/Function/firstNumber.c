#include <stdio.h>
int firstDigit(int n)
{
    while (n > 10)
    {
        n = n / 10;
    }
    return n;
    
}
int main ()
{
    int n = 256;
    int ans = firstDigit(n);
    printf("%d\n",ans);
    
    return 0;
}