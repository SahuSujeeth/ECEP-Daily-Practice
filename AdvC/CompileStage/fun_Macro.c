#include <stdio.h>
#define ADD(n1,n2) n1+n2
#define SQR(x) x * x
int main ()
{
    int num1 = 10, num2 = 20;
    int i=1;
    printf("%d\n",ADD(num1,num2));//// what argument u passing that will only replace at prepocess stage not by the value
    printf("%d\n",ADD(3,5));
    printf("%d\n",SQR(i++));
    
    return 0;
}
// what is the process name of function.
// 