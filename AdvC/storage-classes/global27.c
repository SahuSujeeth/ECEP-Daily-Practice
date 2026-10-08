#include <stdio.h>
static int x = 10; // this is definition and x has internal linkage
int x; // this is an tentative definition at file scope it has external linkage
int foo()
{
printf("x %d\n", x);
return 0;
}
int main()
{
foo();
return 0;
}
// this is error 
