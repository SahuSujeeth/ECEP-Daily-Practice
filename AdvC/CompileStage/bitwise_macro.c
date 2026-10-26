#include <stdio.h>
#define SET_BIT(num, n) num | (1 << n)
int main ()
{
    int res = SET_BIT(10,2);
    printf("%d\n",res);
    
    return 0;
}
// SET_BIT (num,n) num / (1 << n)
// SET_BIT (10,3)
//Replace like 10 | (1 << 3)