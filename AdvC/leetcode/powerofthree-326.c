#include <stdio.h>

int powerofthree(int num)
{
    if (num <= 0)
        return false;
    if(num == 1)
        return true;
    while(num != 1)
    {
        if(num % 3 == 0)
        {
            num = num / 3;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int ans = powerofthree(number);
    
    
    return 0;
}