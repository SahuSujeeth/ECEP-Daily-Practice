#include <stdio.h>

int main ()
{
    float x[5] = {312.5,140.0,103.5,9.5,50.5};
    float *ptr = &x[0];
    float *ptr2 = ptr+2;
    printf("%f\n",*ptr2);
    
    return 0;
}