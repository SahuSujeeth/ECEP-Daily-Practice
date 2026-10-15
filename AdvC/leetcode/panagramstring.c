#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pangram(char s[], int l)
{
    int count[26] = {0};
    for(int i=0;i<l;i++)
    {
        char ch = tolower((unsigned char)s[i]);
        if(ch >= 'a' && ch <= 'z')
            count[ch - 'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i] == 0)
        {
            printf("%d\n",i);
            
            return 0;
        }
            
    }
    return 1;
    
}

int main()
{
    char s[60];
    printf("Enter the string: ");
    scanf("%[^\n]",s);
    int length = strlen(s);
    int res = pangram(s,length);
    if(res)
    {
        printf("The Entered String is a Panagram String");
    }
    else
    {
        
        printf("The Entered String is not a Panagram String");
    }
    return 0;
    
}