//Number of digits..
#include <stdio.h>

int main (){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int sum = 0;
    int remainder;
    while(number>0)
    {
        remainder = number % 10;
        number = number / 10;
        sum = sum + remainder;
    }
    printf("Number of digits :%d\n",sum);
    return 0;
}