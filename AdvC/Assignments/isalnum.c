#include <stdio.h>
#include <ctype.h>
// int isalnum(char ch)
// {
//     return char;
// }
int main ()
{
    char ch;
    scanf("%c",&ch);
    int res = isalnum(ch);
    printf("%d\n",res);
    return 0;
}