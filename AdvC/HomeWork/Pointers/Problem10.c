#include <stdio.h>
int fun(float *ptr)
{
    *ptr = 25.5;
   // printf("After changing the value of N is %d\n",*ptr);
    return *ptr;
  
}

int main ()
{
    float N = 10.5;
    printf("Before change the value of N is %f\n",N);
    int x = fun(&N);
    printf("Before change the value of N is %f\n",N);
    printf("Before change the value of N is %d\n",x);

    return 0;
}