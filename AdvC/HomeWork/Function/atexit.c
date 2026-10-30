#include <stdio.h>
#include <stdlib.h>
void print()
{
    printf("Program successfully done!!\n");
    
}
int main ()
{
    atexit(print);
    printf("Hello!!\n");
    printf("Sum = %d\n",10+20);
    return 0;
}