#include <stdio.h>
void fun(double *ptr)
{
  printf("Value of N using the pointer is %lf\n",*ptr);
  printf("Value of N using the pointer is %p\n",ptr);
}

int main ()
{
    double N;
    printf("Enter the value of N: ");
    scanf("%lf",&N);

    fun(&N);

    // double *ptr;
    // ptr = &N;
    // printf("Value of N using the pointer is %f\n",*ptr);
    return 0;
}