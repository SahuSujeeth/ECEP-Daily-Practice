#include <stdio.h>

int main ()
{
    static int  i=5;
    if(--i)
    {
        main();
        //return main();
    }
    printf("i %d\n",i);
    
    return 0;
}