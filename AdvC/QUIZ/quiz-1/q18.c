#include <stdio.h>
int fun(int a)
{
    int x = 0;
    x ? sizeof a : sizeof int;
    return x;
}
int main ()
{
    int a = 10;
    printf("%d\n",fun(a));
    
    return 0;
}