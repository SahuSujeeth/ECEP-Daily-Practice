#include <stdio.h>
void print(int *num)
{
    printf("%d\n",*num);
    
}
void main ()
{
    int i = 50;
    print(++i);
    //return 0;
}