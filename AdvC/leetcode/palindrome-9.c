#include<stdio.h>
bool isPalindrome(int x) {
    int remainder;
    long long reverse = 0;
    int y=x;
    while(x>0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = x / 10;
    }
    if(y == reverse)
    {
       return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x = 121;
    int ans = isPalindrome(x);
    if(ans)
        printf("true\n");
    else
        printf("False\n");
        
        
}