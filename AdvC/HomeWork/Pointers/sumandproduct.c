#include <stdio.h>
void sum(int *p1, int *p2)
{
    int sum = *p1 + *p2;
    printf("sum of a and b is the: %d\n",sum);  
}
void product(int *p1, int *p2)
{
    int product = *p1 * *p2;
    printf("Product of a and b is: %d\n",product);
    
}
int main ()
{
    int a,b;
    printf("Enter a and b value:");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
    product(&a,&b);
    
    return 0;
}