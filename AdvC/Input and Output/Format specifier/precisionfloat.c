#include <stdio.h>

int main()
{
    double x = 1.345;
    printf("%.2f\n", x);
    printf("%5.2f\n", x);
    printf("%*.*f\n", 5, 2, x);
    printf("%0*.*f\n", 5, 2, x);
    printf("%-5.2f\n", x);
    return 0;
} 