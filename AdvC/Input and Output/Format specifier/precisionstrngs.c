#include <stdio.h>

int main()
{
    char x[] = "sahusuzeeth";
    printf("%.3s\n", x);
    printf("%5.3s\n", x);
    printf("%*.*s\n", 5, 3, x);
    printf("%-5.3s\n", x);
    return 0;
}