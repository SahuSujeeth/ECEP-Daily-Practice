#include <stdio.h>
int g = 5;
void abc(int i)
{
    int g = 10;
    g *= i + 10;
    printf("%d\n",g);
}
void xyz(int i )
{
    g = 8; 
    g *= i + 10;
    printf("%d\n",g);
    
}
int main ()
{
    int k = 2;
    printf("%d\n",g);
    abc(k);
    xyz(k);
    printf("%d\n",g);
    return 0;
}