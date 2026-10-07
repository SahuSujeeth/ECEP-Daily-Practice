#include <stdio.h>

int main ()
{
    int num ,mask = 1;
    printf("Enter the number:");
    scanf("%d",&num);
    int result = num & mask;
    if(result == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}