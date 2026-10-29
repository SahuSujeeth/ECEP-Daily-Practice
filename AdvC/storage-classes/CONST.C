#include <stdio.h>

int main ()
{
    const int num = 10;
    int *ptr = &num;
   // num = 20;
    printf("%d\n",num);
    
    /*
        wwe cannot modify this this will compiler time error
    */
    return 0;
}