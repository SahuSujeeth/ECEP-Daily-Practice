#include <stdio.h>
void limitprime(int n)
{
    for(int i=1;i<=n;i++)
    {
        int count = 0;
        for(int j=1;j<=i;j++)
        {
        if(i % j == 0)
        count++;
        }
        if(count == 2)
        printf("%d ",i);
    }
    
}
int main ()
{
    int n;
    scanf("%d",&n);
    limitprime(n);

    
    return 0;
}