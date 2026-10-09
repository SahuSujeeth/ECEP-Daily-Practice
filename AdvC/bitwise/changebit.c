#include <stdio.h>

void bit_replace(int num1, int num2)
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    int mask = (1 << n)-1;
    int num = num2 & mask;// get
    num1 = num1 & ~(mask);//clear
    num1 = num1 | num; // replace
    for(int i=31;i>=0;i--)
    {
        if(num1 & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
    printf("\n");
    printf("%d\n",num1);
    
    
    
    
}
int main ()
{
    int num1;
    printf("Enter the number1:");
    scanf("%d",&num1);
    int num2;
    printf("Enter the number2:");
    scanf("%d",&num2);
    bit_replace(num1,num2);

    
    
    return 0;
}