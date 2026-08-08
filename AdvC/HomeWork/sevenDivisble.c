#include <stdio.h>

int main (){
    for(int i=1 ; i <= 100 ; i++)
    {
        if(i % 7 == 0)
        {
            printf("%d\n",i);
            break;
            
        }
        //printf("Hello\n");
        
    }
    return 0;
}