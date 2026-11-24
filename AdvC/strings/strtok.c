#include <stdio.h>
#include <string.h>


int main ()
{
    char s[] = "Hello sahu-sujeeth,How are you";
    const char *sep = "- ,";
    char *sep_words = strtok(s,sep);
    while(sep_words != NULL)
    {
        printf("%s\n",sep_words);
        sep_words = strtok(NULL,sep);
    }
    printf("%s\n",s);
    return 0;
}