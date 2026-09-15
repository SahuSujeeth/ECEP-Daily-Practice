#include <stdio.h>
auto int x; //we can't declare auto in  global variable
int foo()
{
printf("x %d\n", x);
return ++x;
}
int main()
{
foo();
printf("x %d\n",x);
return 0;
}
//this will show error something like error - file scope declaration of 'x' specific 'auto'