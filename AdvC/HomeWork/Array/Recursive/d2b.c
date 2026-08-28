#include <stdio.h>
void decimal(int n)
{
    if(n<1)
    {
        return;
    }
    else
    {
        decimal(n/2);
        printf("%d ",n % 2);
        
    }
}
int main ()
{
    decimal(15);
    return 0;
}