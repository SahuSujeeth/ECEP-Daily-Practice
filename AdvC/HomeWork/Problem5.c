//WAP to print 2 power series.
#include <stdio.h>

int main ()
{
    int number;
    printf("Enter the how many times you need the power of 2 series:");
    scanf("%d",&number);
    int power = 1;
    for(int i=1; i<=number; i++)
    {
        printf("%d ",power);
        power *= 2;
        
    }
    return 0;
}