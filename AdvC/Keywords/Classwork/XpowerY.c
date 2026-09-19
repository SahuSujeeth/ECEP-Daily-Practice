#include <stdio.h>

int main ()
{ 
    int Y_number;
    printf("enter the y value:");
    scanf("%d",&Y_number);
    int X_number;
    printf("enter the x value:");
    scanf("%d",&X_number);
    int power = 1;
    for(int i=0;i<=Y_number;i++)
    {
        printf("%d ", power);
        power = power * X_number;
        
    }
    
    
    
    return 0;
}