#include <stdio.h>
void fun(int *ptr)
{
  printf("Value of N using the pointer is %d\n",*ptr);
  printf("Value of N using the pointer is %p\n",ptr);
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
   // printf("Value of N using the pointer is %p\n",ptr);
    return 0;
}