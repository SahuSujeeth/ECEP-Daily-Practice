#include <stdio.h>

int main ()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i > 06)
        {
            printf("%d ",i);
            break;
        }
        printf("A\n");
        
    }
    return 0;
}