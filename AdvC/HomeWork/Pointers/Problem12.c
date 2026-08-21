#include <stdio.h>
void fun(double *ptr)
{
   *ptr = 30.5;
}

int main ()
{
    double N = 15.5 ;
    printf("Before changing the value of N %lf\n",N);
    fun(&N);
    printf("After changing the value of N %lf\n",N);

    // double *ptr;
    // ptr = &N;
    // printf("Value of N using the pointer is %f\n",*ptr);
    return 0;
}