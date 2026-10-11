#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>

bool  isPalindrome(char* s) 
{
    int length = strlen(s);
    char *new = malloc(length+1);
    int index = 0;
    for(int i=0;i<length;i++)
    {
        if(isalnum(s[i]))
        {
            new[index++] = tolower(s[i]);
        }
    }
    new[index] = '\0';
    for(int i=0;i<index/2;i++)
    {
        if(new[i] != new[index-i-1])
        {
            //free(new);
            return false;
        }
    }
    //free(new);
    return true;
    //return new;
    
}

int main ()
{
    char s[30];
    printf("Enter the string:");
    scanf("%[^\n]",s);
    int ans = isPalindrome(s);
    printf("%d\n",ans);
    
    // char *ans = isPalindrome(s);
    // printf("%s\n",ans);
    

    
    
    return 0;
}