#include <stdio.h>
#include<limits.h>

int main ()
{
    int n;
    scanf("%d",&n);
    long long reverseNumber = 0;
    while(n != 0) // If i give condition like this then it will work only for the positive values soo that's i need to change the conndition n>0 to n != 0 to this .
    {
        int lastdigit = n % 10;
        reverseNumber = (reverseNumber * 10) + lastdigit;
        if(reverseNumber > INT_MAX || reverseNumber < INT_MIN) // This is main condition becoz if the input is something like this 1534236469 then its reverse was something like this 9646324351 which out of bound for the 32 bit so that we have to use this condition for  better result. 
        return 0;
        n = n / 10;
    }
    printf("reverse is %d\n",(int)reverseNumber);
    
    
    return 0;
}