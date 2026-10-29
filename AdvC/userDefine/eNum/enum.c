#include <stdio.h>
#define e_true 1
#define e_false 0
enum name // Bye
{
    // e_true = 1, 
    // e_false = 0
    zero,one,two,three,four = 10,five,six = -10,seven
};
int main ()
{
    printf("%d %d %d %d %d\n",one,three,five,six,seven);
    printf("%d %d\n",e_true,e_false);
    printf("%d\n",sizeof(one));// One enum is size of is 4 byte as interger, it is not depend how many members are their in the enum.
    
    
    return 0;
}