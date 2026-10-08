#include <stdio.h>
int x = 10; // definition
int x = 20;// Error rediefintion 
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
//this is error.