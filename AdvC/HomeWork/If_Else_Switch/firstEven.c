// Write a C program to repeatedly accept integers from the user. As soon as the user enters the first even number, 
// display the number along with the message "First Even Number Found" and terminate the loop using the break statement.
#include <stdio.h>

int main ()
{
    int number;
    do
    {
        scanf("%d",&number);
        if(number % 2 == 0)
        {
            printf("First even Number found\n");
            break;
        }
    }while(1);
    return 0;
}