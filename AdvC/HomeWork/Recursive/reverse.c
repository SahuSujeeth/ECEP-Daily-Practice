#include <stdio.h>
void decimal(int n)
{
    if(n<1)
    {
        return;
    }
    else
    {
        printf("%d ",n % 10);
        decimal(n/10);
    }
}
int main ()
{
    decimal(1234);
    return 0;
}