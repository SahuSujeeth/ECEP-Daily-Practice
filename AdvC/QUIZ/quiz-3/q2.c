#include <stdio.h>

int main ()
{
    short x = 0;
    char *cptr = &x;
    if(*cptr)
    printf("hello\n");
    else
    printf("world\n");
    
    
    return 0;
}