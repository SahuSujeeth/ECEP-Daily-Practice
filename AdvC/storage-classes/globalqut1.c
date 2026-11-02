#include <stdio.h>
int a = 10;
int main ()
{
    int a = 20;// if their is any name conflict between local and global , then the compiler gives preference to local variable only.
    printf("%d\n",a);
    
    return 0;
}