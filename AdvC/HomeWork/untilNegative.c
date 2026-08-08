// //Write a C program to repeatedly accept integers from the user. Continue accepting input until the user enters a negative number. 
// When a negative number is entered, display "Negative Number Entered. Program Terminated." and terminate the loop using the break statement.
#include <stdio.h>

int main ()
{
    int number;
    do
    {
        scanf("%d",&number);
        if(number < 0)
        {
            printf("Negative Number Entered\n");
            break;
        }
    }while(1);
    // for( ; ;)
    // {
    //     scanf("%d",&number);
    //     if(number < 0)
    //     {
    //         printf("negativ number entered\n");
    //         //break;
    //     }
    // }
    return 0;
}