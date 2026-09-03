#include <stdio.h>

int getword(char str[])
{
    int i = 0;
    
    while(str[i] != ' ' && str[i] != '\0')
    {
        i++;
    }

    str[i] = '\0';

    return i;
}

int main()
{
    int len = 0;
    char str[100];

    printf("Enter the string : ");
    scanf(" %[^\n]", str);

    len = getword(str);

    printf("You entered %s and the length is %d\n", str, len);

    return 0;
}