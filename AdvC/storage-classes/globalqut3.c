#include <stdio.h>
int x = 10;
int f1()
{
    int x = 25;
    ++x;
    return x;
}
int f2()
{
    static int x = 50;
    ++x;
    return x;
}
int f3()
{
    x *= 10;
    return x;
}
int main ()
{
    int x = 1;
    x = x + f1() + f2() + f3() + f2();
    printf("%d\n",x);
    
    return 0;
}