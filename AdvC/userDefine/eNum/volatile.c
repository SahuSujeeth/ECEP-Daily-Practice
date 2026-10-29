#include <stdio.h>

int main ()
{
    int i=0;
    for ( i = 0; i < 0xFFFFFFF; i++);
    printf("%d\n",i);
    
    printf("Hello\n");
    
    
    return 0;
}
// OPTIMIZATION LEVELS ARE:
//  -03 = Highly optimizations
