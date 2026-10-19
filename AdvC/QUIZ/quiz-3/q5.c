#include <stdio.h>

int main ()
{
    int i;
    char a[5] = {0,2,3,4,5};
    for(i=4;a[i--];)
    {
        a[i] = '0' + 1;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(a+i));
        
    }
    return 0;
}