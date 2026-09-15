#include <stdio.h>
// static int x = 10;
// extern int x;
// void  fun()
// {
//     printf("%d\n",x);
// }
int main ()
{
    int x ;
    {
        extern int x;
        printf("%d\n",x);
    }
    printf("%d\n",x);

    fun();
    return 0;
}