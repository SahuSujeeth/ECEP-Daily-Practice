#include <stdio.h>
#include<string.h>

int main ()
{
    char *str1 = "hello how are you";
    char ch = 'a';
    char *ret = strchr(str1,ch);
    if(ret != NULL)
    {
        printf("ret=%s\n",ret);  
    }
    else
    {
        printf("Not found");  

    }

    return 0;
}