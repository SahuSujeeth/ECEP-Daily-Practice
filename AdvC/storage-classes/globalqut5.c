#include <stdio.h>
void abc(int i)
{
    int g = 10;
    g += i;
    printf("%d\n",g);
    
}
int g = 5;
int main ()
{
    g = 6;
    abc(g);
    printf("%d\n",g);
    
    return 0;
}