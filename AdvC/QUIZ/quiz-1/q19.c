#include <stdio.h>

int main ()
{
    int x = 10;
    int *a = &x;
    switch(x)
    {
        case 10 :
           printf("1-10\n");
        break;
        case 20:
           printf("2-10\n");
           break;
        default:
        printf("Oops C!!!\n");
        break;
        
           
            
    }
    return 0;
}