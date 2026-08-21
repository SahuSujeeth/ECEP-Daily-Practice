#include <stdio.h>
void evenOdd(int *ptr)
{
    if(*ptr % 2 == 0)
    {
        printf("%d is EVEN\n",*ptr);   
    }
    else
    {
        printf("%d is ODD\n",*ptr);
    }
}
int main ()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    evenOdd(&num);

    
    
    return 0;
}