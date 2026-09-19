#include <stdio.h>

int main ()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1; j<=num;j++)
        {
            if(i==j || i+j==num+1)
            {
                printf("* ");
            } 
            else
            {
                printf("  ");
                
            }
        }
        printf("\n");
        
    }
    return 0;
}