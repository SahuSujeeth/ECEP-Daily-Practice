#include <stdio.h>
int main()
{
    int x;
    printf("abc %n cd \n", &x);
    printf("The value of x is %d", x);
    return 0;
}