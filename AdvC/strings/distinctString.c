// #include <stdio.h>
// int main ()
// {
//     int d;
//     printf("Enter how may disnict char: ");
//     scanf("%d",&d);
//     char disnict[d];
//     for(int i=0;i<d;i++)
//     {
//         scanf(" %c",&disnict[i]);
//     }
//     int length;
//     printf("Enter the length of the string : ");
//     scanf("%d",&length);
//     char newString[length+1];
//     for(int i=0;i<length;i++)
//     {
//         if(i<d)
//         {
//             newString[i] = disnict[i];
//         }
//         else
//         {
//             if(i >= 2 * d - 1)
//                 newString[i] = newString[i-(2*d)+1];
//             else
//                 newString[i] = newString[i-d+1];
//         }
//     }
//     newString[length+1] = '\0';
//     printf("%s\n",newString);
    
    
    
    

//     return 0;
// }
#include <stdio.h>

int main()
{
    int c, n;

    printf("Enter the number characters C : ");
    scanf("%d", &c);
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);

    if (c <= 0 || n <= 0)
    {
        printf("Error : C and N must be positive\n");
        return 1;
    }

    char chars[c];
    printf("Enter %d distinct characters : ", c);
    for (int i = 0; i < c; i++)
        scanf(" %c", &chars[i]);

    /* check that all characters are distinct */
    for (int i = 0; i < c; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (chars[i] == chars[j])
            {
                printf("Error : Enter distinct characters\n");
                return 1;
            }
        }
    }

    /* with one character, any string longer than 1 repeats it */
    if (c == 1 && n > 1)
    {
        printf("Error : Not possible with only one character\n");
        return 1;
    }

    char s[n + 1];
    for (int i = 0; i < n; i++)
        s[i] = chars[i % c];
    s[n] = '\0';

    printf("Possible NRPS is %s\n", s);
    return 0;
}