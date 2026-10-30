#include <stdio.h>
int add (int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}
int main ()
{
    int (*fptr)(int , int);
    fptr = add;
    printf("%d\n",fptr(10,20));
    fptr = sub;
    printf("%d\n",fptr(10,20));
    
    return 0;
}