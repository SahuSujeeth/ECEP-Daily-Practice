#include<stdio.h>
int main()
{
    int  principle_amount, rate_of_interest, time_years;
   // printf()
    scanf("%d %d %d", &principle_amount, &rate_of_interest, &time_years);
    int simple_interest = (principle_amount * rate_of_interest * time_years) / 100;
    printf("%d",simple_interest);
    
}