#include <stdio.h>

int main ()
{
    printf("%d\n",__LINE__);
    printf("was compiled on %s at %s\n",__DATE__,__TIME__);
    printf("this print is from function :\"%s\"",__func__);
    
    return 0;
}