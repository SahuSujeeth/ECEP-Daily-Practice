#include <stdio.h>

int main()
{
    char str[] = "23 10";
    int age, marks;
    

    int result = sscanf(str, "%d %d", &age, &marks);

    printf("age = %d\n", age);
    printf("marks = %d\n", marks);
    printf("return value = %d\n", result);

    return 0;
}
// it is only reads string which are in stored memory can't read from different streams like stdin or file like that.