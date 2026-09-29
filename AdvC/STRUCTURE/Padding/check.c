#include <stdio.h>
struct student
{
    int i;
    int  j;
    char ch;
    char ch2;
    short s;
};
int main ()
{
    struct student s1;
    printf("%zu\n",sizeof(s1));
    
    
    
    return 0;
}