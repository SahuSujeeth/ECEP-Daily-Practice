#include <stdio.h>
#include<string.h>
int palindrome(char str[])
{
    int length = strlen(str);
    int is_palindrome = 1;
    int i=0;
    while(i < length/2)
    {
        if(str[i] != str[length-i-1])
        {
           is_palindrome = 0;
           break;
        }
        i++;
    }
    return is_palindrome;
}
int main ()
{
    char str[10];
    printf("Enter the string: ");
    scanf("%s",str);
    if(palindrome(str))
    {
        printf("String is palindrome\n");
        
    }
    else
    {
        printf("string is not palindrome\n");
        
    }
    
    
    return 0;
}