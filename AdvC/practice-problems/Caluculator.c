#include <stdio.h>
void calculator(int a, int b, char operator)
{
switch(operator)
    {
        case '+':
         int sum = a+b;
          printf("Addition of a and b %d\n",sum);
        break;
        case '*': 
        printf("Multiplecation of a and b %d\n",a*b);
        break;
        case '/': 
        printf("Divsion of a and b %d\n",a/b);
        break;
        case '-': printf("Difference of a and b %d \n" ,a-b);
        break;
        default : printf("Invalid choice\n");
    }
}

int main ()
{
    char choice;
    printf("Enter Your choice:");
    scanf("%c",&choice);
    int a,b;
    printf("Enter the a value and b value:");
    scanf("%d %d",&a, &b);
    calculator(a,b, choice);
    return 0;
}