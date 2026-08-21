#include <stdio.h>
void swap(int *ptr, int *ptr1)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    printf("Value of A: %d\n",*ptr);
    printf("Value of B: %d\n",*ptr1);
    
}

int main ()
{
    int a, b;
    scanf("%d %d",&a, &b);
    swap(&a,&b);


    
    return 0;
}