#include <stdio.h>

void combination(char [], int, int);
int my_strlen(char []);

int main()
{
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    n = my_strlen(str);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                printf("Error: please enter distinct characters.\n");
                return 0;
            }
        }
    }

    printf("All possible combinations of given string:\n");
    combination(str, 0, n - 1);

    return 0;
}

int my_strlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

void combination(char str[], int start, int end)
{
    if (start == end)
    {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        char temp = str[start];
        str[start] = str[i];
        str[i] = temp;

        combination(str, start + 1, end);

        temp = str[start];
        str[start] = str[i];
        str[i] = temp;
    }
}