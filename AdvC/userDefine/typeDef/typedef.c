#include <stdio.h>
typedef float data;
#define int_ptr int*
typedef int* ptr;
typedef char string[100];//When i use somewhere like string it is consider as the char array of 100 size
int main ()
{
    ptr ptr1,ptr2;// This typedef but it is taken both as the pointer right
   // int_ptr ptr1,ptr2; //For MACRO It is taken like This is like int *ptr1,ptr2 ptr1 is pointer and ptr2 is normal variable
    int num1 = 10, num2 = 20;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("%d %d\n",*ptr1,*ptr2);
    data n3 = 10, n4;
    data sum;
    data avg;
    printf("%f\n",n3);

    //char string
    string str = {"hello"};
    printf("%zu\n",sizeof(str));
    

    return 0;
}