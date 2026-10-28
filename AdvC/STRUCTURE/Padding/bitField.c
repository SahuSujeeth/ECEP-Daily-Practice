#include <stdio.h>
struct bit
    {
        int n1 : 4;
        int n2 : 4;
        int n3 : 2;
    };
int main ()
{
    struct bit num = {7,2,1};
    printf("%d %d %d\n",num.n1,num.n2,num.n3);
    printf("%d\n",sizeof(num));
    
    struct bit num1 = {15,8,9};
    printf("%d %d %d\n",num1.n1,num1.n2,num1.n3);
    
    
    
    return 0;
}