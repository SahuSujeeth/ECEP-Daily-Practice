#include <stdio.h>
#include <string.h>

int main ()
{
    char s[] = "1000";
    int len = strlen(s) - 1;
    int base = 1;
    int ans = 0;
    for(int i = len;i>=0;i--)
    {
        int convert = s[i] - 48;
        ans = ans + (convert * base);
        base = base * 2;
    }
    printf("%d\n",ans);
    
    return 0;
}