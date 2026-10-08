#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    num = (rand() % 100) + 1;

    printf("Random number = %d\n", num);

    return 0;
}