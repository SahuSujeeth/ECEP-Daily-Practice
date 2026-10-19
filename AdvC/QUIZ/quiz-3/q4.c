#include <stdio.h>

int main ()
{
    short x = 0;
    char *cptr = (char*)&x;
    if(cptr)
    printf("hello\n");
   // printf("hey hello\n");
    else
    printf("world\n");
    
    
    return 0;
}