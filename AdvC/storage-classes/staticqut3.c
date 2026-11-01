#include <stdio.h>
int f(int n)
{
    static int r = 0;
    if(n <= 0)
        return 0;
    if(n > 3)
    {
        r = n;
        return f(n-1) + r;
    }
    return f(n-1) + r;
}
int main ()
{
    int ans = f(5);
    printf("%d\n",ans);
    
    return 0;
}