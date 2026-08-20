#include <stdio.h>
int fun(int);
int main()
{
    
    int x,y;
    x = 2;
    y = fun(x);
    
    printf("%d\n",y);
    return 0;
}
int fun(int a)
{
    return a + 1;
}