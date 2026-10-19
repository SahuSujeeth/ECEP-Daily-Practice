#include <stdio.h>
bool isPoweroftwo(int n)
{
    if(n <= 0)
        return false;
    if (n == 1)
        return true;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2; 
        }
        else
        {
            return false;
        }
    }
    return true;
    // return n > 0 && (n & (n - 1)) == 0; // In one line only using bitwise operator 
}


int main ()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    int ans = isPoweroftwo(number);
    if(ans)
        printf("Yes!! Given number is an Power of 2\n");
    else
        printf("No!! Given number is not  an Power of 2\n");

    

    
    
    
    return 0;
}