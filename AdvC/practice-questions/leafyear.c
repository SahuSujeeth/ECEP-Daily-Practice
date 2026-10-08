//WAP to check if a year is leap or not
#include <stdio.h>
void isleafyear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}

int main ()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    isleafyear(year);
    
    
    
    return 0;
}