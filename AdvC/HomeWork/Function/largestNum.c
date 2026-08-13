#include <stdio.h>
int largestOfTwo(int a, int b)
{
    if(a>b)
    {
       return a;
    }
    return b;
}

int main ()
{
    int a, b;
    printf("Enter the value of a and b:");
    
    scanf("%d %d",&a, &b);
    int largest = largestOfTwo(a,b);
    printf("Largest of a and b is: %d\n",largest);    
    return 0;
}