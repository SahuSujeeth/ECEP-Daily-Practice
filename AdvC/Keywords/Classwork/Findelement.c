#include <stdio.h>

int main ()
{
    int moments[5]={1,2,3,4,5};
    int value;
    printf("Enter the value what you want to find:");
    scanf("%d",&value);
    int i;
    for(i=0;i<5;i++)
    {
        if(value == moments[i])
        {
            break;
        }
    }
    if(i<5)
    {
        printf("value found in the array\n");
    }
    else{
        printf("value not found in the array\n");

    }

    
    
    return 0;
}