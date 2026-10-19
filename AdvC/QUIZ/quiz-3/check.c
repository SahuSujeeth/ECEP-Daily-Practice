#include <stdio.h>
#include <stdlib.h>
void  fun(int *ptr)
{
    ptr = malloc(4);
    *ptr = 20;
    
}
int main ()
{
    int num = 10;
    int *ptr = &num;
    fun(ptr);
    printf("%d\n",*ptr);
    
    return 0;
}