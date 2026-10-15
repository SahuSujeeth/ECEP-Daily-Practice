#include <stdio.h>
int main ()
{
    int d;
    printf("Enter how may disnict char: ");
    scanf("%d",&d);
    char disnict[d];
    for(int i=0;i<d;i++)
    {
        scanf(" %c",&disnict[i]);
    }
    int length;
    printf("Enter the length of the string : ");
    scanf("%d",&length);
    char newString[length+1];
    for(int i=0;i<length;i++)
    {
        if(i<d)
        {
            newString[i] = disnict[i];
        }
        else
        {
            if(i >= 2 * d - 1)
                newString[i] = newString[i-(2*d)+1];
            else
                newString[i] = newString[i-d+1];
        }
    }
    newString[length+1] = '\0';
    printf("%s\n",newString);
    
    
    
    

    return 0;
}