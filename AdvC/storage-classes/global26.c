#include <stdio.h>
static int x = 10;// this is an static global variable
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
//output is 10

//   #include <stdio.h>
//   int fun(int a, int b)
//   {
//     a+b;
//   }
//   int main ()
//   {
//     printf("%d\n",fun(10,20));
    
//     return 0;
//   }