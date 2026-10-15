
#include <stdio.h>
#include <string.h>

void reverse(char s[], int start, int end)
{
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int length = strlen(str);

    reverse(str, 0, length - 1);

    int start = 0;

    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed string: %s\n", str); 

    return 0;
}
