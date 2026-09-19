#include <stdio.h>

int main()
{
    FILE *fp;
    int age;

   // fp = fopen("data.txt", "r");

    fscanf(stdin, "%d", &age); // Syntax is fscanf(stream, "format", &variable);

    printf("Age = %d\n", age);
    //fclose(fp);

    return 0;
}