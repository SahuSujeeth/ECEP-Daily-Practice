#include <stdio.h>
#include <stdlib.h>
void fun(int *ptr)
{
    ptr = malloc(4);
    *ptr = 10;
    printf("%d\n",*ptr);
    
}
int main ()
{
    
    int *ptr1 = NULL;
    fun(ptr1);
    printf("%d\n",*ptr1);
    
    return 0;
}