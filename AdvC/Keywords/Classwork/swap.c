#include<stdio.h>
int main()
{
    int a=10, b=20, temp;
    //int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n",a,b);
}