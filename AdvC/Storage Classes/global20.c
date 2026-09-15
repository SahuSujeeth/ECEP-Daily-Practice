#include <stdio.h>
int x;
int foo()
{
   printf("x %d\n", x);
   return ++x;
}
int main()
{
   foo();
   printf("x %d\n", x);
   return 0;
}
//This will run well and we get output 0 and 1 but becoz global uninitialize will take x with 0.
