#include <stdio.h>

int main ()
{
    int x=10;
    int *p;
    p = &x;
    printf("Value of x = %d\n",x);
    printf("Address of x = %p\n",&x);//refenecer
    printf("Value store in p = %p\n",p);
    printf("Address of point variable p = %p\n",&p);
    printf("Value using pointer = %d\n",*p); //derefernece
    printf("size of x is  %zu\n",sizeof(x));
    printf("size of pointer is  %zu\n",sizeof(p));
    printf("size of pointer is  %zu\n",sizeof(*p));
    printf("size of pointer is  %zu\n",sizeof(&x));
    
    // int x;
    // int *ptr;
    // x = 5;
    // ptr = 5; //segmantation  fault ... can't be access by the user only access by the OS. If we are try to acces then it will so the segmantation fault.
    return 0;
}