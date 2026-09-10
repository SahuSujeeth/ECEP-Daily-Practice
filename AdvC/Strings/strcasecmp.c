#include <stdio.h>
#include<string.h>

int compare(const char *str, const char *str1)
{
 int result = strcasecmp(str,str1);
 return result; 
}

int main ()
{
    char *str = "Hello Sahu";
    char *str1 = "Hello SAHU";
    int ret = compare(str,str1);
    if(ret > 0)
    {
        printf("String 1 is greater\n");
        
    }
    else if(ret < 0)
    {
        printf("String 2 is greater\n");

    }
    else
    {
     printf("Both strings are equal\n");
    }
    
    return 0;
}