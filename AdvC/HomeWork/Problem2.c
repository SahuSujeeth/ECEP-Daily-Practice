//WAP to find the factorial of a given number.
#include <stdio.h>
int main ()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int factorial=1;
    for(int i=1; i<=number; i++)
    {
      factorial *= i;
    }
    printf("%d\n",factorial);
    return 0;
}
 