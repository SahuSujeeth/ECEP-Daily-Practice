#include <stdio.h>
int fun(int n)
{
    static int i = 1;
    if(n>5)
        return n;
    n = n+i;
    i++;
    return fun(n);
}
int main ()
{
    int ans = fun(1);
    printf("%d\n",ans);
    
    return 0;
}