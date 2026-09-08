#include <stdio.h>

int main ()
{
    int x=30,*y,*z;
    y = &x; // Assume address of x is 500 and intger is 4 bytes sizze
    z = y;
    *y = *z+1;
    x++;
    printf("x=%u,y=%u,z=%u\n",x,*y,*z);
    return 0;
}