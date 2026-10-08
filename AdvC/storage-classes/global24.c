#include <stdio.h>
int x = 10; // definition
int x;//tentaive definition C allows multiple declarations/tentative definitions of the same variable as long as they are compatible and don't conflict.
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