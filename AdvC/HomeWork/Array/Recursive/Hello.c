#include <stdio.h>
void display(int a)
{
    if(a<=5)
    {
        printf("Hello World!\n");
        display(a+1);        
    }
    else
    {
        return ;
    }
}
int main ()
{
    display(1);
    return 0;
}