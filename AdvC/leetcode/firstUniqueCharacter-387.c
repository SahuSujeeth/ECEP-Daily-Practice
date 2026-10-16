#include <stdio.h>
#include <string.h>
#include <ctype.h>

int firstUniqChar(char* s) {
    int stringLength = strlen(s);
    int a[26] = {0};
    for(int i=0;i<stringLength;i++)
    {
        a[s[i] - 'a']++;
    }
    for(int i=0;i<stringLength;i++)
    {
        if(a[s[i]-'a'] == 1)
            return i;
    }
    return -1;
}

int main()
{
    char s[60];
    printf("Enter the string: ");
    scanf("%[^\n]",s);
    int length = strlen(s);
    int res = firstUniqChar(s);
    printf("%d\n",res);
    
    return 0;
    
}