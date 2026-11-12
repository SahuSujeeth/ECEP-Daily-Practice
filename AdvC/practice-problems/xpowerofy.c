//WAP to print x^y.
#include <stdio.h>
void xtothepowerofy(int x, int y)
{
    int power = 1;
    for(int i=1; i<=y;i++)
    {
        printf("%d ",power);
        power *= x;
        
    }
}

int main ()
{
    int x_value, y_value;
    printf("Enter the value of x and y for the power series:");
    scanf("%d %d",&x_value,&y_value);
    xtothepowerofy(x_value,y_value);
    
    
    
    return 0;
}