#include <stdio.h>
int add (int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}
int oper(int (*f)(int, int), int a, int b)
{
    return f(a,b);
}
int main ()
{
    int (*fptr)(int , int);
    fptr = add;
    printf("%d\n",oper(fptr,10,20));
    fptr = sub;
    printf("%d\n",oper(fptr,10,20));
    
    return 0;
}