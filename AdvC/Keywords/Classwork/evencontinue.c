#include <stdio.h>

int main (){
    for(int i = 1; i <= 10; i++) 
    {
        if(i % 2 == 1)
        {
            continue;
           // break;
        }
        printf("%d ",i);
    }
    return 0;
}