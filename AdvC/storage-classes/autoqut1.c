#include <stdio.h>
int a = 10;
void abc(int i)
{
    a *= i+5;
    printf("%d\n",a);
    
}
int main ()
{
    int k = 20;
    abc(k);
    abc(k);
    abc(k);
    printf("%d\n",k);
    
    return 0;
}