#include <stdio.h>
void abc(int i)
{
    int g = 10;
    g += i;
    printf("%d\n",g);
    
}
// this program will give error
int main ()
{
    g = 6;
    abc(g);
    printf("%d\n",g);
    
    return 0;
}
int g = 5;