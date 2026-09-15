#include <stdio.h>
int x = 10;// it is fine we can declare like this
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
// Output is 10
