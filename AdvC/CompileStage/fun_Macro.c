#include <stdio.h>
#define ADD(n1,n2) n1+n2
int main ()
{
    int num1 = 10, num2 = 20;
    printf("%d\n",ADD(num1,num1));//// what argument u passing that will only replace at prepocess stage not by the value
    printf("%d\n",ADD(3,5));
    
    return 0;
}
// what is the process name of function.
// 