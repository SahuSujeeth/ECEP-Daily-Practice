#include <stdio.h>

int main()
{
    FILE *fp;
    int age = 22;

    fp = fopen("data.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "Age = %d\n", age);

    fclose(fp);

    return 0;
}