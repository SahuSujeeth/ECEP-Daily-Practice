#include <stdio.h>
#include <string.h>

int main ()
{
    char s1[] = "Sahu Suzeeth Sahu";
    char s2[] = "Sahu";
    char *p = strstr(s1,s2);
    if(p == NULL)
    {
        printf("Not found\n");
    }
    while (p)
    {
        printf("%d\n",p-s1);
        p = strstr(p+1,s2);
    }
    
    return 0;
}