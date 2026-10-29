#include <stdio.h>
#include <stdarg.h>
int fun(int n, ...)
{
    va_list ap;
    va_start(ap,n);
    printf("%d\n",va_arg(ap, int));
    printf("%s\n",va_arg(ap, char *));
    printf("%f\n",va_arg(ap, float));
    va_end(ap);
}
int add (int n, ...)
{
    int sum =0;
    va_list ap;
    va_start(ap,n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + va_arg(ap,int);
    }
    va_end(ap);
    return sum;
    
}
int main ()
{
    printf("sum = %d\n",add(5,10,20,30,40,50));
    
    return 0;
}