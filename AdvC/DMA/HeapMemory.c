#include <stdio.h>
#include <stdlib.h>
int * fun()
{
    int *ptr = malloc(4); //This will present in the HEAP memory segment it stay until we free
    *ptr = 10;
    return ptr;
}
int main ()
{
    int *ptr = fun();
    printf("%d\n",*ptr);
    
    return 0;
}