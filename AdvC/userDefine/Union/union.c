#include <stdio.h>
union Endian
{
    int num;
    char arr[4];
};

int main ()
{
    union Endian u;
    u.num = 0x12345678;
    if(u.arr[0] == 0x78)
    {
        printf("This system is Little Endian\n");
        
    }
    else
    {
        printf("This system is Big Endian\n");
        
    }
    
    return 0;
}