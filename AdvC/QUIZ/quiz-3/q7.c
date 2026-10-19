#include <stdio.h>

int main ()
{
    int y[4] = {76.5,73.0,68.4,65.6};
    int *x = y;
    int i=3;
    do
    {
        printf("%c",x[i]);
        
    }while(i--);
    return 0;
}