#include <stdio.h>
void inRange(int n)
{
    if(n >= -50 && n <= 70)
    {
        printf("%d is in the range between -50 to 70\n",n);
        
    }
    else if( n >= 0 && n <= 100)
    {
        printf("%d is in the range between 0 to 100\n",n);
        
    }
    else
    {
        printf("%d is the invalid input\n",n);
        
    }
}

int main ()
{
    int n;
    scanf("%d",&n);
    inRange(n);
    
    return 0;
}