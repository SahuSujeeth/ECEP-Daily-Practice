#include <stdio.h>

int main ()
{
    int choice;
    printf("Enter Your choice:");
    scanf("%d",&choice);
    int a,b;
    printf("Enter the a value and b value:");
    scanf("%d %d",&a, &b);

    switch(choice)
    {
        case 1: int sum = a+b; printf("Addition of a and b %d\n",sum);
        break;
        case 2: printf("Multiplecation of a and b %d\n",a*b);
        break;
        case 3: printf("Divsion of a and b %d\n",a/b);
        break;
        case 4: printf("Difference of a and b %d \n" ,a-b);
        break;
        default : printf("Invalid choice\n");
    }
    return 0;
}