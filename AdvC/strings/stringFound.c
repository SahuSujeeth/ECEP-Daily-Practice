#include<stdio.h>
#include<string.h>
char *foundString(char s[], char s1[])
{
    char *result = strstr(s,s1);
    return result;
}
int main()
{
    char s[50];
    char s1[10];
    printf("Enter the main string : ");
    scanf("%[^\n]",s);
    printf("Enter the sub string : ");
    scanf(" %s",s1);
    char *ans = foundString(s,s1);
    if(ans == NULL)
        printf("sub string is not found");
    else
    {
        int i=0;
        while(ans[i] != '\0')
        {
            printf("%c",ans[i]);
            i++;
        
        }   
    }
    
    return 0;
}