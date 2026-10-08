#include <stdio.h>
char *foo()
{
    static char ca[12] = "Hello World";// this is also fine becoz this one is static and it will stay end of the program.so this will fine.
    return ca;
}
int main ()
{
    char *ca;
    ca = foo();
    printf("ca is %s\n",ca);
    
    return 0;
}
