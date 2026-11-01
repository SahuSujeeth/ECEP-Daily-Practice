#include <stdio.h>
void f1()
{
    static int i = 1;
    ++i;
    printf("%d ",i);
}
void f2()
{
    static int i;
    i = 1;
    ++i;
    printf("%d ",i);  
}
int main ()
{
    f1();
    f1();
    f2();
    f2();
    return 0;
}