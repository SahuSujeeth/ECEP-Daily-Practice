#include <stdio.h>
int fun(int *ptr)
{
    *ptr = 50;
    //printf("After changing the value of N is %d\n",*ptr);
    return *ptr;
  
}

int main ()
{
    int N = 10;
    printf("Before change the value of N is %d\n",N);
    int x = fun(&N);
    printf("Before change the value of N is %d\n",x);

    return 0;
}