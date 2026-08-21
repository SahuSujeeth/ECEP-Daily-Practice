//Write a C program to change the value of a character variable from 'A' to 'Z' using a pointer.
#include <stdio.h>
void fun(char *ptr)
{
    *ptr = 'Z';
}

int main ()
{
    char ch = 'A';
    printf("Before chaning the character is %c\n",ch);
    fun(&ch);
    printf("After chaning the character is %c\n",ch);
    
    return 0;
}