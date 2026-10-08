#include <stdio.h>
int evenorOdd(int num, int mask)
{
     num = num & mask;
     return num;
}
int main ()
{
    int num ,mask = 1;
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(evenorOdd(num,1))
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}