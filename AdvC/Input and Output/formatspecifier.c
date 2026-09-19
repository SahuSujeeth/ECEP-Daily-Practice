#include <stdio.h>

int main ()
{
    int x = 10;
    printf("%d\n",x);
    long y = 20;
    printf("%ld\n",y);
    unsigned z = 30;
    printf("%u\n",z);
    long long w = 40;
    printf("%lld\n",w);
    size_t u = sizeof(x);
    printf("%zd\n",u);
    int s = 10;
    printf("%x\n",s);
    int S = 130;
    printf("%o\n",S);
    

    
    return 0;
}