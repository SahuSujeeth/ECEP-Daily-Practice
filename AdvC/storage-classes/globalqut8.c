#include <stdio.h>
void abc(int i)
{
    int g = 10;
    g += i;
    printf("%d\n",g);
    
}
// this will give linking error becoz here prototype of global is available
// but its defintion is not available after the main function so their is no physical memory is allocate to global variable g
int main ()
{
    extern int g;
    g = 6;
    abc(g);
    printf("%d\n",g);
    
    return 0;
}
