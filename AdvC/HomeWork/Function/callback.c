#include <stdio.h>
int add(int n1, int n2)
{
    return n1 + n2;
}
int main ()
{
    int (*fptr)(int, int);
    fptr = add;
    printf("%p\n",add);// This line and below line both are same will give same address only
    printf("%p\n",fptr);// ""
    printf("%p\n",&fptr);
    printf("%d\n",fptr(2,4)); // this line and below line both are same will give same value only
    printf("%d\n",(*fptr)(2,4)); // ""
    
    return 0;
}