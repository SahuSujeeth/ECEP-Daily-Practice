#include <stdio.h>

int main ()
{
    int num = 10;
    int n = 3;
    int mask = 1;
    int result = num & (1 << n);
    if(result != 0)
    {
        printf("1\n");
        
    }    
    else
    {
        printf("0\n");
        
    }
    
    return 0;
}