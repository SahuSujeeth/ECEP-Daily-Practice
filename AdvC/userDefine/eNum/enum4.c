#include <stdio.h>

int main ()
{
    int i=0,bit = 0;
    while(1)
    {
        printf("%d\r",bit);
        bit = !bit;
        for(i=0;i<0xFFFFFFF;i++);
        
    }
    return 0;
}