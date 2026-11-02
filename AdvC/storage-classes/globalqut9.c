#include <stdio.h>
extern int g = 5;// throgh is is prototype , as it is initialised it becomes executeabble statement and memory will be allocate
void abc(int i)
{
    int g = 10;
    g += i;
    printf("%d\n",g);
    
}
int main ()
{
    g = 6;
    abc(g);
    printf("%d\n",g);
    
    return 0;
}
