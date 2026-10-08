#include <stdio.h>
#include<stdlib.h>

int main ()
{
    int *ptr = malloc(20);



    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);  
    }
    //sum of the array
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + ptr[i];
    }

    //average
    float avg = sum / 5.0;
    printf("sum = %d avg = %g\n",sum,avg);
    
    
    return 0;
}