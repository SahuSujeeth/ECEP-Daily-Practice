#include <stdio.h>

int main (){
    int time;
    printf("Enter the current time :");
    scanf("%d",&time);
    if(time < 12)
    {
        printf("Good Morning!!\n");
    }
    else if(time <= 16)
    {
        printf("Good Afternoon!!\n");
    }
    else
    {
        printf("Good Night!!\n");
    }
    return 0;
}