#include <stdio.h>

int main ()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("Number is Zero\n");
    }
    else if(num > 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Nubmer is Negative\n");
        
    }
    
    
    return 0;
}