//Write a C program to declare an integer variable, store its address in an integer pointer, and print the value using the pointer.
#include <stdio.h>
void fun(int *ptr)
{
  printf("Value of N using the pointer is %d\n",*ptr);
}

int main ()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    fun(&N);

    // int *ptr;
    // ptr = &N;
    // printf("Value of N using the pointer is %d\n",*ptr);
    return 0;
}