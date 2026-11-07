#include <stdio.h>

int main ()
{
    int i = 1;
    goto label;
    // printf("Hello\n");
    // for(int i = 0; i<3;i++)
    // {
    //     printf("%d\n",i);
    //     label:
    //     printf("World\n");
        
    // }
    while(i)
    {
        switch(i)
        {
            case 1:
            label :
                printf("%d\n",i);
                
        }
    }
    
        

    
    return 0;
}