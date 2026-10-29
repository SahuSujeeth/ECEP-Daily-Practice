#include <stdio.h>
union u
{
    struct bit
    {
        unsigned char lower : 4;
        unsigned char upper : 4;
    } nibble;
    
    unsigned char num;
};

int main ()
{
    union u u1;
    u1.num = 0xab;
    char temp = u1.nibble.lower;
    u1.nibble.lower = u1.nibble.upper;
    u1.nibble.upper = temp;
    printf("%hhx\n",u1.num);
    
    
    return 0;
}