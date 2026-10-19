#include <stdio.h>
int fun(int x, int y)
{
   return x == 2 ? fun(x+1,x-y) : y ;
}
int main ()
{
    printf("%d\n",fun(2,3));
    
    return 0;
}