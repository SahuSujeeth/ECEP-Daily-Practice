#include <stdio.h>

int main ()
{
    int power_of_ten[2] = {0001, 0010, 0100, 1000};
    for(int i=0;i<4;i++)
    {
        printf("%d ",power_of_ten[i]);
        
    }
    
    return 0;
}