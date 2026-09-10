#include <stdio.h>
#include <string.h>
void combinestr(char *str1, const char *str2)
{
    strcat(str1,str2);
    printf("%s\n",str1);
    
}

int main ()
{
    char str1[50] = "Hello";
    char str2[10] = " World";
    combinestr(str1,str2);
    return 0;
}