#include <stdio.h>

enum name
{
    even, odd
};
enum name odd_even(int);
int main ()
{
    int num = 16;
    int res = odd_even(num);
    if(res == even)
        printf("Even\n");
    else
        printf("Odd\n");  
    return 0;
}
enum name odd_even(int num)
{
    if(num % 2 == 0)
        return even;
    else
        return odd;
}