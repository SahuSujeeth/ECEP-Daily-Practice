#include <stdio.h>

int main (){
    int Nth;
    printf("Enter the value of 'n:");
    scanf("%d",&Nth);
    if(Nth == 0 || Nth > 365)
    {
        printf("Invalid Input, n value should be > 0 and <= 365\n");
    }
    else
    {

        printf("Choose First Day:\n");
        printf("1.Sunday\n");
        printf("2.Monday\n");
        printf("3.Tuesday\n");
        printf("4.Wednesday\n");
        printf("5.Thursday\n");
        printf("6.Friday\n");
        printf("7.Saturday\n");
        
        int start_day;
        printf("Enter the option to set the first day:");
        scanf("%d",&start_day);
    
        int total, day;
        if(start_day <= 7 && Nth <=365)
        {
            total = start_day + Nth - 1;
            day = total % 7;
            if(day == 0)
            {
                day = 7;
            }
            switch (day)
            {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
            
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            
            default:
                printf("Invalid Day!!");
                break;
            }
        }
        else
        {
            printf("Invalid Input, first day should be > 0 and <= 7\n");
        }
        
    }
    return 0;
}