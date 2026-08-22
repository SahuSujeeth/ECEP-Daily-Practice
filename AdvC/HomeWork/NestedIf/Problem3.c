//WAP to check if the number is in range or not like 0 to 100, -50 to 70.
#include <stdio.h>
int main ()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number > 0 && number <= 100)
    {
        if(number <= 70)
        {
            printf("Number is in -50 to 70\n");
        }
        else
        {
            printf("Number is in 0 to 100\n");
        }
    }
    else if(number >= -50)
    {
        printf("Number is in -50 to 70\n");
    }
    else
    {
        printf("Number is not in range\n");
    }
    return 0;
}