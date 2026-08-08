#include <stdio.h>

int main (){
    int temparature;
    printf("Enter the Temparature:");
    scanf("%d",&temparature);
    if(temparature <= 0)
    {
        printf("Weather Condition is FREEZE\n");
    }
    else if(temparature <= 10)
    {
        printf("Weather Condition is too COLD\n");

    }
    else if(temparature <= 20)
    {
        printf("Weather Condition is Little bit cool\n");

    }
    else if(temparature <= 30)
    {
        printf("Weather Condition is Mostly Cloudy\n");

    }
    else
    {
        printf("Weather condition is Hot\n");
    }

    
    return 0;
}