#include <stdio.h>
void PosOrNeg(int n)
{
    if(n > 0)
    {
        printf("Positve\n");
    }
    else if(n < 0)
    {
        printf("Negative\n"); 
    }
    else
    {
        printf("Zero\n");
        
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    PosOrNeg(n);  
    return 0;
}