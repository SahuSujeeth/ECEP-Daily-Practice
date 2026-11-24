#include <stdio.h>
#include <string.h>
void search(char *s, char *p)
{
    int s_len = strlen(s);
    int p_len = strlen(p);
    for(int i=0; i <= s_len - p_len; i++)
    {
        int j;
        int a = i;
        for(j=0;j<p_len;j++)
        {
            if(s[a] != p[j])
                break;
            a++;
        }
        if(j == p_len)
        {
            printf("Pattern found at %d \n",i);
            
        }
    }
}
int main ()
{
    char str1[] = "ABCCABC";
    char str2[] = "ABC";
    // char str1[] = "SahusujeethSahu";
    // char str2[] = "Sahu";
    search(str1,str2);
    return 0;
}