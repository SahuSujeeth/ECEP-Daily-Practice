#include <stdio.h>
#include <string.h>

int main ()
{
    char str[5];
    //str = "Sahu";
    strncpy(str,"SahuSujeeth",5);
    str[4]='\0';
    printf("%s\n",str);
    
    return 0;
}