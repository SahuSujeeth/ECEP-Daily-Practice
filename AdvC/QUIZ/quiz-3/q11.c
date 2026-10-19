#include <stdio.h>

int main ()
{
    unsigned int x = 0x12345678;
    char *p = (char*)&x;
    char y = *(p+3);
    *(p+3) = x;
    *p = y;
    printf("%x\n",x);
    
    return 0;
}