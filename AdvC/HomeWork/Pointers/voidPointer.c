#include <stdio.h>
void swap(void *p1, void *p2, int size)
{
    for(int i=0;i<size;i++)
    {
      char temp = (*(char *)(p1+i))
      (*(char *)(p1+i)) = (*(char *)(p2+i))
      (*(char *)(p2+i)) = temp;


    }
}
int main ()
{
    int a = 10, b= 20;
    swap(&a,&b,sizeof(a));
    printf("%d %d\n",a,b);
    
    return 0;
}