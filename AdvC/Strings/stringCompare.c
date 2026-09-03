 #include <stdio.h>
 #include <string.h>
 int mystrcmp(char s[], char s1[])
 {
    int i=0;
    while(s[i] && s1[i])
    {
        if(s[i] != s1[i])
        {
            break;
        }
        i++;
    }
    return s[i] - s1[i];
 }
 int main ()
 {
    char s[] = "sahu";
    char s1[] = "sand";
    
    printf("%d\n",mystrcmp(s,s1));
    
   // printf("%d\n",strcmp(s,s1));
    //printf("%d %d\n",'h','n');
    
    
    return 0;
 }