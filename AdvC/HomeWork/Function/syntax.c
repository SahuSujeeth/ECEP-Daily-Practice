#include <stdio.h>
void print(int n)
{

    printf("%d\n",n);
}
int main ()
{
    int n = 5;
    n++;
    print(n);
    printf("%d\n",n);
    
    return 0;
}