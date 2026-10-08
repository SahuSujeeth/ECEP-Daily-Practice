#include <stdio.h>

int is_xdigit(char ch)
{
    if(ch >= 48 && ch <= 57 || ch >= 65 && ch <= 70 || ch >= 97 && ch <= 102)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    short ret;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);
    if(ret)
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
        
    }
    /* Based on the return value of the function print the message */
    
    
    return 0;
}

