#include <stdio.h>

int main()
{
    char str[50];
    int age = 22;

    sprintf(str, "Age = %d", age);

    printf("%s\n", str);

    return 0;
}