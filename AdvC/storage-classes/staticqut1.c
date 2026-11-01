#include <stdio.h>

void main ()
{
    static int a = 1;
    ++a;
    printf("%d ",a);
    if(a<=3)
        main();
    printf("%d ",a);
}