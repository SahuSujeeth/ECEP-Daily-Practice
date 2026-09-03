#include <stdio.h>
void one2N(int a)
{
    if(a == 0)
     return;
    one2N(a-1);
    printf("%d\n",a);
    
}
int main ()
{
    int n;
    scanf("%d",&n);
    one2N(n);
    printf("done\n");
    
    return 0;
}