#include <stdio.h>

int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a % i == 0)
        {
            printf("%d ",i);
            
        }  
    }
    printf("\n");
    
    for(int j=1;j<=b;j++)
    {
        if(b % j == 0)
        {
            printf("%d ",j);
            
        }  
    }
    return 0;
}