#include <stdio.h>
// #define SWAP(t,n1,n2) temp = n1; n1 = n2; n2 = temp; 
#define SWAP(t,n1,n2) \
t temp = n1; \
n1 = n2; \
n2 = temp; 

int main ()
{
    float n1 = 10.4, n2 = 20.0;
    
    SWAP(float,n1,n2);
    printf("x = %f y= %f\n",n1, n2);
    
    
    
    
    return 0;
}