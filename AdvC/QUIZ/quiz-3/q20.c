#include <stdio.h>

int main ()
{
    int x=10,i=0;
    while(i<10)
    {
        switch(i)
        {
            case 0 ... 9:
            if(i==5)
            {
                break;
            }
            printf("%d\n",i);
            break;
            default:
            printf("Oops C!!1\n");
            
            
        }
        i++;
    }
    return 0;
}