#include <stdio.h>

void reverse_iterative(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    int stringLength = i;
    i=0;
    while(i < stringLength/2)
    {
        char temp = str[i];
        str[i] = str[stringLength-i-1];
        str[stringLength-i-1] = temp;
        i++;
    }
}

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
    return 0;
}