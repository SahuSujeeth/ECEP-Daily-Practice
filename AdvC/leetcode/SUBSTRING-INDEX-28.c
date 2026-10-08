#include<stdio.h>
#include<string.h>
int strStr(char *haystack, char *needle)
{
    int haystack_length = strlen(haystack);
    int needle_length = strlen(needle);
    //printf("length of the first string : %d\n",haystack_length);
    //printf("length of the first string : %d\n",needle_length);
    for(int i = 0; i <= haystack_length - needle_length; i++)
    { 
        int j;
        for(j=0;j<needle_length;j++)
        {
            if(haystack[i+j] != needle[j])
            {
                break;
            }
        }
        if(j == needle_length)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
  char haystack[] = "sadbutsad";
  char needle[] = "sad";
  int res = strStr(haystack,needle);
  printf("Result is %d\n",res);
  
}