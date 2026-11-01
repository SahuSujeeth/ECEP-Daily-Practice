#include <stdio.h>
int incr(int i)
{
    static int count = 0;
    count = count + i;
    return count;
}
int main ()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        j = incr(i);
    }
    printf("%d\n",j);
    
    return 0;
}