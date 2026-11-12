#include <stdio.h>
void vowelornot(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'o'|| ch == 'i' || ch == 'u')
    {
        printf("Character is vowel\n");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'O'|| ch == 'I' || ch == 'U')
    {
        printf("Character is vowel\n");
    }
    else
    {
        printf("Not a vowel\n");
    }
}
int main ()
{
    char ch;
    scanf("%c",&ch);
    vowelornot(ch);

    
    
    return 0;
}