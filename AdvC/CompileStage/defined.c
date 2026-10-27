#include <stdio.h>
#define PRINT(x) #x 
#define ADD(x,y) x+y
#define MERGE(x,y) x##y
int main ()
{
    printf("%s\n",PRINT(10.32));
    printf("%d\n",ADD(2,3));
    printf("%d\n",MERGE(2,3));
    
    return 0;
}