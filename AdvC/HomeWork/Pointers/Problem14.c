#include <stdio.h>
void sumFloat(float *ptr, float *ptr1)
{
    float sum = *ptr + *ptr1;
    printf("Sum of float is %f\n",sum);
    
}

int main ()
{
    float a,b;
    scanf("%f %f",&a,&b);
    sumFloat(&a,&b);
    
    return 0;
}