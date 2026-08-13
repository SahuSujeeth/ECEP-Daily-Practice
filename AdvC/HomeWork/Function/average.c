#include <stdio.h>
float averageOfThree(int a, int b, int c)
{
   float average = (float)(a+b+c)/3;
    return average;
}

int main ()
{
    int a, b,c;
    printf("Enter the value of a, b and c:");
    
    scanf("%d %d %d",&a, &b, &c);
    float average = averageOfThree(a,b,c);
    printf("Largest of a and b is: %.2f\n",average);    
    return 0;
}