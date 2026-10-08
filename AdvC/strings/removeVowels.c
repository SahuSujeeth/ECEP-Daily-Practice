#include <stdio.h>
int removeVowels(char str[])
{
    int i=0;
    int vowelCount = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    int length = i;
    printf("%d\n",i);
    
    for(int i=0;i<length-1;i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            //i++;
           // printf("%d\n",i);
            
            continue;
        }
        else
        {
           
            int temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
            vowelCount++;
            

        }
        
    }
    return vowelCount;
}
int main ()
{
    char str[]= "hello";
    int res = removeVowels(str);
    //printf("%d\n",res);
    for(int i=0;i<res;i++)
    {
        printf("%c",str[i]);
        
    }
    

    return 0;
}