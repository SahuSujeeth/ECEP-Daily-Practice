#include <stdio.h>
int *fun()
{
    static int i=10;
    int *j = &i;
    return j;
}
void test()
{
    int x = 50;
    printf("x = %d\n", x);
}
int main ()
{
    int *i;
    i = fun();
    test();
    printf("i %d\n",*i);
    
    return 0;
}
//this is the perfect example that shows how the normal variable and static variables works.