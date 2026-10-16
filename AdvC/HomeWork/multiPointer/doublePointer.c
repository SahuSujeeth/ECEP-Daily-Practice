#include <stdio.h>
void fun(int **ptr)
{
    static int num = 10;
    *ptr = &num;
    printf("%d\n",**ptr);
}
int main ()
{
    int *ptr = NULL;
    fun(&ptr);
    printf("%d\n",*ptr);
    
    return 0;
}