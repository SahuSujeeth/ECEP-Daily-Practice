#include <stdio.h>
#include <string.h>

int main ()
{
    char str[50] = "Sahu ";
    char str1[50] = "Sujeeth";
    //str = "Sahu";
    //strcat(str,str1);
    printf("%s\n",strcat(str,str1));
    
    return 0;
}