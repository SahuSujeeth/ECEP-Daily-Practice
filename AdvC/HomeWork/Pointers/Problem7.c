#include <stdio.h>
void fun(char *ptr)
{
  printf("Value of N using the pointer is %c\n",*ptr);
  printf("Value of N using the pointer is %p\n",ptr);
}

int main ()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    
    fun(&ch);
    
    // char *ptr;
    // ptr = &N;
    // printf("Value of N using the pointer is %c\n",*ptr);
    // printf("Value of N using the pointer is %p\n",ptr);
    return 0;
}