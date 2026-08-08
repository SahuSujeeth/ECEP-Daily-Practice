//WAP to print x^y.
#include <stdio.h>

int main ()
{
    int x_value, y_value;
    printf("Enter the value of x and y for the power series:");
    scanf("%d %d",&x_value,&y_value);
    int power = 1;
    for(int i=1; i<=y_value;i++)
    {
        printf("%d ",power);
        power *= x_value;
        
    }
    
    
    return 0;
}