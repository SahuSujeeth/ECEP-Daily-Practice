#include <stdio.h>
void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize -1;
    while(left < right)
    {
        int temp = left[s];
        left[s] = right [s];
        right[s] = temp;
        left++;
        right--;
    }
}


int main ()
{
    int sSize;
    printf("Enter the size of the string: ");
    scanf("%d",&sSize);
    char s[sSize];
    scanf("%s",s);
    reverseString(s,sSize);
    printf("%s\n",s);
    return 0;
}