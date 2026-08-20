//Write a C program to declare an float variable, store its address in an float pointer, and print the value using the pointer.
#include <stdio.h>
void fun(float *ptr)
{
  printf("Value of N using the pointer is %.2f\n",*ptr);
  printf("Value of N using the pointer is %p\n",ptr);
}

int main ()
{
    float N;
    printf("Enter the value of N: ");
    scanf("%f",&N);

    fun(&N);

    // float *ptr;
    // ptr = &N;
    // printf("Value of N using the pointer is %f\n",*ptr);
    return 0;
}