#include <stdio.h>

int main ()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("It is an Leaf Year %d\n",year);
        
    }
    else
    {
        printf("%d It is not an leaf year \n",year);
        
    }
    
    
    return 0;
}