#include <stdio.h>
void func1(int a);
void func2(int a);
void func3(int a);
int main ()
{
    int a=10;
    func1(a++);
    printf("main %d\n",a);
    
    return 0;
}
void func1(int a)
{
    func2(++a);
    printf("func1 %d\n",a);
    
}
void func2(int a)
{
    func3(a+2);
    printf("func2 %d\n",a);
    
}
void func3(int a)
{

    printf("func3 %d\n",a);
    
}
