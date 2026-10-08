#include <stdio.h>
#include<stdlib.h>

int main ()
{
   // int *ptr = malloc(4); //int num;
    char *ptr = malloc(4); //char arr[4];
    if(ptr == NULL)
    {
        return 0;
    }
    // *ptr = 10;
    // printf("%d\n",*ptr);
    // scanf("%d",ptr);
    // printf("%d\n",*ptr);
    for(int i=0;i<4;i++)
    {
        scanf("%c\n",&ptr[i]);
        
    }
    for(int i=0;i<4;i++)
    {
        printf("%c ",ptr[i]);
        
    }
    return 0;
}