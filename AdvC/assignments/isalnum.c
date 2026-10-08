#include <stdio.h>
#include <ctype.h>

char my_isalnum(char ch)
{
    if(ch >= '0' && ch <= '9' || ch>='a' && ch <= 'z' || ch>='A' && ch<='Z')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:\n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
        
    */
    if (ret == 1)
    {
        printf("Entered character is alphanumeric character ");
    }
    else
    {
        printf("Entered character is not alphanumeric character");
        
    }
    return 0;
}
