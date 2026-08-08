#include<stdio.h>
int main()
{
    int num1, num2, num3, total ;
    float average;
    scanf("%d %d %d",&num1, &num2, &num3);
    total = num1+num2+num3;
    average = total / 3;
    printf("Total of three numbers: %d\n", total);
    printf("Average of three numbers: %.3f\n",average);
    return 0;

    

}