#include <stdio.h>
#include <string.h>

bool validAnagram(char *s, char *t)
{
    int length_s = strlen(s);
    int length_t = strlen(t);
    if(length_s != length_t)
        return false;
    // for(int i=0; i < length_s - 1; i++)
    // {
    //     for(int j = i + 1; j < length_s; j++)
    //     {
    //         if(s[i] > s[j])
    //         {
    //             int temp = s[i];
    //             s[i] = s[j];
    //          s[j] = temp;
    //         }
    //     }
        
    // }
    // for(int i=0; i < length_t - 1; i++)
    // {
    //     for(int j = i + 1; j < length_t; j++)
    //     {
    //         if(t[i] > t[j])
    //         {
    //             int temp = t[i];
    //             t[i] = t[j];
    //          t[j] = temp;
    //         }
    //     }
        
    // }
    
    // // printf("%s\n",s);
    // // printf("%s\n",t);
    
    // int result = strcmp(s,t);
    // if(result == 0)
    //     return true;
    // else
    //     return false;
    //THIS IS BUBBLE SORTING METHOD IT IS ALSO WORKING BUT IT HAS EXCEED TIME LIMIT BECOZ OF THE TIME COMPLEXITY IS BIG 0 (N SQUARE) ITS COME SOO BELOW METHOG IS BIG 0(N) IT SOLVES THAT TIME EXCEED CASE.
    int count[26] ={0};
    for(int i=0;i<length_s;i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i] != 0)
            return false;
    }
    return true;

}
int main ()
{
    char s[10];
    char t[10];
    scanf("%s",s);
    scanf("%s",t);
    validAnagram(s,t);
    int ans = validAnagram(s,t);
    if(ans)
    {
        printf("Given two string are Anagram\n");
        
    }
    else
    {
        printf("Given two string are not Anagram\n");

    }
    return 0;
}