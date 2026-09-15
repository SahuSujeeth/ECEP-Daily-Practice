#include <stdio.h>
register int x; //we can't declare register at global same like 
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