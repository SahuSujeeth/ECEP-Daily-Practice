#include <stdio.h>

int my_ispunct(char ch)
{
    if(ch >= 33 && ch <= 47 ||  ch >= 58 && ch <= 64)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    if(ret)
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
        
    }
    
}