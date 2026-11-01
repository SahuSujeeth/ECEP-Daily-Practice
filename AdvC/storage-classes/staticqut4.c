#include <stdio.h>
void abc()
{
    static int s = 1;
    auto int a;
    a = ++s;
    printf("%d %d ",a,s);
    if(a<=3)
    {
        abc();
    }
    printf("%d %d ",a,s);
}
int main ()
{
    abc();
    abc();
    return 0;
}