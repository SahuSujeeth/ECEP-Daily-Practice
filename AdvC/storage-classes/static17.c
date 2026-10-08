#include <stdio.h>
int foo()
{
static int i;
return i;
}
int main()
{
static int x = foo();// this will get error becoz of the intilised element is not constant this will not allow to do like this
printf("x %d\n", x);
return 0;
}
