#include <stdio.h>
void evenOrOdd(int n)
{
    if(n % 2 == 0)
    {
        printf("Even\n"); 
    }
    else
    {
        printf("Odd\n");
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    evenOrOdd(n);
    return 0;
}