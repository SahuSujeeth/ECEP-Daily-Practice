#include <stdio.h>

int main (){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int power = 1;
    for(int i=0; i<=number;i++)
    {
        printf("%d ",power);
        power *= 2;
    }

    return 0;
}