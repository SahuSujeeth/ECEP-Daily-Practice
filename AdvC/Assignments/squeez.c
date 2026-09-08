#include <stdio.h>

void  squeeze(char str1[], char str2[])
{
    int i=0;
    while(str1[i] != '\0')
    {
        int j=0;
        while(str2[j] != '\0')
        {
            if(str1[i] == str2[j])
            {
                str1[i] = str1[i+1];
                if(str1[i+1] == ' ')
                {
                    str1[i] = str1[i+2];
                }
                break;
            }
            
                j++;

        }
        i++;
    }

    printf("%s\n",str1);
    
    
}

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    

    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}