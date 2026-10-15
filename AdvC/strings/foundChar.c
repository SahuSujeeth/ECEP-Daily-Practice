#include <stdio.h>
#include <string.h>
char *foundChar(char s[], char ch)
{
    char *result = strchr(s,ch);
    return result;
}
int main ()
{
    char s[50];
    char ch;

    printf("Enter the string : ");
    scanf("%[^\n]",s);
    printf("Enter the character: ");
    scanf(" %c",&ch);
    char *ans = foundChar(s,ch);
    int i = 0;
    while(ans[i] != ' ')
    {
        printf("%c",ans[i]);
        i++;
        
    }
    

    
    
    
    return 0;
}