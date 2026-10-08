#include <stdio.h>

int main(){
    int x = 10;
    register int *i = &x;
    printf("%d\n",*i);//this is fine 
    printf("%p\n",i);//this is also fine u might thinking that this is also address how u can access see this is the address of x is stored in register not address of the ptr .
    
    //int *ptr = &i;//this will give a error because it requesting the address of i which was address of the register variable not be accessed.

    return 0;
}