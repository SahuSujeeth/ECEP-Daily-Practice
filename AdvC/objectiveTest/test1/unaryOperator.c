#include <stdio.h>

int main ()
{
    int x, a = 2, b = 8,c = 0;
    x = a > b ? a > c ? a : c : b > c ? b : c;
    printf("%d\n",x);
    

    return 0;
}