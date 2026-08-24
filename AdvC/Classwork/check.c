#include <stdio.h>

float average(int num1, int num2, int num3)
{
    int total = num1 + num2 + num3;
    float average = total / 3.0;
    return average;
}

int main()
{
    int n1, n2, n3;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);

    float result = average(n1, n2, n3);
    if(result == (int)result)
    {
        printf("Average is %.0f", result);
    }
    else
    {
        printf("Average is %f", result);

    }


    return 0;
}