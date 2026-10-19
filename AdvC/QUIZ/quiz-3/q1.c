#include <stdio.h>

int main ()
{
    int *p ,*q;
    int x,y,z;
    x = 10;
    y = 20;
    p = &x;
    q = &y;
    z = *p / (*q);
    printf("%d %d %d\n",*p,*q,z);
    
    return 0;
}