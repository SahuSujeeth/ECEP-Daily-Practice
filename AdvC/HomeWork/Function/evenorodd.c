#include <stdio.h>
int evenodd(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main ()
{

    int result = evenodd(5);
    if(result)
    {
        printf("true\n"); 
    }
    else
    {
        printf("false\n");
        
    }
    
    return 0;
}