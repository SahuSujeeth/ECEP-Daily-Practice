#include <stdio.h>
#include<stdlib.h>

int main ()
{
    char *ptr = malloc(10); // char name[10]
    scanf("%s",ptr);
    printf("%s\n",ptr);
    free(ptr);
    return 0;
}