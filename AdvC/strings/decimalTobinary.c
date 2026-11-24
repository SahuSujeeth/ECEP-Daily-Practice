#include <stdio.h>
#include <string.h>
void reverse(char *new)
{
    int i = 0;
    int len = strlen(new) - 1;
    while(new[i] != '\0')
    {
        new[i] = new[len];
        i++;
        len--;
    }
    printf("%s\n",new);
    
}
int main ()
{
    int n = 5;
    char ans[100];
    int i = 0;
    while(n > 0)
    {
        int rem = n % 2;
        char num = rem + 48;
        ans[i] = num;
        i++;
        n = n / 2;
    }
    reverse(ans);
    return 0;
}