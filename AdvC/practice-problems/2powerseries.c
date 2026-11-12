#include <stdio.h>
void powerSeries(int n)
{
    int power = 1;
    int i=1;
    while(i<=n)
    {
        printf("%d ",power);
        power = power * 2;
        i++;
        
    }
}
int main ()
{
    // 2 power series : 1 2 4 8 16
    int n;
    scanf("%d",&n);
    powerSeries(n);
   
    return 0;
}