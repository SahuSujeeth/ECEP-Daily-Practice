#include <stdio.h>
int fun(int a)
{
    if(a==4)
     return a;
    else
     return a * fun(a+1);
}
int main ()
{

    printf("%d\n",fun(2));
    
    return 0;
}