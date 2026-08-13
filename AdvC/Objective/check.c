#include <stdio.h>

int main ()
{
    unsigned int i = -7;
do
{
    i++;
    printf("%d\n", --i);
} while (i <= 0);
    return 0;
}